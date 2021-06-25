//
//  element.h
//  OSInterface
//
//  Created by sfky on 2021/6/24.
//

#ifndef element_h
#define element_h

#include <stdio.h>

typedef short modeType;
typedef short elemType;

typedef struct keyEle {
    modeType mode;
    // @        &       %       =       \
    // (        )       ?       "       '
    // .        ,       ;       :       +
    // -        *       /       <       >
    // ^        +=      -=      *=      /=
    // %=       %%      in      if      echo
    // for      goto    set     shift
} keyEle;

typedef struct opeEle {
    modeType mode;
    // EQU      ==
    // NEQ      !=
    // LSS      <
    // LEQ      <=
    // GTR      >
    // GEQ      >=
    // +        -       *       /       %
    // +=       -=      *=      /=      %=
    // &        |       ^       %%
} opeEle;

typedef struct echoEle {
    modeType mode;
    // echo [on | off]
    // echo str
    // echo str > File
    // echo str >> File
} echoEle;

typedef struct ifEle {
    modeType mode;
    // if {%1} == {} goto noparms
    // if exist [path\]File type [path\]File; type(show)
    // if errorlevel 1 (echo error)
    // if 1 == 0 (echo comment1) else (echo comment2)
} ifEle;

typedef struct forEle {
    modeType mode;
    // for /l %%i in (1,1,5) do @echo %%i
    // for /r c:\ %%i in (*.exe) do echo %%i
    // for /d %%i in (c:\*) do echo %%i
    // for /f "skip = 1 token = 1, 4 delims = " %c in (main.c) do @echo %c %d
} forEle;

typedef struct setEle {
    modeType mode;
    // set var=nihao
    // set /p var="name":
    // set /a var = 2 * 2
} setEle;

typedef struct shiftEle {
    modeType mode;
    // shift /n; 0 <= n < 8
} shiftEle;

typedef struct gotoEle {
    modeType mode;
    // goto start
} gotoEle;

typedef struct othEle {
    modeType mode;
    // digital
    // var
    // str
    // filePath
} wordEle;

typedef struct elemMode {
    elemType type;
    // key
    // ope
    // echo
    // if
    // for
    // set
    // shift
    // goto
    // the
} elemMode;

elemType parser(char *);

#endif /* element_h */
