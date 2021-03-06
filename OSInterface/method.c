//
//  method.c
//  OSInterface
//
//  Created by sfky on 2021/6/25.
//

#include "method.h"

short labelCount;
short varCount;

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
    if (ch == endChar) {
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

bool ifIsComma(char ch) {
    bool ifComma = false;
    
    // TODO
    if (ch == (char)44) {
        ifComma = true;
    }
    
    return ifComma;
}

bool ifIsMod(char ch) {
    bool ifMod = false;
    
    // TODO
    if (ch == (char)37) {
        ifMod = true;
    }
    
    return ifMod;
}

bool ifIsColon(char ch) {
    bool ifColon = false;
    
    // TODO
    if (ch == (char)58) {
        ifColon = true;
    }
    
    return ifColon;
}
short ifIsBrack(char ch) {
    short ifBrack = -1;
    
    // TODO
    if (ch == (char)40) {
        ifBrack = 0;
    } else if (ch == (char)41) {
        ifBrack = 1;
    }
    
    return ifBrack;
}

bool ifIsEqo(char ch) {
    bool ifEqo = false;
    
    // TODO
    if (ch == (char)61) {
        ifEqo = true;
    }
    
    return ifEqo;
}

bool ifIsEcho(char *str) {
    bool ifEcho = false;
    
    // TODO
    if (str != NULL) {
        char *strEcho = (char *)malloc(5 * charSize);
        *strEcho = 'e';
        *(strEcho + 1) = 'c';
        *(strEcho + 2) = 'h';
        *(strEcho + 3) = 'o';
        *(strEcho + 4) = endChar;
        
        if (strCmp(strEcho, str)) {
            ifEcho = true;
        }
    }
    
    return ifEcho;
}

bool ifIsFor(char *str) {
    bool ifFor = false;
    
    // TODO
    if (str != NULL) {
        char *strFor = (char *)malloc(4 * charSize);
        *strFor = 'f';
        *(strFor + 1) = 'o';
        *(strFor + 2) = 'r';
        *(strFor + 3) = endChar;
        
        if (strCmp(strFor, str)) {
            ifFor = true;
        }
    }
    
    return ifFor;
}

bool ifIsGoto(char *str) {
    bool ifGoto = false;
    
    // TODO
    if (str != NULL) {
        char *strGoto = (char *)malloc(5 * charSize);
        *strGoto = 'g';
        *(strGoto + 1) = 'o';
        *(strGoto + 2) = 't';
        *(strGoto + 3) = 'o';
        *(strGoto + 4) = endChar;
        
        if (strCmp(strGoto, str) == true) {
            ifGoto = true;
        }
    }
    
    return ifGoto;
}

bool ifIsIf(char *str) {
    bool ifIf = false;
    
    // TODO
    if (str != NULL) {
        char *strIf = (char *)malloc(3 * charSize);
        *strIf = 'i';
        *(strIf + 1) = 'f';
        *(strIf + 2) = endChar;
        
        if (strCmp(strIf, str) == true) {
            ifIf = true;
        }
    }
    
    return ifIf;
}

bool ifIsSet(char *str) {
    bool ifSet = false;
    
    // TODO
    if (str != NULL) {
        char *strSet = (char *)malloc(4 * charSize);
        *strSet = 's';
        *(strSet + 1) = 'e';
        *(strSet + 2) = 't';
        *(strSet + 3) = endChar;
        
        if (strCmp(strSet, str) == true) {
            ifSet = true;
        }
    }
    
    return ifSet;
}

bool ifIsShift(char *str) {
    bool ifShift = false;
    
    // TODO
    if (str != NULL) {
        char *strShift = (char *)malloc(6 * charSize);
        *strShift = 's';
        *(strShift + 1) = 'h';
        *(strShift + 2) = 'i';
        *(strShift + 3) = 'f';
        *(strShift + 4) = 't';
        *(strShift + 5) = endChar;
        
        if (strCmp(strShift, str) == true) {
            ifShift = true;
        }
    }
    
    return ifShift;
}

bool ifIsEls(char *str) {
    bool ifEls = false;
    
    // TODO
    if (str != NULL) {
        char *strElse = (char *)malloc(5 * charSize);
        *strElse = 'e';
        *(strElse + 1) = 'l';
        *(strElse + 2) = 's';
        *(strElse + 3) = 'e';
        *(strElse + 4) = endChar;
        
        if (strCmp(strElse, str) == true) {
            ifEls = true;
        }
    }
    
    return ifEls;
}

bool ifIsEQU(char *str) {
    bool ifEQU = false;
    
    // TODO
    if (str != NULL) {
        char *strEQU = (char *)malloc(4 * charSize);
        char *chEqu = (char *)malloc(3 * charSize);
        *strEQU = 'E';
        *(strEQU + 1) = 'Q';
        *(strEQU + 2) = 'U';
        *(strEQU + 3) = endChar;
        *chEqu = '=';
        *(chEqu + 1) = '=';
        *(chEqu + 2) = endChar;
        
        if (strCmp(strEQU, str) == true) {
            ifEQU = true;
        } else if (strCmp(chEqu, str) == true) {
            ifEQU = true;
        }
    }
    
    return ifEQU;
}

bool ifIsNEQ(char *str) {
    bool ifNEQ = false;
    
    // TODO
    if (str != NULL) {
        char *strNEQ = (char *)malloc(4 * charSize);
        *strNEQ = 'N';
        *(strNEQ + 1) = 'E';
        *(strNEQ + 2) = 'Q';
        *(strNEQ + 3) = endChar;
        
        if (strCmp(strNEQ, str) == true) {
            ifNEQ = true;
        }
    }
    
    return ifNEQ;
}

bool ifIsLSS(char *str) {
    bool ifLSS = false;
    
    // TODO
    if (str != NULL) {
        char *strLSS = (char *)malloc(4 * charSize);
        *strLSS = 'L';
        *(strLSS + 1) = 'S';
        *(strLSS + 2) = 'S';
        *(strLSS + 3) = endChar;
        
        if (strCmp(strLSS, str) == true) {
            ifLSS = true;
        }
    }
    
    return ifLSS;
}

bool ifIsLEQ(char *str) {
    bool ifLEQ = false;
    
    // TODO
    if (str != NULL) {
        char *strLEQ = (char *)malloc(4 * charSize);
        *strLEQ = 'L';
        *(strLEQ + 1) = 'E';
        *(strLEQ + 2) = 'Q';
        *(strLEQ + 3) = endChar;
        
        if (strCmp(strLEQ, str) == true) {
            ifLEQ = true;
        }
    }
    
    return ifLEQ;
}

bool ifIsGTR(char *str) {
    bool ifGTR = false;
    
    // TODO
    if (str != NULL) {
        char *strGTR = (char *)malloc(4 * charSize);
        *strGTR = 'G';
        *(strGTR + 1) = 'T';
        *(strGTR + 2) = 'R';
        *(strGTR + 3) = endChar;
        
        if (strCmp(strGTR, str) == true) {
            ifGTR = true;
        }
    }
    
    return ifGTR;
}

bool ifIsGEQ(char *str) {
    bool ifGEQ = false;
    
    // TODO
    if (str != NULL) {
        char *strGQU = (char *)malloc(4 * charSize);
        *strGQU = 'G';
        *(strGQU + 1) = 'E';
        *(strGQU + 2) = 'Q';
        *(strGQU + 3) = endChar;
        
        if (strCmp(strGQU, str) == true) {
            ifGEQ = true;
        }
    }
    
    return ifGEQ;
}

bool ifIsDig(char ch) {
    bool ifDig = false;
    
    // TODO
    if ((ch > (char)47) && (ch < (char)58)) {
        ifDig = true;
    }
    
    return ifDig;
}

bool *ifJudTru(char *str, varNode *var, argNode arg) {
    bool *ifJud = (bool *)malloc(2 * sizeof(bool));
    *ifJud = false;
    *(ifJud + 1) = false;
    
    // TODO
    if (str != NULL) {
        short len = getStrLen(str) - 1;
        char **stack = (char **)malloc(2 * sizeof(char *));
        bool flag = false;
        short pos = 3;
        
        for (short i = 3; i < len - 4; i++) {
            pos++;
            if ((*(str + i) == (char)61) && (*(str + i + 1) == (char)61)) {
                bool type_fir = (*str == (char)34) && (*(str + pos - 2) == (char)34);
                bool type_sec = (*str == (char)37) && (*(str + pos - 2) == (char)37);
                bool type_thi = (*(str + pos + 1) == (char)34) && (*(str + len - 1) == (char)34);
                bool type_for = (*(str + pos + 1) == (char)37) && (*(str + len - 1) == (char)37);
                if ((type_fir && type_thi) || (type_fir && type_for) || (type_sec && type_thi) || (type_sec && type_for)) {
                    flag = true;
                    break;
                }
            }
        }
        
        if (flag) {
            char *tmp_fir = NULL;
            char *tmp_sec = NULL;
            short strLen = 0;
            *ifJud = true;
            *stack = (char *)malloc(pos * charSize);
            *(stack + 1) = (char *)malloc((len - pos) * charSize);
            *(*stack + pos - 1) = endChar;
            *(*(stack + 1) + len - pos - 1) = endChar;
            
            for (short i = 0; i < pos - 1; i++) {
                *(*stack + i) = *(str + i);
            }
            
            for (short i = 0; i < len - pos - 1; i++) {
                *(*(stack + 1) + i) = *(str + pos + i + 1);
            }
            
            strLen = getStrLen(*stack) - 3;
            tmp_fir = (char *)malloc((strLen + 1) * charSize);
            *(tmp_fir + strLen) = endChar;
            
            for (short i = 0; i < strLen; i++) {
                *(tmp_fir + i) = *(*stack + i + 1);
            }
            
            if (**stack == (char)37) {
                bool varType = true;
                
                for (short i = 0; i < strLen; i++) {
                    if (!ifIsDig(*(tmp_fir + i))) {
                        varType = false;
                        break;
                    }
                }
                
                if (varType) {
                    short pos = strToDig(tmp_fir);
                    
                    if (pos <= arg.count) {
                        tmp_fir = *(arg.argVar + pos);
                    } else {
                        tmp_fir = *stack;
                    }
                } else {
                    tmp_fir = getValue(tmp_fir, var);
                }
            }
            
            strLen = getStrLen(*(stack + 1)) - 3;
            tmp_sec = (char *)malloc((strLen + 1) * charSize);
            *(tmp_sec + strLen) = endChar;
            
            for (short i = 0; i < strLen; i++) {
                *(tmp_sec + i) = *(*(stack + 1) + i + 1);
            }
            
            if (**(stack + 1) == (char)37) {
                bool varType = true;
                
                for (short i = 0; i < strLen; i++) {
                    if (!ifIsDig(*(tmp_sec + i))) {
                        varType = false;
                        break;
                    }
                }
                
                if (varType) {
                    short pos = strToDig(tmp_sec);
                    
                    if (pos <= arg.count) {
                        tmp_sec = *(arg.argVar + pos);
                    } else {
                        tmp_sec = *(stack + 1);
                    }
                } else {
                    tmp_sec = getValue(tmp_sec, var);
                }
            }
            
            if (strCmp(tmp_fir, tmp_sec)) {
                *(ifJud + 1) = true;
            }
        }
    }
    
    return ifJud;
}

short ifIsOpe(char ch) {
    short ifOpe = -1;
    
    // TODO
    if ((ch == (char)43) || (ch == (char)45)) {
        ifOpe = 0;
    } else if ((ch == (char)42) || (ch == (char)47) || (ch == (char)37)) {
        ifOpe = 1;
    } else if (ch == (char)40) {
        ifOpe = 2;
    } else if (ch == (char)41) {
        ifOpe = 3;
    }
    
    return ifOpe;
}

bool setVarVal(char *name, char *val, varNode *var) {
    bool suc = false;
    
    // TODO
    if ((name != NULL) && (val != NULL)) {
        for (short i = 0; i < varCount; i++) {
            if (strCmp(name, (*(var + i)).label) == true) {
                short len = getStrLen(val);
                (*(var + i)).value = (char *)realloc((*(var + i)).value, len * charSize);
                
                for (short j = 0; j < len; j++) {
                    *((*(var + i)).value + j) = *(val + j);
                }
                if (len > 1) {
                    suc = true;
                }
            }
        }
    }
    
    return suc;
}

char **getBraStr(char **str, short startPos, short endPos) {
    char **buffer = NULL;
    
    // TODO
    if (str != NULL) {
        short len = endPos - startPos + 1;
        buffer = (char **)malloc((len + 1) * sizeof(char *));
        *(buffer + len) = (char *)malloc(charSize);
        *(*(buffer + len)) = endChar;
        
        for (short i = 0; i < len; i++) {
            short innerLen = getStrLen(*(str + startPos + i));
            
            if ((ifIsBrack(*(*(str + startPos + i))) == 0) && (ifIsBrack(*(*(str + startPos + i) + innerLen - 2)) != 1)) {
                *(buffer + i) = (char *)malloc((innerLen - 1) * charSize);
                
                for (short j = 1; j < innerLen; j++) {
                    *(*(buffer + i) + j - 1) = *(*(str + startPos + i) + j);
                }
            } else if ((ifIsBrack(*(*(str + startPos + i))) == 0) && (ifIsBrack(*(*(str + startPos + i) + innerLen - 2)) == 1)) {
                *(buffer + i) = (char *)malloc((innerLen - 2) * charSize);
                
                for (short j = 1; j < innerLen - 2; j++) {
                    *(*(buffer + i) + j - 1) = *(*(str + startPos + i) + j);
                }
                *(*(buffer + i) + innerLen - 3) = endChar;
            } else if ((ifIsBrack(*(*(str + startPos + i))) != 0) && (ifIsBrack(*(*(str + startPos + i) + innerLen - 2)) == 1)) {
                *(buffer + i) = (char *)malloc((innerLen - 1) * charSize);
                
                for (short j = 0; j < innerLen - 2; j++) {
                    *(*(buffer + i) + j) = *(*(str + startPos + i) + j);
                }
                *(*(buffer + i) + innerLen - 2) = endChar;
            } else {
                *(buffer + i) = (char *)malloc(innerLen * charSize);
                
                for (short j = 0; j < innerLen; j++) {
                    *(*(buffer + i) + j) = *(*(str + startPos + i) + j);
                }
            }
        }
    }
    
    return buffer;
}

char *getFollow(char **str, short pos) {
    char *followStr = NULL;
    
    // TODO
    if (str != NULL) {
        short countCh = 0;
        short countStr = 0;
        short temp = 0;
        
        for (short i = pos; !ifIsEnd(*(*(str + i))); i++) {
            countCh += getStrLen(*(str + i)) - 1;
            countStr++;
        }
        
        followStr = (char *)malloc((countCh + countStr) * charSize);
        
        for (short i = pos; !ifIsEnd(*(*(str + i))); i++) {
            short len = getStrLen(*(str + i));
            
            for (short j = 0; j < len - 1; j++) {
                *(followStr + temp) = *(*(str + i) + j);
                temp++;
            }
            *(followStr + temp) = (char)32;
            temp++;
        }
        *(followStr + countCh + countStr - 1) = endChar;
    }
    
    return followStr;
}

char *getSubStr(char **str, short startPos, short endPos) {
    char *subStr = NULL;
    
    if (str != NULL) {
        short countCh = 0;
        short countStr = endPos - startPos;
        short temp = 0;
        
        for (short i = startPos; i < endPos; i++) {
            countCh += getStrLen(*(str + i)) - 1;
        }
        
        subStr = (char *)malloc((countCh + countStr) * charSize);
        
        for (short i = startPos; i < endPos; i++) {
            short len = getStrLen(*(str + i));
            
            for (short j = 0; j < len - 1; j++) {
                *(subStr + temp) = *(*(str + i) + j);
                temp++;
            }
            *(subStr + temp) = (char)32;
            temp++;
        }
        *(subStr + countCh + countStr - 1) = endChar;
    }
    
    return subStr;
}

char *getStr(char *str) {
    char *tempStr = NULL;
    
    // TODO
    if (str != NULL) {
        short len = getStrLen(str) - 1;
        tempStr = (char *)malloc(len * charSize);
        
        for (short i = 0; i < len; i++) {
            *(tempStr + i) = *(str + i);
        }
    }
    
    return tempStr;
}

char *getEchoPath(char **str, short anbPos, short info) {
    char *pathStr = NULL;
    
    // TODO
    if (str != NULL) {
        if ((info == 0) || (info == 2)) {
            short len = getStrLen(*(str + anbPos + 1)) - 1;
            pathStr = (char *)malloc((len + 1) * charSize);
            
            for (short i = 0; i < len; i++) {
                *(pathStr + i) = *(*(str + anbPos + 1) + i);
            }
            *(pathStr + len) = '\0';
        }
    }
    
    return pathStr;
}

char *getVarNam(char *str) {
    char *varNam = NULL;
    
    // TODO
    if (str != NULL) {
        short index = ifHavEqo(str);
        
        if ((index != -1) && (index != 0)) {
            varNam = (char *)malloc((index + 1) * charSize);
            
            for (short i = 0; i < index; i++) {
                *(varNam + i) = *(str + i);
            }
            *(varNam + index) = endChar;
        }
    }
    
    return varNam;
}

char *getAriStr(char *ariStr, varNode *var, argNode arg) {
    char *str = NULL;
    
    // TODO
    if (ariStr != NULL) {
        short len = getStrLen(ariStr) - 1;
        short strLen = 0;
        
        for (short i = 0; i < len; i++) {
            if ((*(ariStr + i) == (char)37) && (i < len - 2)) {
                short subLen = 0;
                bool flag = true;
                char *subStr = NULL;
                
                for (short j = 1; i + j < len; j++) {
                    if (*(ariStr + i + j) == (char)37) {
                        break;
                    }
                    subLen++;
                }
                
                if ((subLen > 0) && (i + subLen < len - 1)) {
                    subStr = (char *)malloc((subLen + 1) * charSize);
                    *(subStr + subLen) = endChar;
                    
                    for (short j = 0; j < subLen; j++) {
                        *(subStr + j) =*(ariStr + i + j + 1);
                        
                        if (!ifIsDig(*(subStr + j))) {
                            flag = false;
                        }
                    }
                    
                    if (flag) {
                        int argNam = strToDig(subStr);
                        
                        if (argNam <= arg.count) {
                            subStr = *(arg.argVar + argNam - 1);
                            strLen += getStrLen(subStr) - 1;
                        } else {
                            strLen += getStrLen(ariStr);
                        }
                    } else {
                        subStr = getValue(subStr, var);
                        
                        if ((subStr != NULL) && (*subStr != endChar)) {
                            strLen += getStrLen(subStr) - 1;
                        }
                    }
                } else {
                    strLen++;
                }
                
                i += subLen + 2;
                if (i - 1 < len - 1) {
                    strLen++;
                }
            } else {
                strLen++;
            }
        }
        str = (char *)malloc((strLen + 1) * charSize);
        *(str + strLen) = endChar;
        strLen = 0;
        
        for (short i = 0; i < len; i++) {
            if ((*(ariStr + i) == (char)37) && (i < len - 2)) {
                short subLen = 0;
                bool flag = true;
                char *subStr = NULL;
                
                for (short j = 1; i + j < len; j++) {
                    if (*(ariStr + i + j) == (char)37) {
                        break;
                    }
                    subLen++;
                }
                
                if (subLen > 0 && (i + subLen < len - 1)) {
                    subStr = (char *)malloc((subLen + 1) * charSize);
                    *(subStr + subLen) = endChar;
                    
                    for (short j = 0; j < subLen; j++) {
                        *(subStr + j) =*(ariStr + i + j + 1);
                        
                        if (!ifIsDig(*(subStr + j))) {
                            flag = false;
                        }
                    }
                    
                    if (flag) {
                        int argNam = strToDig(subStr);
                        
                        if (argNam <= arg.count) {
                            subStr = *(arg.argVar + argNam - 1);
                            short temLen = getStrLen(subStr) - 1;
                            
                            for (short p = 0; p < temLen; p++) {
                                *(str + strLen) = *(subStr + p);
                                strLen++;
                            }
                        } else {
                            short temLen = getStrLen(ariStr) - 1;
                            
                            for (short p = 0; p < temLen; p++) {
                                *(str + strLen) = *(ariStr + i + p);
                                strLen++;
                            }
                        }
                    } else {
                        subStr = getValue(subStr, var);
                        
                        if ((subStr != NULL) && (*subStr != endChar)) {
                            short temLen = getStrLen(subStr) - 1;
                            
                            for (short p = 0; p < temLen; p++) {
                                *(str + strLen) = *(subStr + p);
                                strLen++;
                            }
                        } else {
                            short temLen = getStrLen(ariStr);
                            
                            for (short p = 0; p < temLen; p++) {
                                *(str + strLen) = *(ariStr + i + p);
                                strLen++;
                            }
                        }
                    }
                }
                i += subLen + 2;
                if (i - 1 < len - 1) {
                    *(str + strLen) = *(ariStr + i);
                    strLen++;
                }
            } else {
                *(str + strLen) = *(ariStr + i);
                strLen++;
            }
        }
    }
    
    return str;
}

char *getVarVal(char *str) {
    char *varVal = NULL;
    
    // TODO
    if (str != NULL) {
        short index = ifHavEqo(str);
        
        if ((index != -1) && (index != 0)) {
            short len = getStrLen(str) - index - 2;
            varVal = (char *)malloc((len + 1) * charSize);
            
            for (short i = 0; i < len; i++) {
                *(varVal + i) = *(str + index + i + 1);
            }
            *(varVal + len) = endChar;
        }
    }
    
    return varVal;
}

char *digToStr(int dig) {
    char *str = NULL;
    short len = 0;
    int temp = dig;
    short flag = 0;
    
    // TODO
    while (temp / 10 != 0) {
        temp /= 10;
        len++;
    }
    
    if (temp < 0) {
        len += 2;
        str = (char *)malloc((len + 1) * charSize);
        *str = (char)45;
        dig = -dig;
        flag++;
    } else {
        len += 1;
        str = (char *)malloc((len + 1) * charSize);
    }
    
    for (short i = flag; i < len; i++) {
        temp = (dig % decPow(len - i)) / decPow(len - i - 1);
        *(str + i) = (char)(temp + 48);
    }
    *(str + len) = endChar;
    
    return str;
}

char *setArith(char *str) {
    char *ariCount = (char *)malloc(charSize);
    *ariCount = endChar;
    bool gloFla = true;
    
    // TODO
    if (str != NULL && (getStrLen(str) - 1 > 0)) {
        short len = getStrLen(str) - 1;
        bool flag = true;
        
        for (short i = 0; i < len; i++) {
            if ((!ifIsDig(*(str + i))) && (ifIsOpe(*(str + i)) == -1)) {
                flag = false;
                break;
            }
        }
        
        if (flag) {
            ariSen *ari = NULL;
            short digCou = 0;
            short opeCou = 0;
            short totCou = 0;
            short ariTemp = 0;
            
            if (ifIsOpe(*str) != -1) {
                opeCou++;
            }
            
            for (short i = 0; i < len - 1; i++) {
                if (ifIsOpe(*(str + i + 1)) != -1) {
                    opeCou++;
                    
                    if (ifIsDig(*(str + i))) {
                        digCou++;
                    }
                }
            }
            
            if (ifIsDig(*(str + len - 1))) {
                digCou++;
            }
            
            totCou = opeCou + digCou;
            ari = (ariSen *)malloc(totCou * sizeof(ariSen));
            
            for (short i = 0; i < len; i++) {
                if(ifIsOpe(*(str + i)) != -1) {
                    ariSen temAri = getAriSen(false);
                    temAri.ope = *(str + i);
                    *(ari + ariTemp) = temAri;
                    ariTemp++;
                } else if (ifIsDig(*(str + i))) {
                    short digLen = 0;
                    char *tempStr = NULL;
                    
                    for (short j = i; j < len; j++) {
                        if (!ifIsDig(*(str + j))) {
                            break;
                        }
                        digLen++;
                    }
                    
                    tempStr = (char *)malloc((digLen + 1) * charSize);
                    
                    for (short j = i; j < len; j++) {
                        if (!ifIsDig(*(str + j))) {
                            i = j - 1;
                            break;
                        }
                        *(tempStr + j - i) = *(str + j);
                    }
                    *(tempStr + digLen) = endChar;
                    ariSen temAri = getAriSen(true);
                    temAri.data = strToDig(tempStr);
                    *(ari + ariTemp) = temAri;
                    ariTemp++;
                }
            }
            
            ariTemp = 0;
            
            while (totCou != 1) {
                if (ariTemp == totCou)  {
                    ariTemp -= 1;
                }
                if ((*(ari + ariTemp)).ariType == true) {
                    if ((ariTemp > 1) && ((*(ari + ariTemp - 2)).ariType == true) && ((*(ari + ariTemp - 1)).ariType == false)) {
                        if (ariTemp < totCou - 1) {
                            char opeBef = (*(ari + ariTemp - 1)).ope;
                            char opeAft = (*(ari + ariTemp + 1)).ope;
                            
                            if (((ifIsOpe(opeBef) == 0) && (ifIsOpe(opeAft) == 0)) || ((ifIsOpe(opeBef) == 1) && (ifIsOpe(opeAft) == 1)) || ((ifIsOpe(opeBef) == 1) && (ifIsOpe(opeAft) == 0))) {
                                int tempVal = ariVal((*(ari + ariTemp - 2)).data, (*(ari + ariTemp)).data, opeBef);
                                
                                if (tempVal != overFlow) {
                                    (*(ari + ariTemp - 2)).data = tempVal;
                                    
                                    for (short i = ariTemp - 1; i < totCou - 2; i++) {
                                        (*(ari + i)).ariType = (*(ari + i + 2)).ariType;
                                        (*(ari + i)).data = (*(ari + i + 2)).data;
                                        (*(ari + i)).ope = (*(ari + i + 2)).ope;
                                    }
                                    ariTemp -= 2;
                                    totCou -= 2;
                                } else {
                                    gloFla = false;
                                    break;
                                }
                            }
                        } else {
                            int tempVal = ariVal((*(ari + ariTemp - 2)).data, (*(ari + ariTemp)).data, (*(ari + ariTemp - 1)).ope);
                            
                            if (tempVal != overFlow) {
                                (*(ari + ariTemp - 2)).data = tempVal;
                                ariTemp -= 3;
                                totCou -= 2;
                            } else {
                                gloFla = false;
                                break;
                            }
                        }
                    } else if ((ariTemp == totCou - 1) && (ariTemp > 1) && ((*(ari + ariTemp - 2)).ariType == false) && ((*(ari + ariTemp - 1)).ariType == false)) {
                        gloFla = false;
                        break;
                    }
                } else {
                    if (ifIsOpe((*(ari + ariTemp)).ope) == 3) {
                        if ((ariTemp > 0) && (ifIsOpe((*(ari + ariTemp - 1)).ope) == 2)) {
                            for (short i = ariTemp - 1; i < totCou - 2; i++) {
                                (*(ari + i)).ariType = (*(ari + i + 2)).ariType;
                                (*(ari + i)).data = (*(ari + i + 2)).data;
                                (*(ari + i)).ope = (*(ari + i + 2)).ope;
                            }
                            ariTemp -= 2;
                            totCou -= 2;
                        } else if ((ariTemp > 3) && (ifIsOpe((*(ari + ariTemp - 4)).ope) == 2)) {
                            if (((*(ari + ariTemp - 3)).ariType == true) && ((*(ari + ariTemp - 2)).ariType == false) && ((*(ari + ariTemp - 1)).ariType == true)) {
                                int digBef = (*(ari + ariTemp - 3)).data;
                                int digAft = (*(ari + ariTemp - 1)).data;
                                char opeSig = (*(ari + ariTemp - 2)).ope;
                                int tempVal = ariVal(digBef, digAft, opeSig);
                                
                                if (tempVal != overFlow) {
                                    (*(ari + ariTemp - 4)).ariType = true;
                                    (*(ari + ariTemp - 4)).data = tempVal;
                                    (*(ari + ariTemp - 4)).ope = endChar;
                                    
                                    for (short i = ariTemp - 3; i < totCou - 4; i++) {
                                        (*(ari + i)).ariType = (*(ari + i + 4)).ariType;
                                        (*(ari + i)).data = (*(ari + i + 4)).data;
                                        (*(ari + i)).ope = (*(ari + i + 4)).ope;
                                    }
                                    ariTemp -= 4;
                                    totCou -= 4;
                                } else {
                                    gloFla = false;
                                    break;
                                }
                            } else {
                                gloFla = false;
                                break;
                            }
                        } else {
                            gloFla = false;
                            break;
                        }
                    }
                }
                ariTemp++;
            }
            
            if (gloFla) {
                ariCount = digToStr((*ari).data);
            } else {
                gloFla = false;
            }
            
        } else {
            gloFla = false;
        }
    }
    
    return ariCount;
}

char *getInp(bool ifInp) {
    char *str = NULL;
    
    if (ifInp) {
        char ch;
        short len = 0;
        
        do {
            ch = getchar();
            char *temStr = (char *)malloc(len * charSize);
            
            for (short i = 0; i < len; i++) {
                *(temStr + i) = *(str + i);
            }
            len++;
            str = (char *)realloc(str, len * charSize);
            
            for (short i = 0; i < len; i++) {
                *(str + i) = *(temStr + i);
            }
            *(str + len - 1) = ch;
        } while (ch != endChar);
    }
        
    return str;
}

char *getEchoValue(char **str, short pos, short anbPos, short info) {
    char *echoValue = NULL;
    
    // TODO
    if (str != NULL) {
        if ((info == 0) || (info == 2)) {
            char *temStr = getSubStr(str, pos, anbPos);
            short len = getStrLen(temStr) - 1;
            
            echoValue = (char *)malloc((len + 1) * charSize);
            
            for (short i = 0; i < len; i++) {
                *(echoValue + i) = *(temStr + i);
            }
            *(echoValue + len) = '\0';
        }
    }
    
    return echoValue;
}

//char ***filePage(char ***file, char **str) {
//    if ()
//}

int decPow(int powNum) {
    int dig = overFlow;
    
    // TODO
    if (powNum >= 0) {
        short temp = 1;
        
        for (short i = 0; i < powNum; i++) {
            temp *= 10;
        }
        dig = temp;
    }
    
    return dig;
}

int strToDig(char *str) {
    int dig = overFlow;
    int flag = 1;
    
    // TODO
    if ((str != NULL) && (*str != endChar)) {
        short len = getStrLen(str) - 1;
        int temp = 0;
        int pos = 0;
        
        if (*str == (char)45) {
            flag = -1;
            pos++;
        }
        
        for (int i = pos; i < len; i++) {
            int dec = decPow(len - i - 1);
            
            if (dec != overFlow) {
                temp += (int)(*(str + i) - '0') * dec;
                dig = temp;
            } else {
                break;
            }
        }
    }
    
    return flag * dig;
}

int ariVal(int num_fir, int num_sec, char ch) {
    int value = overFlow;
    
    // TODO
    if (ch == '+') {
        value = num_fir + num_sec;
    } else if (ch == '-') {
        value = num_fir - num_sec;
    } else if (ch == '*') {
        value = num_fir * num_sec;
    } else if (ch == '/') {
        value = num_fir / num_sec;
    } else if (ch == '%') {
        value = num_fir % num_sec;
    }
    
    return value;
}

short ifHavEqo(char *str) {
    short ifHav = -1;
    
    // TODO
    if (str != NULL) {
        short len = getStrLen(str) - 1;
        for (short i = 0; i < len; i++) {
            if (ifIsEqo(*(str + i))) {
                ifHav = i;
                break;
            }
        }
    }
    
    return ifHav;
}

short ifIsSla(char *str) {
    short ifSla = -1;
    
    // TODO
    if ((str != NULL) && (getStrLen(str) == 3) && (*str == (char)47)) {
        if (*(str + 1) == 'a') {
            ifSla = 0;
        } else if (*(str + 1) == 'p') {
            ifSla = 1;
        }
    }
    
    return ifSla;
}

short ifForSla(char *str) {
    short ifSla = -1;
    
    // TODO
    if ((str != NULL) && (getStrLen(str) == 3) && (*str == (char)47)) {
        if (*(str + 1) == 'd') {
            ifSla = 0;
        } else if (*(str + 1) == 'r') {
            ifSla = 1;
        } else if (*(str + 1) == 'l') {
            ifSla = 2;
        } else if (*(str + 1) == 'f') {
            ifSla = 3;
        }
    }
    
    return ifSla;
}

short ifShiSla(char *str) {
    short ifSla = 0;
    
    // TODO
    if ((str != NULL) && (*str == (char)47)) {
        short len = getStrLen(str);
        
        if (len > 1) {
            char *digStr = (char *)malloc((len - 1) * charSize);
            
            for (short i = 1; i < len; i++) {
                *(digStr + i - 1) = *(str + i);
            }
            ifSla = strToDig(digStr);
        }
    }
    
    return ifSla;
}

short *ifHavAnb(char **str, short pos) {
    short *ifAnb = NULL;
    
    // TODO
    if (str != NULL) {
        ifAnb = (short *)malloc(2 * sizeof(short));
        char *strLefSinAnb = (char *)malloc(2 * charSize);
        char *strLefDouAnb = (char *)malloc(3 * charSize);
        
        *ifAnb = -1;
        *(ifAnb + 1) = -1;
        *strLefSinAnb = '>';
        *(strLefSinAnb + 1) = endChar;
        *strLefDouAnb = '>';
        *(strLefDouAnb + 1) = '>';
        *(strLefDouAnb + 2) = endChar;
        
        for (short i = pos; !ifIsEnd(*(*(str + i))); i++) {
            if (strCmp(strLefSinAnb, *(str + i))) {
                *ifAnb = i;
                *(ifAnb + 1) = 0;
            } else if (strCmp(strLefDouAnb, *(str + i))) {
                *ifAnb = i;
                *(ifAnb + 1) = 2;
            }
        }
    }
    
    return ifAnb;
}

short getStrLen(char *sentence) {
    short len = 0;
    
    // TODO
    if (sentence != NULL) {
        while (*(sentence + len) != endChar) {
            len++;
        }
        len++;
    }
    
    return len;
}

short getDouStrLen(char **str) {
    short len = 0;
    
    // TODO
    if (str != NULL) {
        while (!ifIsEnd(**(str + len))) {
            len++;
        }
        len++;
    }
    
    return len;
}

short getVarCou(char **str, short count) {
    short value = 0;
    
    // TODO
    if (str != NULL) {
        char **tempStr = (char **)malloc(count * sizeof(char *));
                
        for (short i = 0; i < count; i++) {
            *(tempStr + i) = (char *)malloc(charSize);
            *(*(tempStr + i)) = endChar;
        }
        
        for (short i = 0; i < count; i++) {
            bool flag = false;
            
            for (short j = 0; j < count; j++) {
                if (strCmp(*(tempStr + j), *(str + i))) {
                    flag = true;
                    break;
                }
            }
            
            if (flag == false) {
                for (short p = 0; p < count; p++) {
                    if (ifIsEnd(*(*(tempStr + p)))) {
                        *(tempStr + p) = *(str + i);
                        break;
                    }
                }
            }
        }
        
        for (short i = 0; i < count; i++) {
            if (!ifIsEnd(*(*(tempStr + i)))) {
                value++;
            } else {
                break;
            }
        }
    }
        
    return value;
}

char **strToTwoDem(char *sentence) {
    char **matrix = NULL;
    
    // TODO
    if (sentence != NULL && (!ifIsEnd(*sentence))) {
        short *tempMat = NULL;
        short count = 0;
        short temp = 0;
        short start = 0;
        short len = getStrLen(sentence);
        
        if (ifIsSpace(*sentence)) {
            for (start = 0; start < len; start++) {
                if (ifIsSpace(*(sentence + start)) && (!ifIsSpace(*(sentence + start + 1)))) {
                    start++;
                    break;
                }
            }
        }
        
        for (short i = 0; i < len - 1; i++) {
            if (ifIsSpace(*(sentence + i + 1)) && (!ifIsSpace(*(sentence + i)))) {
                count++;
            }
        }
        count++;
        
        matrix = (char **)malloc((count + 1) * sizeof(char *));
        tempMat = (short *)malloc(count * sizeof(short));
        *(matrix + count) = (char *)malloc(charSize);
        *(*(matrix + count)) = endChar;
        *(tempMat + count - 1) = len - 2;
        
        for (short i = 0; i < len - 1; i++) {
            if (ifIsSpace(*(sentence + i + 1)) && (!ifIsSpace(*(sentence + i)))) {
                *(tempMat + temp) = i;
                temp++;
            }
        }
        temp++;
        *matrix = (char *)malloc((*tempMat + 2 - start) * charSize);
        
        for (short i = 0; i < *tempMat + 1 - start; i++) {
            *(*matrix + i) = *(sentence + i + start);
        }
        *(*matrix + *tempMat - start + 1) = endChar;
        
        if (temp > 1) {
            for (short i = 0; i < temp - 1; i++) {
                for (short j = *(tempMat + i); j < *(tempMat + i + 1); j++) {
                    if (ifIsSpace(*(sentence + j)) && (!ifIsSpace(*(sentence + j + 1)))) {
                        short newLen = *(tempMat + i + 1) - j;
                        *(matrix + i + 1) = (char *)malloc((newLen + 1) * charSize);
                        for (short p = 0; p < newLen; p++) {
                            *(*(matrix + i + 1) + p) = *(sentence + p + j + 1);
                        }
                        *(*(matrix + i + 1) + newLen) = endChar;
                    }
                }
            }
        }
    }
    
    return matrix;
}

labelNode *labelInfo(char ***page) {
    labelNode *label = NULL;
    
    // TODO
    if (page != NULL) {
        short temp = 0;
        for (short i = 0; i < pageLength; i++) {
            if (ifIsColon(*(*(*(page + i)))) == true) {
                labelCount++;
            }
        }
        
        label = (labelNode *)malloc(labelCount * sizeof(labelNode));
        
        for (short i = 0; i < pageLength; i++) {
            if (ifIsColon(*(*(*(page + i)))) == true) {
                short len = getStrLen(*(*(page + i))) - 1;
                (*(label + temp)).locat = i;
                (*(label + temp)).label = (char *)malloc(len * charSize);
                
                for (short j = 0; j < len; j++) {
                    *((*(label + temp)).label + j) = *(*(*(page + i)) + j + 1);
                }
                temp++;
            }
        }
    }
    
    return label;
}

varNode *varInfo(char ***page) {
    varNode *var = NULL;
    
    // TODO
    if (page != NULL) {
        char **temVar = NULL;
        
        for (short i = 0; i < pageLength; i++) {
            short douLen = getDouStrLen(*(page + i)) - 1;

            for (short j = 0; j < douLen; j++) {
                if (ifIsSet(*(*(page + i) + j)) && (j < douLen - 1)) {
                    short len = getStrLen(*(*(page + i) + j + 1));
                    if (len > 3) {
                        short index = ifHavEqo(*(*(page + i) + j + 1));
                        
                        if ((index != -1) && (index != 0)) {
                            varCount++;
                        }
                    } else if ((len == 3) && (j < douLen - 2)) {
                        short index = ifHavEqo(*(*(page + i) + j + 2));
                        
                        if ((index != -1) && (index != 0)) {
                            if (ifIsSla(*(*(page + i) + j + 1)) != -1) {
                                varCount++;
                            }
                        }
                    }
                }
            }
        }

        temVar = (char **)malloc(varCount * sizeof(char *));
        short temp = 0;
        
        for (short i = 0; i < pageLength; i++) {
            short douLen = getDouStrLen(*(page + i)) - 1;

            for (short j = 0; j < douLen; j++) {
                if (ifIsSet(*(*(page + i) + j)) && (j < douLen - 1)) {
                    short len = getStrLen(*(*(page + i) + j + 1));
                    
                    if (len > 3) {
                        short index = ifHavEqo(*(*(page + i) + j + 1));
                        
                        if ((index != -1) && (index != 0)) {
                            *(temVar + temp) = (char *)malloc((index + 1) * charSize);

                            for (short p = 0; p < index; p++) {
                                *(*(temVar + temp) + p) = *(*(*(page + i) + j + 1) + p);
                            }
                            *(*(temVar + temp) + index) = endChar;
                            temp++;
                        }
                    } else if ((len == 3) && (j < douLen - 2)) {
                        short index = ifHavEqo(*(*(page + i) + j + 2));
                        
                        if ((index != -1) && (index != 0)) {
                            if (ifIsSla(*(*(page + i) + j + 1)) != -1) {
                                *(temVar + temp) = (char *)malloc((index + 1) * charSize);

                                for (short p = 0; p < index; p++) {
                                    *(*(temVar + temp) + p) = *(*(*(page + i) + j + 2) + p);
                                }
                                *(*(temVar + temp) + index) = endChar;
                                temp++;
                            }
                        }
                    }
                }
            }
        }

        varCount = getVarCou(temVar, varCount);
        free(temVar);

        var = (varNode *)malloc(varCount * sizeof(varNode));
        temp = 0;
        
        for (short i = 0; i < pageLength; i++) {
            short douLen = getDouStrLen(*(page + i)) - 1;

            for (short j = 0; j < douLen; j++) {
                if (ifIsSet(*(*(page + i) + j)) && (j < douLen - 1)) {
                    short len = getStrLen(*(*(page + i) + j + 1));
                    bool flag = true;
                    
                    if (len > 3) {
                        short index = ifHavEqo(*(*(page + i) + j + 1));
                        
                        if ((index != -1) && (index != 0)) {
                            char *tempStr = (char *)malloc((index + 1) * charSize);

                            for (short p = 0; p < index; p++) {
                                *(tempStr + p) = *(*(*(page + i) + j + 1) + p);
                            }
                            *(tempStr + index) = endChar;

                            for (short p = 0; p < temp; p++) {
                                if (strCmp((*(var + p)).label, tempStr)) {
                                    flag = false;
                                    break;
                                }
                            }

                            if (flag == true) {
                                (*(var + temp)).rowIndex = i;
                                (*(var + temp)).colIndex = j + 1;
                                (*(var + temp)).varType = 2;
                                (*(var + temp)).label = (char *)malloc((index + 1) * charSize);
                                (*(var + temp)).value = (char *)malloc(charSize);
                                *((*(var + temp)).value) = endChar;

                                for (short p = 0; p < index; p++) {
                                    *((*(var + temp)).label + p) = *(*(*(page + i) + j + 1) + p);
                                }
                                *((*(var + temp)).label + index) = endChar;
                                temp++;
                            }
                        }
                    } else if ((len == 3) && (j < douLen - 2)) {
                        short index = ifHavEqo(*(*(page + i) + j + 2));
                        
                        if ((index != -1) && (index != 0)) {
                            short tempPa = ifIsSla(*(*(page + i) + j + 1));
                            
                            if (tempPa != -1) {
                                char *tempStr = (char *)malloc((index + 1) * charSize);

                                for (short p = 0; p < index; p++) {
                                    *(tempStr + p) = *(*(*(page + i) + j + 2) + p);
                                }
                                *(tempStr + index) = endChar;

                                for (short p = 0; p < temp; p++) {
                                    if (strCmp((*(var + p)).label, tempStr)) {
                                        flag = false;
                                        break;
                                    }
                                }

                                if (flag == true) {
                                    (*(var + temp)).rowIndex = i;
                                    (*(var + temp)).colIndex = j + 2;
                                    (*(var + temp)).varType = tempPa;
                                    (*(var + temp)).label = (char *)malloc((index + 1) * charSize);
                                    (*(var + temp)).value = (char *)malloc(charSize);
                                    *((*(var + temp)).value) = endChar;
                                    
                                    for (short p = 0; p < index; p++) {
                                        *((*(var + temp)).label + p) = *(*(*(page + i) + j + 2) + p);
                                    }
                                    *((*(var + temp)).label + index) = endChar;
                                    temp++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    return var;
}

ariSen getAriSen(bool ariType) {
    ariSen getAri = {
        ariType,
        overFlow,
        endChar
    };
    
    return getAri;
}

argNode setArgNod(int argc, char **argv) {
    argNode node = {
        NULL,
        0
    };
    
    // TODO
    if (argc > 2) {
        short len = argc - 2;
        node.argVar = (char **)malloc(len * sizeof(char *));
        node.count = len;
        
        for (short i = 0; i < len; i++) {
            short subLen = 0;
            
            while (*(*(argv + i + 2) + subLen) != '\0') {
                subLen++;
            }
            *(node.argVar + i) = (char *)malloc((subLen + 1) * charSize);
            
            for (short j = 0; j < subLen; j++) {
                *(*(node.argVar + i) + j) = *(*(argv + i + 2) + j);
            }
            *(*(node.argVar + i) + subLen) = endChar;
        }
    }
    
    return node;
}

argNode shiftArg(argNode arg, short pos) {
    argNode tempArg = arg;
    
    // TODO
    if ((arg.count > 0) && (pos <= arg.count)) {
        for (short i = pos - 1; i < arg.count - 1; i++) {
            short len = getStrLen(*(arg.argVar + i + 1));
            *(tempArg.argVar + i) = (char *)realloc(*(arg.argVar + i), len * charSize);
            
            for (short j = 0; j < len; j++) {
                *(*(tempArg.argVar + i) + j) = *(*(arg.argVar + i + 1) + j);
            }
        }
        tempArg.count--;
    } else {
        tempArg.count = 0;
    }
    
    return tempArg;
}


char *getValue(char *label, varNode *var) {
    char *value = NULL;
    
    // TODO
    if (label != NULL) {
        for (short i = 0; i < varCount; i++) {
            if (strCmp(label, (*(var + i)).label)) {
                value = (*(var + i)).value;
                break;
            }
        }
    }
    
    return value;
}


int showStr(char *str) {
    int suc = 0;
    
    if (str != NULL) {
        short len = getStrLen(str) - 1;
        
        for (short i = 0; i < len; i++) {
            putchar(*(str + i));
        }
    } else {
        suc = 1;
    }
    
    return suc;
}

int showStrN(char *str) {
    int suc = 0;
    
    if (str != NULL) {
        short len = getStrLen(str) - 1;
        for (short i = 0; i < len; i++) {
            putchar(*(str + i));
        }
        putchar(10);
    } else {
        suc = 1;
    }
        
    return suc;
}

int showVar(varNode *var, argNode arg) {
    int suc = 0;
    
    if (var != NULL) {
        for (short i = 0; i < varCount; i++) {
            if (*(*(var + i)).value != endChar) {
                showStr((*(var + i)).label);
                putchar(32);
                showStrN((*(var + i)).value);
            }
        }
    } else {
        suc = 1;
    }
    
    if (arg.count > 0) {
        showStr(digToStr(arg.count));
        for (short i = 0; i < arg.count; i++) {
            putchar(32);
            showStr(*(arg.argVar + i));
        }
        putchar(10);
    } else {
        suc = 1;
    }
    
    return suc;
}

bool echoFile(char *path, char *str, bool mode) {
    bool ifSuc = false;
    
    // TODO
    
    if (path != NULL) {
        
        FILE *fp = NULL;
        
        if (!mode) {
            fp = fopen(path, "w");
        } else {
            fp = fopen(path, "a");
        }
        
        if(fp == NULL) {
            printf("The file <%s> can not be opened.\n", path);
        } else {
            if (fputs(str, fp) == -1) {
                printf("Echo Write Error!\n");
            } else {
                ifSuc = true;
            }
            fclose(fp);
        }
    }
    
    return ifSuc;
}
