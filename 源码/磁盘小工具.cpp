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
	printf("     Ӳ��С����\n");
	printf("----------------------\n");
	printf("1.������Ƭ����\n");
	printf("2.���Trimָ���Ƿ���\n");
	printf("3.ɾ����������GHO�ļ�\n");
	int D1;
	printf("���������ѡ������س�ȷ�ϣ�");
	cin >> D1;
	if (D1 == 1)
	{
		system("start Diskclean.cmd");
	}
	else if (D1 == 2)
	{
		system("fsutil behavior QUERY DisableDeleteNotify");
		printf("����ֵ1��ʾϵͳ�Ѿ�������Trim����Ϊ1����δ������\n");
		system("pause");
	}
	else if (D1 == 3)
	{
		system("for %%i in (c: d: e: f: g: h: i: j: k: l: m: n:) do del %%i\*.gho /q /s /f /a");
	}
}