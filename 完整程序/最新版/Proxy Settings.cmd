@echo off
echo ���ԭ��DNS
netsh interface ip del dns name="%a%" all
echo ��ʼ������dns
netsh interface ip set dns name="%a%" source=static addr=202.106.16.36
echo ���
echo ��ʼ���ĸ�dns
netsh interface ip add dns "%a%" 8.8.8.8 index=2
pause

