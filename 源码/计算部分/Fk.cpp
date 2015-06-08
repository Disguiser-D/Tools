#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include<math.h>
#include <tchar.h>
#include <iostream>
using namespace std;
int main()
{
	printf("请输入物体重量(单位KG)：");
	long double m;
	cin>>m;
	printf("请输入物体的速度 (千米每小时)：");
	long double v;
	cin>>v;
	printf("输入完成，正在计算...\n");
	long double vv;
	vv=v*v;
	long double Ek;
	Ek=m/2*vv;
	printf("结果为： %f\n", Ek);
	printf("计算完成！\n");
	system("pause");
	return 0;
}
