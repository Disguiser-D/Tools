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
	printf("获取CPU资料:");
	system("wmic cpu get name,addresswidth,processorid");
	Sleep(1500);
	system("pause");
	printf("获取磁盘资料：");
	system("wmic DISKDRIVE get deviceid,Caption,size,InterfaceType");
	Sleep(1500);
	system("pause");
	printf("获取主板资料:");
	system("wmic BaseBoard get Manufacturer,Product,Version,SerialNumber");
	Sleep(1500);
	system("pause");
	printf("获取内存数:");
	system("wmic memlogical get totalphysicalmemory");
	Sleep(1500);
	system("pause");
	printf("获取屏幕分辨率:");
	system("wmic DESKTOPMONITOR where Status='ok' get ScreenHeight,ScreenWidth");
	Sleep(1500);
	system("pause");
	printf("获取分区资料：");
	system("wmic LOGICALDISK get name,Description,filesystem,size,freespace");
	Sleep(1500);
}