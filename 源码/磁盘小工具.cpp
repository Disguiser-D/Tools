#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include<math.h>
#include <tchar.h>
#include <iostream>
#include <time.h> 
#include<dos.h>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
	printf("     硬盘小工具\n");
	printf("----------------------\n");
	printf("1.磁盘碎片整理\n");
	printf("2.检测Trim指令是否开启\n");
	printf("3.删除本机所有GHO文件\n");
	int D1;
	printf("请输入你的选项后摁回车确认：");
	cin >> D1;
	if (D1 == 1)
	{
		system("start Diskclean.cmd");
	}
	else if (D1 == 2)
	{
		system("fsutil behavior QUERY DisableDeleteNotify");
		printf("返回值1表示系统已经将开启Trim，若为1则是未开启。\n");
		system("pause");
	}
	else if (D1 == 3)
	{
		system("for %%i in (c: d: e: f: g: h: i: j: k: l: m: n:) do del %%i\*.gho /q /s /f /a");
	}
}