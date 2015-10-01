#define _CRT_SECURE_NO_DEPRECATE
#include <math.h>
#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
#include<dos.h>
#include <iostream>
using namespace std;
int main()
{
	system("title 视频简易处理工具 制作：TZY    LYC");
	void HideCursor();
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	}
A:
	printf("__________________________________________________\n");
	printf("|    【1】截取视频         【2】视频加水印       |\n");
	printf("--------------------------------------------------\n");
	printf("请输入您的选项:");
	short enter;
	cin >> enter;
	switch (enter)
	{
	case 1:
	{
		 FILE *fpi;
		 if ((fpi = fopen("TEMP.ini", "r")) == NULL)
		 {
			 printf("正在为首次运行初始化做准备..\n");
			 printf("请确认首次初始化安装的位置：");
			 printf("\n");
			 printf("  【1】C盘  【2】D盘  【3】E盘   【4】F盘    【5】H盘\n");
			 printf("  【6】Z盘  【7】P盘  【8】G盘   【9】I盘    【10】J盘\n");
			 short a;
			 printf("请输入你要安装的位置：");
			 cin >> a;
			 switch (a)
			 {
			 case 1:{system("XCOPY \"zmpeg.exe\" \"C:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "C"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 2:{system("XCOPY \"zmpeg.exe\" \"D:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "D"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 3:{system("XCOPY \"zmpeg.exe\" \"E:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "E"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 4:{system("XCOPY \"zmpeg.exe\" \"F:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "F"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 5:{system("XCOPY \"zmpeg.exe\" \"H:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "H"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 6:{system("XCOPY \"zmpeg.exe\" \"Z:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "Z"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 7:{system("XCOPY \"zmpeg.exe\" \"P:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "P"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 10:{system("XCOPY \"zmpeg.exe\" \"J:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "J"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 8:{system("XCOPY \"zmpeg.exe\" \"G:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "G"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 9:{system("XCOPY \"zmpeg.exe\" \"I:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "I"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 printf(" \n");
			 default:
			 {
				printf("请输入正确的数值！！！初始化失败！！");
				Sleep(3000);
				system("cls");
				goto A;
			 }
			 }
		 }
		 else
		 {
			 printf("初始化完成！\n");
		 }
		 FILE *fp1;
		 char P[8192];
		 char p1[] = "Judgment";
		 char p2[] = "initialization ";
		 sprintf(P, "%s\n%s\n", p1, p2);
		 fp1 = fopen("TEMP.ini", "w");
		 fprintf(fp1, "%s", P);
		 fclose(fp1);
		 system("cls");
		 printf("上次你安装文件的位置为：");
		 FILE *fp;
		 char ch;
		 if ((fp = fopen("TMP.txt", "rt")) == NULL)
		 {
			 printf("Cannot open file strike any key exit!");
			 exit(1);
		 }
		 ch = fgetc(fp);
		 while (ch != EOF)
		 {
			 putchar(ch);
			 ch = fgetc(fp);
		 }
		 fclose(fp);
		 printf("\n");
		 printf("请输入您初始化安装文件的位置：");
		 char c;
		 cin >> c;
		 printf("请输入截取视频的起始时间(例如截取为15秒为00：00：15)：");
		 char starttime[8460];
		 cin >> starttime;													
		 printf("\n");
		 printf("请输入截取视频的终止时间(同上）：");
		 char overtime[8460];
		 cin >> overtime;
		 printf("\n");
		 printf("请输入截取视频的位置(例如：C:\\zzz.mp4)");
		 char path1[8460];
		 cin >> path1;
		 printf("\n");
		 printf("请输入截取后生成视频的位置(同上）：");
		 char path2[8460];
		 cin >> path2;
		 printf("\n");
		 FILE *fp3;
		 char P1[8192];
		 sprintf(P1, "%c:\\zmpeg\\zmpeg.exe -ss %s -t %s -i %s %s&&exit",c,starttime,overtime,path1,path2);
		 fp3 = fopen("TMP1.cmd", "w");
		 fprintf(fp3, "%s", P1);
		 fclose(fp3);
		 printf("Please wait!");
		 Sleep(1500);
		 system("start TMP1.cmd");
		 MessageBoxA(NULL, "操作正在进行，完成后将自动关闭", "视频剪辑模块", MB_OK);
		 break;
	}

	}
}