// Test Console.cpp : 定义控制台应用程序的入口点。

#include "HttpDownloader.h"
#include <Windows.h>
#include <iostream>


void main()
{    
	std::cout << "连接服务器-25%-";
	Sleep(5000);
	std::cout << "-50%-";
	Sleep(5000);
	std::cout << "-75%-";
	Sleep(5000);
	std::cout << "-100%-";
	Sleep(5000);
	std::cout << "***成功" << std::endl;
	Sleep(5000);
    CHttpDownloader dl;
    bool
	//第一个下载任务 “主程序”  命名格式| ToolsBoxInstaller-LV X.X.X.X.exe
	isSuc = dl.Connect("www.eternity.pub", 80);  //检测网址是否存在---↓
    isSuc = dl.Download("/Tools/ToolsBoxInstaller-LV X.X.X.X.exe");  //下载
	std::cout << "┏━━━━━━━━┓ ┏━━━━━━━━┓┏━━━━━━━━━━━━━━━┓" << std::endl;
    std::cout << "┣初始化-检查更新 ┫ " << "┣-----检测中-----┫" << (isSuc ? "┣结果：成功下载更新，将自动安装┫" : "┣          结果|无更新         ┫") << std::endl;
	std::cout << "┗━━━━━━━━┛ ┗━━━━━━━━┛┗━━━━━━━━━━━━━━━┛" << std::endl;  //第一个下载任务结束
	//-------------分割线------------------
	std::cout << "▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲" << std::endl;
	std::cout << "▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼" << std::endl;
	//-------------分割线------------------
	//第二个下载任务 “更新记录” 命名格式| UpdataLog-LV X.X.X.X.txt  
	isSuc = dl.Connect("www.eternity.pub", 80);  //检测网址是否存在---↓
    isSuc = dl.Download("/Tools/Log/UpdataLog-LV X.X.X.X.txt"); //下载
	std::cout << "┏━━━━━━━━┓ ┏━━━━━━━━┓┏━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┣初始化-检测日志 ┫ " << "┣-----检测中-----┫" << (isSuc ? "┣结果：成功下载日志，将自动打开┫" : "┣          结果|无日志         ┫") << std::endl;
	std::cout << "┗━━━━━━━━┛ ┗━━━━━━━━┛┗━━━━━━━━━━━━━━━┛" << std::endl;  //第一个下载任务结束
	std::cout << "                         ◇----------------◇                         " << std::endl;
	std::cout << "                         ◇如有升级自动打开◇                         " << std::endl;
	std::cout << "                         ◇若无升级自动进入◇                         " << std::endl;
	std::cout << "                         ◇----------------◇                         " << std::endl;

	Sleep(5000);
	
}
/*

.....@---------------@
--@ @ @ --------- @ @ @ --
.@ @\@/@ @-------@ @\@/@ @.
.\@|@|@|@/-....--\@|@|@|@/.
. \\\|/// --..--- \\\|/// -
-- \\|// --..----- \\|//.--         佛祖保我成功编译
--- \|/--..---.---- \|/---.                         2015年9月16日18:25:53 LYC
--- =&= ---..------ =&= ---
--- /|\ --------.---/|\ -.-

*/