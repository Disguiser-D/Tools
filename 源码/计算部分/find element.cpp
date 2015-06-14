#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include<math.h>
#include <tchar.h>
#include <iostream>
using namespace std;
int main()
{
R:
	printf("*****************************************\n");
	printf("*   ********************************    *\n");
	printf("*   *       元素周期查找系统       *    *\n");
	printf("*   *       版权：归作者所有       *    *\n");
	printf("*   ********************************    *\n");
	printf("*****************************************\n");
	printf("*         1.输入1按元素字母查找         *\n");
	printf("*         1.输入1按元素序数查找         *\n");
	printf("*         1.输入1按元素质量查找         *\n");
	printf("*****************************************\n");
	short a;
	cin>>a;
	if (a==1)
	{
		printf("请输入元素字母：\n");
		long char b;
		cin>>b;
		switch(b)
		{
		case H:
			{
				printf("元素为 氢 原子序号为1 \n");
				printf("相对原子质量为1.008\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为非金属");
			}
		case He:
			{
				printf("元素为 氦 原子序号为2 \n");
				printf("相对原子质量为4.003\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为非金属");
			}
		case Li:
			{
				printf("元素为 锂 原子序号为3 \n");
				printf("相对原子质量为6.941\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为金属");
			}
		case Be:
			{
				printf("元素为 铍 原子序号为4 \n");
				printf("相对原子质量为9.012\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为金属");
			}
		case B:
			{
				printf("元素为 硼 原子序号为5 \n");
				printf("相对原子质量为10.81\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为非金属");
			}
		case C:
			{
				printf("元素为 碳 原子序号为6 \n");
				printf("相对原子质量为12.01\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为非金属");
			}
		case N:
			{
				printf("元素为 氮 原子序号为7 \n");
				printf("相对原子质量为14.01\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为非金属");
			}
		case O:
			{
				printf("元素为 氧 原子序号为8 \n");
				printf("相对原子质量为16.00\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为非金属");
			}
		case F:
			{
				printf("元素为 氟 原子序号为9 \n");
				printf("相对原子质量为19.00\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为非金属");
			}
		case Ne:
			{
				printf("元素为 氖 原子序号为10 \n");
				printf("相对原子质量为20.18\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为非金属");
			}
		case Na:
			{
				printf("元素为 钠 原子序号为11 \n");
				printf("相对原子质量为22.99\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为金属");
			}
		case Mg:
			{
				printf("元素为 镁 原子序号为12 \n");
				printf("相对原子质量为24.31\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为金属");
			}
		case Al:
			{
				printf("元素为 铝 原子序号为13 \n");
				printf("相对原子质量为26.98\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为金属");
			}
		case Si:
			{
				printf("元素为 硅 原子序号为14 \n");
				printf("相对原子质量为28.09\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为非金属");
			}
		case P:
			{
				printf("元素为 磷 原子序号为15 \n");
				printf("相对原子质量为30.97\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为非金属");
			}
		case S:
			{
				printf("元素为 硫 原子序号为16 \n");
				printf("相对原子质量为32.06\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为非金属");
			}
		case Ci:
			{
				printf("元素为 氯 原子序号为17 \n");
				printf("相对原子质量为35.45\n");
				printf("此元素不是人造元素。");
				printf("此元素无放射性\n");
				printf("该元素为非金属");
			}