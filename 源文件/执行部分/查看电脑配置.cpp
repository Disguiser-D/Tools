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
	printf("��ȡCPU����:");
	system("wmic cpu get name,addresswidth,processorid");
	Sleep(1500);
	system("pause");
	printf("��ȡ�������ϣ�");
	system("wmic DISKDRIVE get deviceid,Caption,size,InterfaceType");
	Sleep(1500);
	system("pause");
	printf("��ȡ��������:");
	system("wmic BaseBoard get Manufacturer,Product,Version,SerialNumber");
	Sleep(1500);
	system("pause");
	printf("��ȡ�ڴ���:");
	system("wmic memlogical get totalphysicalmemory");
	Sleep(1500);
	system("pause");
	printf("��ȡ��Ļ�ֱ���:");
	system("wmic DESKTOPMONITOR where Status='ok' get ScreenHeight,ScreenWidth");
	Sleep(1500);
	system("pause");
	printf("��ȡ�������ϣ�");
	system("wmic LOGICALDISK get name,Description,filesystem,size,freespace");
	Sleep(1500);
}