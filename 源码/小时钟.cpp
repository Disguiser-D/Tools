#include<Windows.h>
#include<stdio.h>
int main()
{
	SYSTEMTIME sys;
	while (1)
	{
		system("cls");
		GetLocalTime(&sys);
		printf("ǰ��Ϊ����,��ʾ�������ʱ�����������ΪСʱ�����ӣ����롣����������\n");
		printf("%4d/%2d /%2d %2d:%2d:%2d\n", sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute,sys.wMilliseconds);
		Sleep(1);
	}
	return 1;
}