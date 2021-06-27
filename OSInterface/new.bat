echo print
set \a var = 1
set \p var2 = asdf
set
for %%i in (a,b,c) do echo %%i
echo %var2%
echo %1
shift
    echo %1
if defined str (echo 变量str已经被赋值，其值为%str%) else (echo 变量str的值为空)
if defined var (echo 变量var已经被赋值，其值为%var%) else (echo 变量var的值为空)
if 1 equ 2 (echo 1=2) else (echo 1!=2)
if "abc" == "xyz" (echo 字符串相等) else (echo 字符串不等)
for /d %%i in (*.*) do echo %i
for /r %%i in (*.*) do echo %i
for /l %%i in (1,1,5) do echo %%i
for /f "skip = 1 token = 1, 4 delims = " %c in (main.c) do @echo %c %d
