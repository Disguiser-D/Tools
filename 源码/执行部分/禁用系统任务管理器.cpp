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
	system("cls");
	printf("请输入你要关闭任务管理器还是开启任务器？\n");
	printf("若开启输入1，关闭输入2.\n");
	int W;
	cin >> W;
	if (W == 1)
	{
		system("taskkill /f /im wscript.exe");
		system("pause");
	}
	else if (W == 2)
	{
		system("start RENwu.vbs");
		system("pause");
	}
}