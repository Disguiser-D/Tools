//GPi OpenCL kernels

typedef uint GPiSize;

uint BitReverse(uint a, int level);
int DownLevelOfSize(GPiSize size);
float GetFloatPrivate(__global const int* data,
                      const int size);
void SetFloatPrivate(__global int* data,
                     const int size,
                     const float value);
uint ModExp(uint e);

/**************************************
 **         Common functions         **
 **************************************/

uint BitReverse(uint a, int level)
{
    if (level <= 0 || level > 31)
        return 0;
    uint data = a;
    uint mask;

    mask = 0x55555555;
    data = (((data >> 1) & mask) | ((data & mask) << 1));
    mask = 0x33333333;
    data = (((data >> 2) & mask) | ((data & mask) << 2));
    mask = 0x0f0f0f0f;
    data = (((data >> 4) & mask) | ((data & mask) << 4));
    mask = 0x00ff00ff;
    data = (((data >> 8) & mask) | ((data & mask) << 8));
    return ((data >> 16) | (data << 16))>>(32 - level);
}

int DownLevelOfSize(GPiSize size)
{
    int level = -1;
    while(size > 0)
    {
        ++level;
        size>>=1;
    }
    return level;
}

float GetFloatPrivate(__global const int* data,
                      const int size)
{
    float result = 0;
    for (int i = min(size, 3) - 1 ; i >= 0 ; --i)
        result = (result / (float)BASE) + (float)data[i];
    return result;
}

void SetFloatPrivate(__global int* data,
                      const int size,
                      const float value)
{
    float t = value;
    for (int i = 0 ; i < size && i < 3 ; ++i)
    {
        data[i] = (int)t;
        t = (t - (float)data[i]) * BASE;
    }
}

/**************************************
 **          Basic kernels           **
 **************************************/

__kernel void Add(__global int* result,
                  __global const int* a,
                  const int a_times,
                  __global const int* b,
                  const int b_times)
{
    GPiSize tid = get_global_id(0);
    result[tid] = a[tid] * a_times + b[tid] * b_times;
}

__kernel void AddCarry(__global int* result,
                       __global int* carry,
                       __global const int* a,
                       const int a_times,
                       __global const int* b,
                       const int b_times)
{
    GPiSize tid = get_global_id(0);
    GPiSize gsize = get_global_size(0);

    long tmp = (long)a[tid] * a_times
             + (long)b[tid] * b_times;
    int low = (int)(tmp % BASE);
    if (low >= (BASE>>1)+((int)tid&1))
        low -= BASE;
    if (low < -(BASE>>1)+((int)tid&1))
        low += BASE;
    int high = (int)((tmp - low) / BASE);

    result[tid] = low;
    if (tid > 0)
        carry[tid-1] = high;
    else
        carry[gsize-1] = 0;
}

__kernel void AddInt(__global int* data,
                     const int v0,
                     const int v1)
{
    data[0] += v0;
    data[1] += v1;
}

__kernel void ArithmeticMean(__global int* result,
                             __global int* remains,
                             __global const int* a,
                             __global const int* b)
{
    GPiSize tid = get_global_id(0);
    int sum = a[tid] + b[tid];
    int remain = (sum & 1);
    result[tid] = (sum - remain) / 2;
    if (tid != get_global_size(0) - 1)
        remains[tid + 1] = remain * (BASE>>1);
    else
        remains[0] = 0;
}

__kernel void Carry(__global int* data,
                    __global int* carry_bits)
{
    GPiSize tid = get_global_id(0);
    if (tid == 0)
    {
        carry_bits[get_global_size(0)-1] = 0;
        return;
    }
    int current = data[tid];
    int remain = current % BASE;

    if (remain < -((int)BASE>>1)+((int)tid&1))
        remain += BASE;
    if (remain >= ((int)BASE>>1)+((int)tid&1))
        remain -= BASE;
    int div = (current - remain) / BASE;

    data[tid] = remain;
    carry_bits[tid-1] = div;
}

__kernel void CompareExp(__global const int* a,
                         __global int* result,
                         const uint times)
{
    GPiSize tid = get_global_id(0);
    GPiSize gsize = get_global_size(0);
    int diff = gsize * times;
    for (GPiSize i = 0 ; i < times ; ++i)
    {
        int pos = gsize * i + tid;
        if (a[pos] != 0)
        {
            diff = pos;
            break;
        }
    }
    result[tid] = diff;
}

__kernel void Convolution(__global int* result,
                          __global int* carry,
                          __global int* a,
                          __global int* b)
{
    GPiSize tid = get_global_id(0);
    GPiSize gsize = get_global_size(0);

    long val = 0;
    for (GPiSize i = 0 ; i < (gsize>>1) && i <= tid ; ++i)
    {
        GPiSize j = tid - i;
        if (j >= (gsize>>1))
            continue;
        val += (long)a[i] * (long)b[j];
    }

    int low = (int)(val % BASE);
    int high = (int)((val - low)/BASE);

    result[tid] = low;
    if(tid > 0)
        carry[tid-1] = high;
    else
        carry[gsize-1] = 0;
}

__kernel void SetDevide2(__global int* data,
                         __global int* remains)
{
    GPiSize tid = get_global_id(0);
    int sum = data[tid];
    int remain = (sum & 1);
    data[tid] = (sum - remain) / 2;
    if (tid < get_global_size(0) - 1)
        remains[tid + 1] = remain * (BASE>>1);
    if (tid == 0)
        remains[0] = 0;
}

__kernel __attribute__((reqd_work_group_size(1, 1, 1)))
void InitReciprocalOfSqueueRoot2(__global int* data, const int data_size)
{
    float rsqrt_value = rsqrt((float)2);
    SetFloatPrivate(data, data_size, rsqrt_value);
}

__kernel __attribute__((reqd_work_group_size(1, 1, 1)))
void InitReciprocalOfSqueueRoot(__global int* data,
                                         const int data_size,
                                         __global const int* value,
                                         const int value_size)
{
    float rsqrt_value = rsqrt(GetFloatPrivate(value, value_size));
    SetFloatPrivate(data, data_size, rsqrt_value);
}

__kernel __attribute__((reqd_work_group_size(1, 1, 1)))
void InitReciprocal(__global int* data,
                             const int data_size,
                             __global const int* value,
                             const int value_size)
{
    float r = 1/GetFloatPrivate(value, value_size);
    SetFloatPrivate(data, data_size, r);
}

__kernel void SetTimes(__global int* result,
                       __global const int* value,
                       const int times)
{
    GPiSize tid =  get_global_id(0);
    result[tid] = value[tid] * times;
}

__kernel void SetZero(__global int* result)
{
    result[get_global_id(0)] = 0;
}

/**************************************
 **               FNT                **
 **************************************/


#ifdef USING_NATIVE_MOD_M

    #define MOD_M(r, x) \
        r = (x) % _M

#else //ifdef USING_NATIVE_MOD_M

    #define RM (((ulong)1<<63)/_M)
    #define MOD_M(r, x) \
    { \
        ulong tmpx = (x); \
        r = tmpx-((tmpx>>31)*RM>>32)*_M; \
        while (r >= _M) r -= _M; \
    }

#endif //ifdef USING_NATIVE_MOD_M else

#ifdef USING_NATIVE_DIV_QB

    #define DIV_QB(V, R, B) \
    { \
        R = V % QUAD_BASE; \
        if (R >= QUAD_BASE/2+B) \
            R -= QUAD_BASE; \
        if (R < -QUAD_BASE/2+B) \
            R += QUAD_BASE; \
        V = (V-R)/QUAD_BASE; \
    }

#else //ifdef USING_NATIVE_DIV_QB

    #define RQB (((long)1<<15)/QUAD_BASE)
    #define DIV_QB(V, R, B) \
    { \
        long _v = V; \
        int _b = (B); \
        bool _native = (V < 0); \
        if (_native) \
            _v = -_v; \
        long _n = ((_v>>6)*RQB)>>9; \
        R = _v - _n * QUAD_BASE; \
        while (R >= (QUAD_BASE>>1) + _b) \
        { \
            R -= QUAD_BASE; \
            ++_n; \
        } \
        if (_native) \
        { \
            R = -R; \
            _n = -_n; \
        } \
        V = _n; \
    }

#endif //ifdef USING_NATIVE_DIV_QB else

//2^e % _M
uint ModExp(uint e)
{
    ulong a = 2;
    ulong result = 1;
    for(uint te = e ; te ; te >>= 1)
    {
        if( (te & 1) == 1 )
            MOD_M(result, result * a);
        MOD_M(a, a * a);
    }
    return (uint)result;
}

__kernel void InitRingTable(__global uint* ring, const int increase_level)
{
    GPiSize tid = get_global_id(0);
    ring[tid] = ModExp(tid*RING_BASE_LEVEL << increase_level);
}

__kernel void FNTInit(
    __global uint* fnt_data,
    __global const int* ints)
{
    __local uint loc_cache[FNT_INIT_BUFFER_SIZE];
    GPiSize tid = get_global_id(0);
    GPiSize lid = get_local_id(0);

    long value = ints[tid];

    for (int i = 0 ; i < 3 ; ++i)
    {
        long r;
        DIV_QB(value, r, (i&1));

        if (r < 0)
            r += _M;

        loc_cache[(lid<<2) + (3-i)] = (uint)r;
    }
    if (value < 0)
        value += _M;
    loc_cache[lid<<2] = (uint)value;

    barrier(CLK_LOCAL_MEM_FENCE);

    GPiSize gid = get_group_id(0);
    GPiSize lsize = get_local_size(0);
    for (int i = 0 ; i < 4 ; ++i)
        fnt_data[lsize * ((gid<<2) | i) + lid] = loc_cache[lsize * i + lid];
    //event_t e = async_work_group_copy(fnt_data+gid*lsize*4, loc_cache, lsize*4, 0);
    //wait_group_events(1, &e);
}

//BR_LEVEL = 1,2,3,4;
__kernel __attribute__((reqd_work_group_size(1<<BR_LEVEL*2, 1, 1)))
void FNTBitReverse(
    __global uint* fnt_data, const int level)
{
    __local uint low[1 << BR_LEVEL*2];
    __local uint high[1 << BR_LEVEL*2];

    GPiSize gid = get_group_id(0);
    GPiSize rgid = BitReverse(gid, level-BR_LEVEL*2);
    if(gid > rgid)
        return;

    GPiSize lid = get_local_id(0);
    GPiSize pos = ((lid & (((1<<BR_LEVEL)-1)<<BR_LEVEL)) << level-BR_LEVEL*2)
               | (lid & ((1<<BR_LEVEL)-1));
    GPiSize posl = pos | (gid << BR_LEVEL);
    GPiSize posh = pos | (rgid << BR_LEVEL);

    low[lid] = fnt_data[posl];
    high[lid] = fnt_data[posh];

    barrier(CLK_LOCAL_MEM_FENCE);

    GPiSize rlid = BitReverse(lid, BR_LEVEL*2);
    uint swp = low[lid];
    low[lid] = high[rlid];
    high[rlid] = swp;

    barrier(CLK_LOCAL_MEM_FENCE);

    fnt_data[posl] = low[lid];
    fnt_data[posh] = high[lid];
}

__kernel void FNTBlock(
    __global uint* global_x,
    __constant uint* ring_high,
    __constant uint* ring_low,
    const int p1_index,
    const int p2_index,
    const int p3_index,
    const int level)
{
    __local uint x[FNT_LOCAL_BUFFER_SIZE];

    GPiSize lid = get_global_id(1);
    GPiSize gid = get_global_id(0);
    #define p0_level p1_index
    //GPiSize p0_level = p1_index
    int p1_level = p2_index - p1_index;
    int p2_level = p3_index - p2_index;
    //int p3_level = level - p3_index;
    GPiSize p2_bits = lid >> p0_level;
    GPiSize p3_bits = gid >> p1_level;
    GPiSize p0_bits = lid ^ (p2_bits << p0_level);
    GPiSize p1_bits = gid ^ (p3_bits << p1_level);

    //load from global memroy to local memory
    GPiSize src0 = (p3_bits<<p3_index)|(p2_bits<<p2_index)|(p1_bits<<p1_index)|p0_bits;
    GPiSize src1 = src0 | (1<<(p3_index-1));
    #define loc0 lid
    //GPiSize loc0 = lid;
    GPiSize loc1 = loc0 | (1<<(p0_level+p2_level-1));
    x[loc0] = global_x[src0];
    x[loc1] = global_x[src1];

    GPiSize bits0_left = p2_bits<<(p0_level+1);
    GPiSize bits0_right = p0_bits;
    GPiSize bitsw = (p1_bits<<p0_level)|p0_bits;
    int gwlevel = p2_index;
    GPiSize loc_offset_bit = 1<<p0_level;
    for (int i = 0 ; i < p2_level ; ++i, ++gwlevel, loc_offset_bit<<=1)
    {
        barrier(CLK_LOCAL_MEM_FENCE);
        GPiSize bitsw_all = bitsw<<(MAX_RING_LEVEL - 1 - gwlevel);
        GPiSize bits0 = bits0_left | bits0_right;
        GPiSize bits1 = bits0 | loc_offset_bit;

        GPiSize kh = bitsw_all>>(MAX_RING_LEVEL-1-RING_TABLE_LEVEL);

        ulong x0 = x[bits0];
        ulong x1 = x[bits1];
        ulong r0;
        MOD_M(r0, ring_high[kh] * x1);

        if(gwlevel > RING_TABLE_LEVEL)
        {
            GPiSize kl = (bitsw_all>>(MAX_RING_LEVEL-1-RING_TABLE_LEVEL*2))
              & ((1<<RING_TABLE_LEVEL)-1);
            ulong w0 = ring_low[kl];

            if(gwlevel > RING_TABLE_LEVEL*2)
            {
                GPiSize kt = bitsw_all & ((1<<(MAX_RING_LEVEL-1-RING_TABLE_LEVEL*2))-1);
                MOD_M(w0, w0 << kt*3); //max(kt)=7, max(kt*3)=21<32
            }

            MOD_M(r0, r0 * w0);
        }

        ulong r1 = _M - r0;
        r0 += x0;
        r1 += x0;
        x[bits0] = (uint)(r0>=_M ? r0-_M : r0);
        x[bits1] = (uint)(r1>=_M ? r1-_M : r1);

        bits0_right |= loc0 & loc_offset_bit;
        bits0_left &= ~(loc_offset_bit<<1);
        bitsw |= src0 & (1<<gwlevel);
    }

    //save to global memory
    global_x[src0] = x[loc0];
    global_x[src1] = x[loc1];
}

#undef p0_level
#undef loc0

__kernel void NTMultiply(
    __global uint* result,
    __global const uint* a,
    __global const uint* b,
    const int level,
    const uint modular_inverse_n
    )
{
    GPiSize tid = get_global_id(0);
    GPiSize size = (GPiSize)1<<level;
    GPiSize rtid = (size - tid) % size;
    ulong t;
    if (tid > rtid)
        return;

    uint al = a[tid];
    uint bl = b[tid];
    MOD_M(t, (ulong)al * bl);
    MOD_M(t, t * modular_inverse_n);
    uint rl = (uint)t;
    uint ah = a[rtid];
    uint bh = b[rtid];
    MOD_M(t, (ulong)ah * bh);
    MOD_M(t, t * modular_inverse_n);
    uint rh = (uint)t;
    result[tid] = rh;
    result[rtid] = rl;
}

__kernel void NTSqueue(
    __global uint* result,
    __global const uint* a,
    const int level,
    const uint modular_inverse_n)
{
    GPiSize tid = get_global_id(0);
    GPiSize size = (GPiSize)1<<level;
    GPiSize rtid = (tid == 0 ? 0 : size - tid);
    ulong t;
    if (tid > rtid)
        return;

    uint al = a[tid];
    MOD_M(t, (ulong)al * al);
    MOD_M(t, t * modular_inverse_n);
    uint rl = (uint)t;
    uint ah = a[rtid];
    MOD_M(t, (ulong)ah * ah);
    MOD_M(t, t * modular_inverse_n);
    uint rh = (uint)t;
    result[tid] = rh;
    result[rtid] = rl;
}

__kernel void FNTRestore(
    __global const uint* fnt_data,
    __global int* ints)
{
    __local char s[5][FNT_RESTORE_WORK_GROUP_SIZE * 5];

    GPiSize tid = get_global_id(0);
    GPiSize gid = get_group_id(0);
    GPiSize lid = get_local_id(0);
    GPiSize lsize = get_local_size(0); //assert(lsize>=16)

    for (GPiSize i = 0 ; i < 5 ; ++i)
    {
        long val = (long)fnt_data[lsize * (gid * 4 + i) + lid];

        if (val > (_M>>1))
            val -= _M;
        for (GPiSize j = 0 ; j < 5 ; ++j)
        {
            //r＝val%QUAD_BASE[-50~50],val=(val-r)/QUAD_BASE

            long r;

            DIV_QB(val, r, ((int)tid & 1));
            s[j][lsize * i + lid] = (char)r;
        }
    }

    barrier(CLK_LOCAL_MEM_FENCE);

    GPiSize pos = lid * 4 + 3;
    ints[tid] =
        ((int)s[0][pos+0] + s[1][pos+1] + s[2][pos+2] + s[3][pos+3] + s[4][pos+4])
        * (QUAD_BASE * QUAD_BASE * QUAD_BASE)
       +((int)s[0][pos+1] + s[1][pos+2] + s[2][pos+3] + s[3][pos+4] + s[4][pos+5])
        * (QUAD_BASE * QUAD_BASE)
       +((int)s[0][pos+2] + s[1][pos+3] + s[2][pos+4] + s[3][pos+5] + s[4][pos+6])
        * QUAD_BASE
       +((int)s[0][pos+3] + s[1][pos+4] + s[2][pos+5] + s[3][pos+6] + s[4][pos+7]);
}
