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
	printf("1.����DNS                                   |\n");
	printf("2.���ô�������� Ϊ��̬                     |\n");
	printf("3.�鿴��ϸ������Ϣ                          |\n");
	printf("4.���ö�̬IP                                |\n");
	printf("5.���ö�̬DNS                               |\n");
	printf("6.�鿴��ǰ���ӵ������Ķ˿ڣ�������          |\n");
	printf("7.�ر�Σ�ն˿�                              |\n");
	printf("8.�鿴��ǰ���ӵ������Ķ˿ڣ�������          |\n");
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
		printf("�����ĵȴ�.......\n");
		system("DKclose.cmd");
	}
	else if (QQQ == 8)
	{
		system("netstat -a");
		system("pause");
	}
}