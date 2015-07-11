@echo off
echo 清空原有DNS
netsh interface ip del dns name="%a%" all
echo 开始更改主dns
netsh interface ip set dns name="%a%" source=static addr=202.106.16.36
echo 完成
echo 开始更改副dns
netsh interface ip add dns "%a%" 8.8.8.8 index=2
pause

