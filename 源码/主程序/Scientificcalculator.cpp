#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include<math.h>
#include <iostream>
#include <time.h> 
#include<dos.h>
#include<conio.h>
#include<cmath>
#include <string.h>
using namespace std;
int main()
{
	system("title ��ѧ������ ������TZY");
	system("color 87");
	void HideCursor();
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	}
	Q1:
	printf("1.����һ�����Ŀ���\n");
	printf("2.����һ������ƽ��\n");
	printf("3.����һ���������η�\n");
	printf("4.����һ�����Ŀ�����\n");
	printf("5.����ϵ��������\n");
	printf("6.����һ������N�η�\n");
	printf("7.��һ������N�η�\n");
	printf("���������ѡ����س�ȷ�ϣ�");
	short num;
	cin >> num;
	switch (num)
	{
	case 1:
	{
			  C1:
			  int num1;
			  printf("��������Ҫ����������");
			  cin >> num1;
			  if (num1 >= 0)
			  {
				  printf("����ǣ�");
				  cout << sqrt(num1) << endl;
			  }
			  else if (num1 < 0)
			  {
				  printf("���󣡿���������С��0����");
			  }
			  printf("����1���ż��㿪��������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C1;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
	case 2:
	{
		  C2:
			  long double num3;
			  long double num4;
			  printf("��������Ҫƽ��������\n");
			  cin >> num3;
			  num4 = num3*num3;
			  printf("���Ϊ%.10f",num4);
			  printf("����1���ż���ƽ��������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C2;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
	}
	case 3:
	{
			  C3:
			  long double num5, num6;
			  printf("��������Ҫ����������");
			  cin >> num5;
			  num6 = num5*num5*num5;
			  printf("�������ǣ�%.10f",num6);
			  printf("����1���ż�������������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C3;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
	}
	case 4:
	{
		  C4:
			  long double num7;
			  printf("��������Ҫ������������");
			  cin >> num7;
			  cout << pow(num7, 1.0 / 3);
			  printf("\n");
			  printf("����1���ż���ƽ��������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C4;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
     }
	case 5:
	{
			  C5:
			  long double x1, x2, y1, y2;
			  printf("�������һ�������Xֵ��");
			  cin >> x1;
			  printf("\n");
			  printf("�������һ�������Yֵ��");
			  cin >> y1;
			  printf("\n");
			  printf("������ڶ��������Xֵ��");
			  cin >> x2;
			  printf("\n");
			  printf("������ڶ��������Yֵ��");
			  cin >> y2;
			  printf("\n");
			  printf("���Ժ�...\n");
			  printf("���ڼ���...\n");
			  long double x3, y3;
			  x3 = x2 - x1;
			  y3 = y2 - y1;
			  long double k;
			  k = x3/y3;
			  long double z;
			  z = k*x1;
			  long double b;
			  b = y1 - z;
			  printf("KֵΪ��%.2f",k);
			  printf("    ");
			  printf("BֵΪ��%.2f",b);
			  printf("    ");
			  printf("��������ʽΪ��y=%.2f",k);
			  printf("x+%.2f",b);
			  printf("\n");
			  printf("����1�����ô���ϵ��������������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C5;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
    }
	case 6:
	{
			  C6:
			  long double num8;
			  long double num9;
			  long double l;
			  printf("��������ҪN�η�������");
			  cin >> num8;
			  printf("��������Ҫ��NΪ��");
			  cin >> num9;
			  l=pow(num8, num9);
			  cout << l << endl;
			  printf("����1���ż���һ������N�η�������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C6;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
    }
	case 7:
	{
			  printf("��������Ҫ��������");
			  long double num10, num11,num12;
			  cin >> num10;
			  printf("��������Ҫ����NΪ��");
			  cin >> num11;
			  num12=pow(num10, 1.0 / num11);
			  cout << num12 << endl;
			  printf("����1���ż��㿪һ������N�η�������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C6;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
    }
	default:
	{
			   printf("��������Ч��ѡ���\n");
			   printf("������������...\n");
			   printf("3\n");
			   Sleep(1000);
			   printf("2\n");
			   Sleep(1000);
			   printf("1\n");
			   Sleep(1000);
			   FILE *fp;
			   fp = fopen("TEMP.cmd","w");
			   fprintf(fp, "@echo off\n");
			   fprintf(fp, "@start Scientificcalculator.exe\n");
			   fclose(fp);
			   system("TEMP.cmd");
			   system("del TEMP.cmd");

	}
    }
	}
	return 0;
}