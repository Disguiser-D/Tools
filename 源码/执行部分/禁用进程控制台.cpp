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
	system("title ���ý��̿���̨");
A:
	printf("|-----------------------------------------------------|\n");
	printf("|                   ���ý��̿���̨                    |\n");
	printf("|-----------------------------------------------------|\n");
	printf("|            *******************************          |\n");
	printf("|            *     1.�������������        *          |\n");
	printf("|            *     2.�������������        *          |\n");
	printf("|            *     3.��ֹ��������          *          |\n");
	printf("|            *     4.�ָ���ֹ��������      *          |\n");
	printf("|            *******************************          |\n");
	printf("|-----------------------------------------------------|\n");
	printf("����������ѡ������س�������");
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
		printf("��������̲����س�ȷ�ϣ�");
		char a[256];
		cin >> a;
		printf("��������Ҫ��ü����̣�����)��");
		int num2;
		cin>>num2;
		char achBuf[256];
		memset(achBuf, 0, sizeof(achBuf));	 //����ַ���
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
		printf("��������ȷ��ѡ����������س���");
		Sleep(3000);
		system("cls");
		goto A;
	}
}