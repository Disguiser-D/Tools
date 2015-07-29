#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:4244)
#pragma warning(disable:4046)
#pragma warning(disable:4060)
#pragma warning(disable:4129)
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
	system("title 禁用进程控制台");
A:
	printf("|-----------------------------------------------------|\n");
	printf("|                   禁用进程控制台                    |\n");
	printf("|-----------------------------------------------------|\n");
	printf("|            *******************************          |\n");
	printf("|            *     1.禁用任务管理器        *          |\n");
	printf("|            *     2.启用任务管理器        *          |\n");
	printf("|            *     3.禁止进程运行          *          |\n");
	printf("|            *     4.恢复禁止进程运行      *          |\n");
	printf("|            *******************************          |\n");
	printf("|-----------------------------------------------------|\n");
	printf("请输入您的选项后并摁回车继续：");
	short num1;
	cin >> num1;
	if (num1 == 1)
	{
		system("start RENwu.vbs");
		system("pause");
	}
	else if (num1 == 2)
	{
		system("taskkill /f /im wscript.exe");
		system("pause");
	}
	else if (num1 == 3)
	{
		printf("请输入进程并摁回车确认：");
		char a[256];
		cin >> a;
		printf("请输入你要多久检测进程（毫秒)：");
		int num2;
		cin>>num2;
		char achBuf[256];
		memset(achBuf, 0, sizeof(achBuf));	 //清空字符串
		FILE *fp;
		fp = fopen("process.vbs", "a+");
		fwrite(achBuf, 1, strlen(achBuf), fp);
		fprintf(fp, "* \n");
		fprintf(fp, "i.terminate() \n");
		fprintf(fp, "next\n");
		fprintf(fp, "wscript.sleep 1000 \n");
		fprintf(fp, "loop\n");
		fclose(fp);
	}
	else if (num1 == 4)
	{
		system("taskkill /f /im wscript.exe");
		system("pause");
	}
	else if (num1 != 1 && num1 != 2 && num1 != 3 && num1 != 4)
	{
		printf("ERROR!\n");
		printf("请输入正确的选项！，即将返回程序！");
		Sleep(3000);
		system("cls");
		goto A;
	}
}