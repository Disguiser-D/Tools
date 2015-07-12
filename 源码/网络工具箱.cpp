#define _CRT_SECURE_NO_WARNINGS
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
	system("del TEMP1.cmd");
	system("del TEMP2.cmd");
	system("cls");
	int p1, o1;
	FILE *fpi, *fpo;
	extern int main(int  a, int b);
	if ((fpi = fopen("color.txt", "r")) == NULL)
	{
		system("color 87");
	}
	else
	{
		fscanf(fpi, "%d%d", &p1, &o1);
		fclose(fpi);
		system("color 07");
	}
	system("title 网络工具箱");
	system("cls");
	printf("____________________________________________\n");
	printf("1.重置DNS                                   |\n");
	printf("2.设置代理服务器 为静态                     |\n");
	printf("3.查看详细网络消息                          |\n");
	printf("4.设置动态IP                                |\n");
	printf("5.设置动态DNS                               |\n");
	printf("6.查看当前连接到本机的端口（内网）          |\n");
	printf("7.关闭危险端口                              |\n");
	printf("8.查看当前连接到本机的端口（公网）          |\n");
	printf("9.设置程序颜色                              |\n");
	printf("10.网络稳定性测试                           |\n");
	printf("---------------------------------------------\n");
	int QQQ;
	cin >> QQQ;
	if (QQQ == 1)
	{
		system("ipconfig /flushdns");
		system("pause");
	}
	else if (QQQ == 2)
	{
		system("start Proxy Settings.cmd");
	}
	else if (QQQ == 3)
	{
		system("ipconfig /all");
		printf("扫描已完成！\n");
		system("pause");
	}
	else if (QQQ == 4)
	{
		system("start Dynamic IP settings.cmd");
	}
	else if (QQQ == 5)
	{
		system("start Dynamic DNS Settings.cmd");
	}
	else if (QQQ == 6)
	{
		system("netstat -a -b ");
		printf("扫描已完成！\n");
		system("pause");
	}
	else if (QQQ == 7)
	{
		printf("请耐心等待.......\n");
		system("DKclose.cmd");
	}
	else if (QQQ == 8)
	{
		system("netstat -a");
		printf("扫描已完成！\n");
		system("pause");
	}
	else if (QQQ == 9)
	{
		printf("输入1将更改为黑底白字\n");
		printf("输入2更改为初始颜色\n");
		int k;
		cin >> k;
		if (k == 1)
		{
			p1 = 0;
			o1 = 0;
			fpo = fopen("color.txt", "w");
			fprintf(fpo, "%d, %d\n", p1, o1);
			fclose(fpo);
			printf("设置已成功！重启程序后将生效！\n");
			Sleep(2000);
		}
		else if (k == 2)
		{
			FILE *fp1;
			fp1 = fopen("TEMP1.cmd", "w");
			fprintf(fp1, "@echo off\n");
			fprintf(fp1, "@start TEMP2.cmd\n");
			fclose(fp1);
			printf("设置已成功！重启程序后将生效！\n");
			Sleep(2000);
			system("start /min TEMP1.cmd");
			FILE *fp;
			fp = fopen("TEMP2.cmd", "w");
			fprintf(fp, "@echo off\n");
			fprintf(fp, "@echo 正在应用您设置的颜色...\n");
			fprintf(fp, "@echo 请稍后...n");
			fprintf(fp, "@ping www.baidu.com -n 5\n");
			fprintf(fp, "@del /F /S /Q color.txt\n");
			fprintf(fp, "@echo 已完成！\n");
			fprintf(fp, "@taskkill /f /im cmd.exe\n");
			fclose(fp);
			printf("设置已成功！重启程序后将生效！\n");
		}
	}
	else if (QQQ == 10)
	{
		system("ping 180.97.33.108 -n 200");
		system("pause");
	}
}