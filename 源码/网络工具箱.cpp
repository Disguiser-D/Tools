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
	printf("____________________________________________\n");
	printf("1.重置DNS                                   |\n");
	printf("2.设置代理服务器 为静态                     |\n");
	printf("3.查看详细网络消息                          |\n");
	printf("4.设置动态IP                                |\n");
	printf("5.设置动态DNS                               |\n");
	printf("6.查看当前连接到本机的端口（内网）          |\n");
	printf("7.关闭危险端口                              |\n");
	printf("8.查看当前连接到本机的端口（公网）          |\n");
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
		system("pause");
	}
}