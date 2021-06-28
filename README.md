#  OS-Interface

## Windows接口

- 为Unix/Linux操作系统建立兼容的Windows/DOS命令接口，批处理文件中的流程命令
- 批处理文件的扩展名为.BATCH
- 具体命令格式可参照 Windows 的 CMD.EXE 或 MS-DOS 提供的命令
    - IF
    - FOR
    - WHILE(none)
    - SET
    - SHIFT
    - ECHO
    - GOTO
    - :
- 设计命令的名称、参数等格式
- 可以执行扩展名为.BATCH的批处理文件

## 各命令功能

### IF
类似C语言```if```，if 表示将判断是否符合规定的条件，从而决定执行不同的命令。有三种格式:

1) if

语法: if [not] "参数" == "字符串" 待执行的命令
参数如果等于(not表示不等，下同)指定的字符串，则条件成立，运行命令，否则运行下一句。(注意是两个等号)
```
Sample
if "%1" == "a" format a:
if {%1} == {} goto noparms
```

2) if exist
语法: if [not] exist [路径\]文件名 待执行的命令
如果有指定的文件，则条件成立，运行命令，否则运行下一句。
```
Sample
if exist config.sys edit config.sys (表示如果存在这文件，则编辑它，用很难看的系统编辑器)
if exist config.sys type config.sys (表示如果存在这文件，则显示它的内容)
```

3) if errorlevel number
语法: if [not] errorlevel <数字> 待执行的命令
如果程序返回值等于指定的数字，则条件成立，运行命令，否则运行下一句。(返回值必须按照从大到小的顺序排列)
```
Sample
@echo off
XCOPY F:\test.bat D:\
IF ERRORLEVEL 1 (ECHO 文件拷贝失败) Else IF ERRORLEVEL 0 ECHO 成功拷贝文件
pause
```

很多DOS程序在运行结束后会返回一个数字值用来表示程序运行的结果(或者状态)，称为错误码errorlevel或称返回码。
常见的返回码为0、1。通过if errorlevel命令可以判断程序的返回值，根据不同的返回值来决定执行不同的命令。

4) else
语法： if 条件 (成立时执行的命令) else (不成立时执行的命令)
如果是多个条件，建议适当使用括号把各条件包起来，以免出错。
Sample: if 1 == 0 ( echo comment1 ) else if 1==0 ( echo comment2 ) else (echo comment3 )
注：如果 else 的语句需要换行，if 执行的行尾需用“^”连接，并且 if 执行的动作需用(括起来)，否则报错
```
Sample
if 1 == 0 ( echo comment1 ) else if 1==0 ( echo comment2 ) ^
else (echo comment3 )
```

5) 比较运算符:
EQU - 等于 (一般使用“==”)
NEQ - 不等于 (没有 “!=”,改用“ if not 1==1 ”的写法)
LSS - 小于
LEQ - 小于或等于
GTR - 大于
GEQ - 大于或等于

### FOR
- /l:   迭代数值范围
```
for /l %%i in (1,1,5) do @echo %%i --输出1 2 3 4 5
for /l %%i in (1,2,10) do @echo %%i --输出1,3，5,7，9
for /l %%i in (100,-20,1) do @echo %%i --输出100,80,60,40,20
```
- /f:   读取指定文件中的内容
```
for /f "skip = 1 token = 1, 4 delims = " %c in (main.c) do @echo %c %d
```
- /r:   递归扫描所有文件
```
for /r c:\ %%i in (boot.ini) do echo %%i --枚举了c盘所有目录
for /r d:\backup %%i in (1) do echo %%i --枚举d\backup目录
for /r c:\ %%i in (boot.ini) do if exist %%i echo %%i --很好的搜索命令，列举boot.ini存在的目录
```
- /d:   扫描当前目录下的所有文件夹
```
for /d %%i in (c:\*) do echo %%i --显示c盘根目录下的所有目录
for /d %%i in (???) do echo %%i --显示当前目录下名字只有1-3个字母的目录
```

### ECHO
- 语法: echo [{on|off}] [message]
- ECHO [ON | OFF] 打开回显或关闭回显功能
- ECHO 显示当前回显设置
- ECHO [message] 显示信息
- echo off 表示在此语句后所有运行的命令都不显示命令行本身；默认是on，on时会显示如： C:\文件夹路径>命令行
- 在实际应用中我们会把这条命令和重定向符号( 也称为管道符号，一般用 > >> ^ )结合来实现输入一些命令到特定格式的文件中
```Sample
echo off
echo hello world (显示出“hello world”)
echo Windows Registry Editor Version 5.00 > c:\setupreg.reg (此前还没有 setupreg.reg 这个文件)
echo "SourcePath"="D:\\Win2003\\" >> c:\setupreg.reg (追加内容进 setupreg.reg 这个文件)
```

### SET
实例|含义
----|-----
```set```|输出所有已设置变量的名称
```set c```|输出所有以该字符开头的变量的名称
```set \a %var% = 1```|设置一个名称为var 的数值变量
```set \p %var% = abcd```|设置一个名称为var 的字符串变量
```%1 = ???```|设置一个标号为数字的变量内容

### SHIFT
- 数字变量的值左移一位

### GOTO
- 语法：goto label (label是参数，指定所要转向的批处理程序中的行。)
- 指定跳转到标签行，找到标签行后，程序将处理从下一行开始的命令。
- label标签的名字可以随便起，但是最好是有意义的，字母前必须加个冒号“:”来表示这个字母是标签。
- goto命令就是根据这个冒号来寻找下一步跳到到那里。经常与 if 配合使用，根据不同的条件来执行不同的命令组。
 ```Sample
 @echo off
 :begin
 copy a:*.* d:\back
 echo Please put a new disk into driver A
 pause
 goto begin
```

### WHILE

- batch没有while语句
