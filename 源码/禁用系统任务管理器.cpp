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
	printf("��������Ҫ�ر�������������ǿ�����������\n");
	printf("����������1���ر�����2.\n");
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