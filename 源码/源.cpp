#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
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
	MAIN:
	printf("程序初始化中，请稍后...\n");
	printf("■");
	system("title 工具箱V1.0.6    by--tzy/lyc/zzy");
	printf("■");
	system("color 0A");
	printf("■■■");
	system("mode con cols=80 lines=25");
    S:
	printf("  ************************************************************************\n");
	printf("  *                       1.修复无法粘贴文件                             *\n");
	printf("  *                       2.QQ刷屏                                       *\n");
	printf("  *                       3.转换磁盘格式为NIFS                           *\n");
	printf("  *                       4.网络工具箱                                   *\n");
	printf("  *                       5.禁用任务管理器                               *\n");
	printf("  *                       6.修复损坏文件                                 *\n");
	printf("  *                       7.查看电脑配置                                 *\n");
	printf("  *                       8.进行数学专业计算                             *\n");
	printf("  *                       9.使用秒表计时                                 *\n");
	printf("  *                       10.玩一点小游戏                                *\n");
	printf("  *                       11.尚未完成的功能                              *\n");
	printf("  *                       12.查看作者信息                                *\n");
	printf("  ************************************************************************\n");
	Sleep(100);
	printf("================================================================================\n");                    
	printf("请");
	Sleep(50);
	printf("输");
	Sleep(60);
	printf("入");
    Sleep(70);
	printf("你");
	Sleep(80);
	printf("的");
	Sleep(70);
	printf("选");
	Sleep(60);
	printf("择");
	Sleep(50);
	printf("：");
	Sleep(100);
	int number1;
	cin>>number1;
	switch (number1)
	{
	case 1:
		{
			system("cls");
			printf("即将为您重启EXPLORER.EXE系统进程！！");
			system("pause");
			system("taskkill /f /im explorer.exe");
	        system("start C:\\Windows\\explorer.exe");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start D:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start E:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start F:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start G:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start H:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start I:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start J:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start K:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start L:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start M:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start N:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start O:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start P:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start Q:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start R:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start S:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start T:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start U:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start V:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start W:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start W:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
			system("start Y:\\Windows\\explorer.exe");
			system("cls");
			printf("是否成功重启？若没有请摁任意键继续...");
			system("pause");
            system("start W:\\Windows\\explorer.exe");
			system("cls");
			break;
		}
	case 2:
		{
		int T3 = 0;
		system("cls");
		printf("若QQ发送消息快捷键为ENTER输入1若不是输入2 ");
		int N;
        cin>>N;
        if(N==1)
        {
            printf("请输入你要刷屏的次数： ");
			int T1;
           std::cin >> T1;
           int T2 = 1;
           Sleep(5000);
           while (T2<=T1) 
        {
         ++T2;
           Sleep(100);//Simulation of quiet
               keybd_event(0x11, 0, 0, 0);// press ctrl
               keybd_event(0x56, 0, 0, 0); // press v
               keybd_event(0x56, 0, 2, 0); //release v
               keybd_event(0x11, 0, 2, 0); //release ctrl   
               keybd_event(VK_RETURN, 0, 0, 0);
               keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
        }
		   printf("返回程序输入1.退出输2.");
		   int G;
		   cin>>G;
		   if (G==1)
		   {
		   system("cls");  
		   goto S; 
           }
		   else if (G==2)
		   {
			    
		   }
		}
           else if(N==2)
        {
           printf("请输入你要刷屏的次数： ");
			int T1;
           std::cin >> T1;
           int T2 = 1;
           Sleep(5000);
           while (T2<=T1) 
        {
          ++T2;
           Sleep(100);//Simulation of quiet
              keybd_event(0x11, 0, 0, 0);// press ctrl
		      keybd_event(0x56, 0, 0, 0); // press v
		      keybd_event(0x56, 0, 2, 0); //release v
	          keybd_event(0x11, 0, 2, 0); //release ctrl   
              keybd_event(0x11, 0, 0, 0);// press ctrl
		      keybd_event(VK_RETURN, 0, 0, 0);//输入ENTER
              keybd_event(0x56, 0, 2, 0); //release v
	          keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);//输入ENTER
        }
          
		   printf("返回程序输入1.退出输2.");
		   int G;
		   cin>>G;
		   if (G==1)
		   {
		   system("cls");  
		   goto S; 
           }
		   else if (G==2)
		   {
			    
		   }
        }
		break;
		}
	case 3:
		{
			system("cls");
			printf("这个程序可以将FAT32磁盘格式转为NIFS格式！\n");
			printf("由于FAT32无法支持单个4GB以上的文件所以建议转换！\n");
			printf("转换不会损伤你的文件！");
			system("set /p A=请输入你要转换的盘符:");
            system("Convert %A%/fs:ntfs");
			printf("成功！");
			system("pause");
		    printf("返回程序输入1.退出输2.");
		   int G;
		   cin>>G;
		   if (G==1)
		   {
		   system("cls");  
		   goto S; 
           }
		   else if (G==2)
		   {
			    
		   }
			break;
		}
	case 4:
	 {
		system("cls");
	    printf("____________________________________________\n");
		printf("1.重置DNS输入                               |\n");
		printf("2.设置代理服务器 为静态                     |\n");
		printf("3.查看详细网络消息                          |\n");
		printf("4.设置动态IP                                |\n");
		printf("5.设置动态DNS                               |\n");
		printf("---------------------------------------------\n");
		int QQQ;
		cin>>QQQ;
		if (QQQ==1)
		{
		system("ipconfig /flushdns");
		system("pause");
		}
		else if (QQQ==2)
		{
			system("start Proxy Settings.cmd");
		}
		else if (QQQ==3)
		{
           system("ipconfig /all");
		}
		else if (QQQ==4)
		{
			system("start Dynamic IP settings.cmd");
		}  
		else if (QQQ==5)
		{
			system("start Dynamic DNS Settings.cmd");
		}
		printf("返回程序输入1.退出输2.");
		int G;
		cin>>G;
		 if (G==1)
		 {
		 system("cls");  
		 goto S; 
         }
		 else if (G==2)
		 {
			 system("exit");   
		 }
          break;
	 }
	case 5:
		{
			system("cls");
			printf("请输入你要关闭任务管理器还是开启任务器？\n");
			printf("若开启输入1，关闭输入2.\n");
			int W;
			cin>>W;
            if(W==1)
			{
				system("taskkill /f /im wscript.exe");
				system("pause");
			}
			else if(W==2)
			{
				system("start RENwu.vbs");
				system("pause");
			}
	case 6:
		{
			system("Chkdsk");
			system("pause");
		}
	case 7:
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
		   printf("返回程序输入1.退出输2.");
			int G;
		   cin>>G;
		   if (G==1)
		   {
		   system("cls");  
		   goto S; 
           }
		   else if (G==2)
		   {
			    
		   }
           break;
		}               
	case 8:
	{
		printf("输入1运用勾股定理计算斜边长\n");
		printf("输入2使用海伦公式\n");
		printf("输入3使用加减乘除计算器\n");
		int Y;
		cin>>Y;
		if(Y==1)
		{
          float a2, b2, c2;
          printf("请输入两个直角边数值:\n");
          printf("比如:a b\n");
	      scanf("%f%f", &a2, &b2);								/*从键盘中输入两个直角边*/
          c2=hypot(a2,b2);										/*调用hypot函数，返回斜边值赋给c*/
          printf("斜边是:%5.2f\n", c2);						/*将斜边值输出*/
          getchar();
          system("pause");
		}
		else if (Y==2)
		{
           	printf("输入3条边长计算面积\n");
			float a,b,c;
	        float s,area;
	        scanf("%f,%f,%f", &a,&b,&c);
	        if(a+b>c && b+c>a && a+c>b)
	    {
		s=(a+b+c)/2;
		area=(float)sqrt(s *(s-a)*(s-b)*(s-c));
		printf("The area is: %f\n",area);
		if (a==b && a==c)
			printf("Equilateral triangle");
			else if (a==b || a==c || b==c)
				printf("An isosceles triangle\n");
			else if ((a *a+b * b == c* c) || (a *a + c * c==b*b) || (b *b+c*c==a*a))
				printf("Right triangle\n");
			else
				printf("Ordinary triangle");
			}
			else 
				printf("Not a triangle");
             system("pause");
		}
		else if (Y==3)
		{
        int N;
        cin>>N;
        switch(N);
        {
	       printf("请输入代数式: a+(-,*,/)b \n");
	       float a,b;
	       char t;
	       scanf("%f%c%f",&a,&t,&b);
	       switch(t)
	       {
	         case '+':printf("%f\n",a+b);break;
	         case '-':printf("%f\n",a-b);break;
	         case '*':printf("%f\n",a-b);break;
	         case '/':
		     if(!b)
		     printf("Divisor can not be 0");
		     else
		     printf("%f\n",a/b);
		     break;
		     default:printf("Input error! \n");
	       }
          system("pause");
         }
         break;
		}
	case 9:
		{
         using namespace std; 
         cout<<"\n\n\n\n\n\n 请单击\"Enter\"键开始或停止:\n"; 
         clock_t start,end,current; 
         cin.get(); 
         start=clock(); 
         cout<<"正在计时中.......\n\n" 
         <<"已用时: \n"; 
         int i=0; 
         fflush(stdin); 
         while(!kbhit()) //kbhit()库函数的作用是检测键盘是否有键按下 
         if(current=(clock()-start)/CLOCKS_PER_SEC==i) 
         cout<<i++<<"秒\b\b\b\b\b\b\b\b\b"; 
         end=clock(); 
         float time=(end-start)/CLOCKS_PER_SEC; 
         cout<<"你所用的时间是: "<<time<<" 秒"<<endl; 
         getch();//将程序暂停 
         system("pause");
         break;
		}
	case 10:
		{
			printf("输入1为吃豆子游戏，输入2为俄罗斯方块。");
			int UU;
			cin>>UU;
			if (UU==1)
			{
				system("start pacman.exe");
			}
			else if (UU==2)
			{
				system("start ConsoleApplication1.exe");
			}
			break;
		}
	case 11:
		{
			system("start Diskclean.cmd");
			break;
		}
	case 12:
		{
			Sleep(100);
			printf("================================================================================\n");
			printf("----程");
			Sleep(50);
			printf("序");
			Sleep(60);
			printf("开");
			Sleep(70);
			printf("发");
			Sleep(80);
			printf("：");
			Sleep(70);
			printf("TZY-");
			Sleep(60);
			printf("LYC");
			Sleep(50);
			printf("----协");
			Sleep(50);
			printf("作");
			Sleep(50);
			printf("开");
			Sleep(60);
			printf("发");
			Sleep(70);
			printf("：");
			Sleep(80);
			printf("ZZY");
			Sleep(300);
			printf("----------即将返回主菜单");
				Sleep(5000);
				goto MAIN;
		}

      }
    }
  }
}

