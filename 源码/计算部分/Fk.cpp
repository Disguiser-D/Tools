#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include<math.h>
#include <tchar.h>
#include <iostream>
using namespace std;
int main()
{
	printf("��������������(��λKG)��");
	long double m;
	cin>>m;
	printf("������������ٶ� (ǧ��ÿСʱ)��");
	long double v;
	cin>>v;
	printf("������ɣ����ڼ���...\n");
	long double vv;
	vv=v*v;
	long double Ek;
	Ek=m/2*vv;
	printf("���Ϊ�� %f\n", Ek);
	printf("������ɣ�\n");
	system("pause");
	return 0;
}
