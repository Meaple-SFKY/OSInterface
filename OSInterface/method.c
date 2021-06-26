//
//  method.c
//  OSInterface
//
//  Created by sfky on 2021/6/25.
//

#include "method.h"

short labelCount;

bool strCmp(char *str_fir, char *str_sec) {
    bool ifEqu = true;
    
    // TODO
    if ((str_fir == NULL) && (str_sec != NULL)) {
        ifEqu = false;
    } else if ((str_fir != NULL) && (str_sec == NULL)) {
        ifEqu = false;
    } else if ((str_fir != NULL) && (str_sec != NULL)) {
        short len_fir = getStrLen(str_fir);
        short len_sec = getStrLen(str_sec);
        if (len_fir != len_sec) {
            ifEqu = false;
        } else {
            for (short i = 0; i < len_fir; i++) {
                if (*(str_fir + i) != *(str_sec + i)) {
                    ifEqu = false;
                }
            }
        }
    }
    
    return ifEqu;
}

bool ifIsSpace(char ch) {
    bool ifSpace = false;
    
    // TODO
    if (ch == (char)32) {
        ifSpace = true;
    }
    
    return ifSpace;
}

bool ifIsEnd(char ch) {
    bool ifEnd = false;
    
    // TODO
    if (ch == (char)10) {
        ifEnd = true;
    }
    
    return ifEnd;
}

bool ifIsAt(char ch) {
    bool ifAt = false;
    
    // TODO
    if (ch == (char)64) {
        ifAt = true;
    }
    
    return ifAt;
}

bool ifIsColon(char ch) {
    bool ifColon = false;
    
    // TODO
    if (ch == (char)58) {
        ifColon = true;
    }
    
    return ifColon;
}

bool ifIsEcho(char *str) {
    bool ifEcho = false;
    char *strEcho = (char *)malloc(5 * sizeof(char));
    *strEcho = 'e';
    *(strEcho + 1) = 'c';
    *(strEcho + 2) = 'h';
    *(strEcho + 3) = 'o';
    *(strEcho + 4) = (char)10;
    
    // TODO
    if (str != NULL) {
        if (strCmp(strEcho, str) == true) {
            ifEcho = true;
        }
    }
    
    return ifEcho;
}

bool ifIsFor(char *str) {
    bool ifFor = false;
    char *strFor = (char *)malloc(4 * sizeof(char));
    *strFor = 'f';
    *(strFor + 1) = 'o';
    *(strFor + 2) = 'r';
    *(strFor + 3) = (char)10;
    
    // TODO
    if (str != NULL) {
        if (strCmp(strFor, str) == true) {
            ifFor = true;
        }
    }
    
    return ifFor;
}

bool ifIsGoto(char *str) {
    bool ifGoto = false;
    char *strGoto = (char *)malloc(5 * sizeof(char));
    *strGoto = 'g';
    *(strGoto + 1) = 'o';
    *(strGoto + 2) = 't';
    *(strGoto + 3) = 'o';
    *(strGoto + 4) = (char)10;
    
    // TODO
    if (str != NULL) {
        if (strCmp(strGoto, str) == true) {
            ifGoto = true;
        }
    }
    
    return ifGoto;
}

bool ifIsIf(char *str) {
    bool ifIf = false;
    char *strIf = (char *)malloc(3 * sizeof(char));
    *strIf = 'i';
    *(strIf + 1) = 'f';
    *(strIf + 2) = (char)10;
    
    // TODO
    if (str != NULL) {
        if (strCmp(strIf, str) == true) {
            ifIf = true;
        }
    }
    
    return ifIf;
}

bool ifIsSet(char *str) {
    bool ifSet = false;
    char *strSet = (char *)malloc(4 * sizeof(char));
    *strSet = 's';
    *(strSet + 1) = 'e';
    *(strSet + 2) = 't';
    *(strSet + 3) = (char)10;
    
    // TODO
    if (str != NULL) {
        if (strCmp(strSet, str) == true) {
            ifSet = true;
        }
    }
    
    return ifSet;
}

bool ifIsShift(char *str) {
    bool ifShift = false;
    char *strShift = (char *)malloc(6 * sizeof(char));
    *strShift = 's';
    *(strShift + 1) = 'h';
    *(strShift + 2) = 'i';
    *(strShift + 3) = 'f';
    *(strShift + 4) = 't';
    *(strShift + 5) = (char)10;
    
    // TODO
    if (str != NULL) {
        if (strCmp(strShift, str) == true) {
            ifShift = true;
        }
    }
    
    return ifShift;
}

bool ifIsEQU(char *str) {
    bool ifEQU = false;
    char *strEQU = (char *)malloc(4 * sizeof(char));
    *strEQU = 'E';
    *(strEQU + 1) = 'Q';
    *(strEQU + 2) = 'U';
    *(strEQU + 3) = (char)10;
    
    // TODO
    if (str != NULL) {
        if (strCmp(strEQU, str) == true) {
            ifEQU = true;
        }
    }
    
    return ifEQU;
}

bool ifIsNEQ(char *str) {
    bool ifNEQ = false;
    char *strNEQ = (char *)malloc(4 * sizeof(char));
    *strNEQ = 'N';
    *(strNEQ + 1) = 'E';
    *(strNEQ + 2) = 'Q';
    *(strNEQ + 3) = (char)10;
    
    // TODO
    if (str != NULL) {
        if (strCmp(strNEQ, str) == true) {
            ifNEQ = true;
        }
    }
    
    return ifNEQ;
}

bool ifIsLSS(char *str) {
    bool ifLSS = false;
    char *strLSS = (char *)malloc(4 * sizeof(char));
    *strLSS = 'L';
    *(strLSS + 1) = 'S';
    *(strLSS + 2) = 'S';
    *(strLSS + 3) = (char)10;
    
    // TODO
    if (str != NULL) {
        if (strCmp(strLSS, str) == true) {
            ifLSS = true;
        }
    }
    
    return ifLSS;
}

bool ifIsLEQ(char *str) {
    bool ifLEQ = false;
    char *strLEQ = (char *)malloc(4 * sizeof(char));
    *strLEQ = 'L';
    *(strLEQ + 1) = 'E';
    *(strLEQ + 2) = 'Q';
    *(strLEQ + 3) = (char)10;
    
    // TODO
    if (str != NULL) {
        if (strCmp(strLEQ, str) == true) {
            ifLEQ = true;
        }
    }
    
    return ifLEQ;
}

bool ifIsGTR(char *str) {
    bool ifGTR = false;
    char *strGTR = (char *)malloc(4 * sizeof(char));
    *strGTR = 'G';
    *(strGTR + 1) = 'T';
    *(strGTR + 2) = 'R';
    *(strGTR + 3) = (char)10;
    
    // TODO
    if (str != NULL) {
        if (strCmp(strGTR, str) == true) {
            ifGTR = true;
        }
    }
    
    return ifGTR;
}

bool ifIsGEQ(char *str) {
    bool ifGEQ = false;
    char *strGQU = (char *)malloc(4 * sizeof(char));
    *strGQU = 'G';
    *(strGQU + 1) = 'E';
    *(strGQU + 2) = 'Q';
    *(strGQU + 3) = (char)10;
    
    // TODO
    if (str != NULL) {
        if (strCmp(strGQU, str) == true) {
            ifGEQ = true;
        }
    }
    
    return ifGEQ;
}

short getStrLen(char *sentence) {
    short len = 0;
    
    // TODO
    for (short i = 0; *(sentence + i) != (char)10; i++) {
        len++;
    }
    len++;
    
    return len;
}

char *getLabel(char *sentence) {
    char *label = NULL;
    
    // TODO
    if (ifIsColon(*sentence)) {
        for (short i = 0; ifIsEnd(*sentence) == false; i++) {
            if (ifIsSpace(*(sentence + i))) {
                label = (char *)malloc(i * sizeof(char));
                for (short j = 1; j < i; j++) {
                    *(label + j - 1) = *(sentence + j);
                }
                *(label + i - 1) = (char)10;
                break;
            }
        }
    }
    
    return label;
}

labelNode *formatLabel(char **page) {
    labelNode *labelInfo = NULL;
    
    // TODO
    short loca = 0;
    short temp = 0;
    char *str = NULL;
    
    for (short i = 0; i < pageLength; i++) {
        if(ifIsColon(*(*(page + i))) == true) {
            str = getLabel(*(page + i));
            if (str != NULL) {
                loca = i;
            }
        }
    }
    
    labelInfo = (labelNode *)malloc(loca * sizeof(labelNode));
    
    for (short i = 0; i < pageLength; i++) {
        if(ifIsColon(*(*(page + i))) == true) {
            str = getLabel(*(page + i));
            short len = getStrLen(str);
            if (str != NULL) {
                (*(labelInfo + temp)).locat = i;
                (*(labelInfo + temp)).label = (char *)malloc(len * sizeof(char));
                for (short j = 0; j < len; j++) {
                    *((*(labelInfo + temp)).label + j) = *(str + j);
                }
                temp++;
            }
        }
    }
        
    labelCount = temp;
    
    return labelInfo;
}

char **oneToTwoDem(char *str) {
    char **twoDem = NULL;
    
    // TODO
    
    return twoDem;
}
