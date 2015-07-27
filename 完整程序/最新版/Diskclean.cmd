@echo off

title 碎片整理程序

color 87

set num=

set /p num=请输入你要整理的磁盘盘符,比如C,不需要带冒号,要全盘整理请输入数字1:

if "%num%"=="" goto 0

if "%num%"=="1" goto 1

0:

@echo.命令正在运行,请耐心等待.

defrag %num%: /u /v

@each 整理已完成！

@pause

@exit

:1

@echo.命令正在运行,请耐心等待.

defrag c: /u /v

defrag d: /u /v

defrag e: /u /v

defrag f: /u /v

defrag g: /u /v

defrag h: /u /v

defrag i: /u /v

defrag j: /u /v

defrag k: /u /v

defrag l: /u /v

defrag n: /u /v

defrag m: /u /v

defrag o: /u /v

defrag p: /u /v

defrag q: /u /v

defrag r: /u /v

defrag s: /u /v

defrag t: /u /v

defrag u: /u /v

defrag v: /u /v

defrag w: /u /v

defrag x: /u /v

defrag y: /u /v

defrag z: /u /v

@pause