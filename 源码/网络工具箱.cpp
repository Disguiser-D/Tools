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
	system("title ���繤����");
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
	printf("9.���ó�����ɫ                              |\n");
	printf("10.�����ȶ��Բ���                           |\n");
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
		printf("ɨ������ɣ�\n");
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
		printf("ɨ������ɣ�\n");
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
		printf("ɨ������ɣ�\n");
		system("pause");
	}
	else if (QQQ == 9)
	{
		printf("����1������Ϊ�ڵװ���\n");
		printf("����2����Ϊ��ʼ��ɫ\n");
		int k;
		cin >> k;
		if (k == 1)
		{
			p1 = 0;
			o1 = 0;
			fpo = fopen("color.txt", "w");
			fprintf(fpo, "%d, %d\n", p1, o1);
			fclose(fpo);
			printf("�����ѳɹ��������������Ч��\n");
			Sleep(2000);
		}
		else if (k == 2)
		{
			FILE *fp1;
			fp1 = fopen("TEMP1.cmd", "w");
			fprintf(fp1, "@echo off\n");
			fprintf(fp1, "@start TEMP2.cmd\n");
			fclose(fp1);
			printf("�����ѳɹ��������������Ч��\n");
			Sleep(2000);
			system("start /min TEMP1.cmd");
			FILE *fp;
			fp = fopen("TEMP2.cmd", "w");
			fprintf(fp, "@echo off\n");
			fprintf(fp, "@echo ����Ӧ�������õ���ɫ...\n");
			fprintf(fp, "@echo ���Ժ�...n");
			fprintf(fp, "@ping www.baidu.com -n 5\n");
			fprintf(fp, "@del /F /S /Q color.txt\n");
			fprintf(fp, "@echo ����ɣ�\n");
			fprintf(fp, "@taskkill /f /im cmd.exe\n");
			fclose(fp);
			printf("�����ѳɹ��������������Ч��\n");
		}
	}
	else if (QQQ == 10)
	{
		system("ping 180.97.33.108 -n 200");
		system("pause");
	}
}