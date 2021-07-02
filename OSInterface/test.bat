echo Hello, OS!
echo %asada% 2 > test.txt
goto label
set asada=10
echo The value of var-"asada": %asada%
:label
echo Brfore shift, argv[2] is: %1%
shift /2
echo After shift, argv[2] is: %1%
set /a ari=2*(3*(1+9))
echo %ari%
set count=3
:label1
set /a count=%count%-1
echo %count%
if %count%=="0" (goto label2) else (goto label1)
:label2
echo %1% >> test.txt
set /p a=Please input val of a:
echo The value of var-"a" is: %a%
echo All var are following:
set
echo Bye-Bye!
