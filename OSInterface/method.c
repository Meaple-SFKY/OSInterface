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
        char *strEcho = (char *)malloc(5 * sizeof(char));
        *strEcho = 'e';
        *(strEcho + 1) = 'c';
        *(strEcho + 2) = 'h';
        *(strEcho + 3) = 'o';
        *(strEcho + 4) = (char)10;
        
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
        char *strFor = (char *)malloc(4 * sizeof(char));
        *strFor = 'f';
        *(strFor + 1) = 'o';
        *(strFor + 2) = 'r';
        *(strFor + 3) = (char)10;
        
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
        char *strGoto = (char *)malloc(5 * sizeof(char));
        *strGoto = 'g';
        *(strGoto + 1) = 'o';
        *(strGoto + 2) = 't';
        *(strGoto + 3) = 'o';
        *(strGoto + 4) = (char)10;
        
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
        char *strIf = (char *)malloc(3 * sizeof(char));
        *strIf = 'i';
        *(strIf + 1) = 'f';
        *(strIf + 2) = (char)10;
        
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
        char *strSet = (char *)malloc(4 * sizeof(char));
        *strSet = 's';
        *(strSet + 1) = 'e';
        *(strSet + 2) = 't';
        *(strSet + 3) = (char)10;
        
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
        char *strShift = (char *)malloc(6 * sizeof(char));
        *strShift = 's';
        *(strShift + 1) = 'h';
        *(strShift + 2) = 'i';
        *(strShift + 3) = 'f';
        *(strShift + 4) = 't';
        *(strShift + 5) = (char)10;
        
        if (strCmp(strShift, str) == true) {
            ifShift = true;
        }
    }
    
    return ifShift;
}

bool ifIsEQU(char *str) {
    bool ifEQU = false;
    
    // TODO
    if (str != NULL) {
        char *strEQU = (char *)malloc(4 * sizeof(char));
        *strEQU = 'E';
        *(strEQU + 1) = 'Q';
        *(strEQU + 2) = 'U';
        *(strEQU + 3) = (char)10;
        
        if (strCmp(strEQU, str) == true) {
            ifEQU = true;
        }
    }
    
    return ifEQU;
}

bool ifIsNEQ(char *str) {
    bool ifNEQ = false;
    
    // TODO
    if (str != NULL) {
        char *strNEQ = (char *)malloc(4 * sizeof(char));
        *strNEQ = 'N';
        *(strNEQ + 1) = 'E';
        *(strNEQ + 2) = 'Q';
        *(strNEQ + 3) = (char)10;
        
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
        char *strLSS = (char *)malloc(4 * sizeof(char));
        *strLSS = 'L';
        *(strLSS + 1) = 'S';
        *(strLSS + 2) = 'S';
        *(strLSS + 3) = (char)10;
        
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
        char *strLEQ = (char *)malloc(4 * sizeof(char));
        *strLEQ = 'L';
        *(strLEQ + 1) = 'E';
        *(strLEQ + 2) = 'Q';
        *(strLEQ + 3) = (char)10;
        
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
        char *strGTR = (char *)malloc(4 * sizeof(char));
        *strGTR = 'G';
        *(strGTR + 1) = 'T';
        *(strGTR + 2) = 'R';
        *(strGTR + 3) = (char)10;
        
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
        char *strGQU = (char *)malloc(4 * sizeof(char));
        *strGQU = 'G';
        *(strGQU + 1) = 'E';
        *(strGQU + 2) = 'Q';
        *(strGQU + 3) = (char)10;
        
        if (strCmp(strGQU, str) == true) {
            ifGEQ = true;
        }
    }
    
    return ifGEQ;
}

bool echoFile(char *path, char *str, bool mode) {
    bool ifSuc = true;
    
    // TODO
    FILE *fp = NULL;
    
    if (!mode) {
        fp = fopen(path, "w");
    } else {
        fp = fopen(path, "a");
    }
    
    if(fp == NULL) {
        printf("The file <%s> can not be opened.\n", path);
        ifSuc = false;
    } else {
        
        if (fputs(str, fp) == -1) {
            printf("Echo Write Error!\n");
        }
        
        fclose(fp);
    }
    
    return ifSuc;
}

char **getBraStr(char **str, short startPos, short endPos) {
    char **buffer = NULL;
    
    // TODO
    if (str != NULL) {
        short len = endPos - startPos + 1;
        buffer = (char **)malloc((len + 1) * sizeof(char *));
        *(buffer + len) = (char *)malloc(sizeof(char));
        *(*(buffer + len)) = (char)10;
        
        for (short i = 0; i < len; i++) {
            short innerLen = getStrLen(*(str + startPos + i));
            
            if ((ifIsBrack(*(*(str + startPos + i))) == 0) && (ifIsBrack(*(*(str + startPos + i) + innerLen - 2)) != 1)) {
                *(buffer + i) = (char *)malloc((innerLen - 1) * sizeof(char));
                for (short j = 1; j < innerLen; j++) {
                    *(*(buffer + i) + j - 1) = *(*(str + startPos + i) + j);
                }
            } else if ((ifIsBrack(*(*(str + startPos + i))) == 0) && (ifIsBrack(*(*(str + startPos + i) + innerLen - 2)) == 1)) {
                *(buffer + i) = (char *)malloc((innerLen - 2) * sizeof(char));
                for (short j = 1; j < innerLen - 2; j++) {
                    *(*(buffer + i) + j - 1) = *(*(str + startPos + i) + j);
                }
                *(*(buffer + i) + innerLen - 3) = (char)10;
            } else if ((ifIsBrack(*(*(str + startPos + i))) != 0) && (ifIsBrack(*(*(str + startPos + i) + innerLen - 2)) == 1)) {
                *(buffer + i) = (char *)malloc((innerLen - 1) * sizeof(char));
                for (short j = 0; j < innerLen - 2; j++) {
                    *(*(buffer + i) + j) = *(*(str + startPos + i) + j);
                }
                *(*(buffer + i) + innerLen - 2) = (char)10;
            } else {
                *(buffer + i) = (char *)malloc(innerLen * sizeof(char));
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
        
        followStr = (char *)malloc((countCh + countStr) * sizeof(char));
        
        for (short i = pos; !ifIsEnd(*(*(str + i))); i++) {
            short len = getStrLen(*(str + i));
            for (short j = 0; j < len - 1; j++) {
                *(followStr + temp) = *(*(str + i) + j);
                temp++;
            }
            *(followStr + temp) = (char)32;
            temp++;
        }
        *(followStr + countCh + countStr - 1) = (char)10;
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
        
        subStr = (char *)malloc((countCh + countStr) * sizeof(char));
        
        for (short i = startPos; i < endPos; i++) {
            short len = getStrLen(*(str + i));
            for (short j = 0; j < len - 1; j++) {
                *(subStr + temp) = *(*(str + i) + j);
                temp++;
            }
            *(subStr + temp) = (char)32;
            temp++;
        }
        *(subStr + countCh + countStr - 1) = (char)10;
    }
    
    return subStr;
}

char *getStr(char *str) {
    char *tempStr = NULL;
    
    // TODO
    if (str != NULL) {
        short len = getStrLen(str) - 1;
        
        tempStr = (char *)malloc(len * sizeof(char));
        
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
            pathStr = getStr(*(str + anbPos + 1));
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
            
            varNam = (char *)malloc((index + 1) * sizeof(char));
            for (short i = 0; i < index; i++) {
                *(varNam + i) = *(str + i);
            }
            *(varNam + index) = (char)10;
        }
    }
    
    return varNam;
}

char *getVarVal(char *str) {
    char *varVal = NULL;
    
    // TODO
    if (str != NULL) {
        short index = ifHavEqo(str);
        
        if ((index != -1) && (index != 0)) {
            short len = getStrLen(str) - index - 2;
            
            varVal = (char *)malloc((len + 1) * sizeof(char));
            for (short i = 0; i < len; i++) {
                *(varVal + i) = *(str + index + i + 1);
            }
            *(varVal + len) = (char)10;
        }
    }
    
    return varVal;
}

bool setVarVal(char *name, char *val, varNode *var) {
    bool suc = false;
    
    // TODO
    if ((name != NULL) && (val != NULL) && (*val != (char)10)) {
        for (short i = 0; i < varCount; i++) {
            if (strCmp(name, (*(var + i)).label) == true) {
                short len = getStrLen(val);
                (*(var + i)).value = (char *)realloc((*(var + i)).value, len * sizeof(char));
                for (short j = 0; j < len; j++) {
                    *((*(var + i)).value + j) = *(val + j);
                }
                suc = true;
            }
        }
    }
    
    return suc;
}

char *getEchoValue(char **str, short pos, short anbPos, short info) {
    char *echoValue = NULL;
    
    // TODO
    if (str != NULL) {
        if ((info == 0) || (info == 2)) {
            echoValue = getStr(getSubStr(str, pos, anbPos));
        }
    }
    
    return echoValue;
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
    if ((str != NULL) && (getStrLen(str) == 3)) {
        if ((*str == (char)92) && (*(str + 2) == (char)10)) {
            if (*(str + 1) == 'a') {
                ifSla = 0;
            } else if (*(str + 1) == 'p') {
                ifSla = 1;
            }
        }
    }
    
    return ifSla;
}

short *ifHavAnb(char **str, short pos) {
    short *ifAnb = NULL;
    
    // TODO
    if (str != NULL) {
        ifAnb = (short *)malloc(2 * sizeof(short));
        char *strLefSinAnb = (char *)malloc(2 * sizeof(char));
        char *strLefDouAnb = (char *)malloc(3 * sizeof(char));
        
        *ifAnb = -1;
        *(ifAnb + 1) = -1;
        *strLefSinAnb = '>';
        *(strLefSinAnb + 1) = (char)10;
        *strLefDouAnb = '>';
        *(strLefDouAnb + 1) = '>';
        *(strLefDouAnb + 2) = (char)10;
        
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
        while (*(sentence + len) != (char)10) {
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
            *(tempStr + i) = (char *)malloc(sizeof(char));
            *(*(tempStr + i)) = (char)10;
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
        
        *(matrix + count) = (char *)malloc(sizeof(char));
        *(*(matrix + count)) = (char)10;
        *(tempMat + count - 1) = len - 2;
        
        for (short i = 0; i < len - 1; i++) {
            if (ifIsSpace(*(sentence + i + 1)) && (!ifIsSpace(*(sentence + i)))) {
                *(tempMat + temp) = i;
                temp++;
            }
        }
        temp++;
        
        *matrix = (char *)malloc((*tempMat + 2 - start) * sizeof(char));
        
        for (short i = 0; i < *tempMat + 1 - start; i++) {
            *(*matrix + i) = *(sentence + i + start);
        }
        *(*matrix + *tempMat - start + 1) = (char)10;
        
        if (temp > 1) {
            for (short i = 0; i < temp - 1; i++) {
                for (short j = *(tempMat + i); j < *(tempMat + i + 1); j++) {
                    if (ifIsSpace(*(sentence + j)) && (!ifIsSpace(*(sentence + j + 1)))) {
                        short newLen = *(tempMat + i + 1) - j;
                        *(matrix + i + 1) = (char *)malloc((newLen + 1) * sizeof(char));
                        for (short p = 0; p < newLen; p++) {
                            *(*(matrix + i + 1) + p) = *(sentence + p + j + 1);
                        }
                        *(*(matrix + i + 1) + newLen) = (char)10;
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
                (*(label + temp)).label = (char *)malloc(len * sizeof(char));
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
                            *(temVar + temp) = (char *)malloc((index + 1) * sizeof(char));

                            for (short p = 0; p < index; p++) {
                                *(*(temVar + temp) + p) = *(*(*(page + i) + j + 1) + p);
                            }
                            *(*(temVar + temp) + index) = (char)10;
                            temp++;
                        }
                    } else if ((len == 3) && (j < douLen - 2)) {
                        short index = ifHavEqo(*(*(page + i) + j + 2));
                        
                        if ((index != -1) && (index != 0)) {
                            if (ifIsSla(*(*(page + i) + j + 1)) != -1) {
                                *(temVar + temp) = (char *)malloc((index + 1) * sizeof(char));

                                for (short p = 0; p < index; p++) {
                                    *(*(temVar + temp) + p) = *(*(*(page + i) + j + 2) + p);
                                }
                                *(*(temVar + temp) + index) = (char)10;
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
                    if (len > 3) {
                        bool flag = true;
                        short index = ifHavEqo(*(*(page + i) + j + 1));
                        
                        if ((index != -1) && (index != 0)) {
                            char *tempStr = (char *)malloc((index + 1) * sizeof(char));

                            for (short p = 0; p < index; p++) {
                                *(tempStr + p) = *(*(*(page + i) + j + 1) + p);
                            }
                            *(tempStr + index) = (char)10;

                            for (short p = 0; p < temp; p++) {
                                if (strCmp((*(var + p)).label, tempStr)) {
                                    flag = false;
                                    break;
                                }
                            }

                            if (flag == true) {
                                short len = getStrLen(*(*(page + i) + j + 1)) - index - 1;
                                (*(var + temp)).rowIndex = i;
                                (*(var + temp)).colIndex = j + 1;
                                (*(var + temp)).varType = 2;
                                (*(var + temp)).label = (char *)malloc((index + 1) * sizeof(char));
                                (*(var + temp)).value = (char *)malloc(len * sizeof(char));
                                *((*(var + temp)).value + len - 1) = (char)10;

                                for (short p = 0; p < index; p++) {
                                    *((*(var + temp)).label + p) = *(*(*(page + i) + j + 1) + p);
                                }
                                *((*(var + temp)).label + index) = (char)10;
                                temp++;
                            }
                        }
                    } else if ((len == 3) && (j < douLen - 2)) {
                        bool flag = true;
                        short index = ifHavEqo(*(*(page + i) + j + 2));
                        
                        if ((index != -1) && (index != 0)) {
                            short tempPa = ifIsSla(*(*(page + i) + j + 1));
                            if (tempPa != -1) {
                                char *tempStr = (char *)malloc((index + 1) * sizeof(char));

                                for (short p = 0; p < index; p++) {
                                    *(tempStr + p) = *(*(*(page + i) + j + 2) + p);
                                }
                                *(tempStr + index) = (char)10;

                                for (short p = 0; p < temp; p++) {
                                    if (strCmp((*(var + p)).label, tempStr)) {
                                        flag = false;
                                        break;
                                    }
                                }

                                if (flag == true) {
                                    short len = getStrLen(*(*(page + i) + j + 2)) - index - 1;
                                    (*(var + temp)).rowIndex = i;
                                    (*(var + temp)).colIndex = j + 2;
                                    (*(var + temp)).varType = tempPa;
                                    (*(var + temp)).label = (char *)malloc((index + 1) * sizeof(char));
                                    (*(var + temp)).value = (char *)malloc(len * sizeof(char));
                                    *((*(var + temp)).value + len - 1) = (char)10;
                                    
                                    for (short p = 0; p < index; p++) {
                                        *((*(var + temp)).label + p) = *(*(*(page + i) + j + 2) + p);
                                    }
                                    *((*(var + temp)).label + index) = (char)10;
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

char *getValue(char *label, varNode *var) {
    char *value = NULL;
    
    // TODO
    for (short i = 0; i < varCount; i++) {
        if (strCmp(label, (*(var + i)).label)) {
            value = (*(var + i)).value;
            break;
        }
    }
    
    return value;
}

int showStr(char *str) {
    int suc = 0;
    
    if (str != NULL) {
        short len = getStrLen(str) - 1;
        for (short i = 0; i < len; i++) {
            printf("%c", *(str + i));
        }
    }
        
    return suc;
}

int showStrN(char *str) {
    int suc = 0;
    
    if (str != NULL) {
        short len = getStrLen(str) - 1;
        for (short i = 0; i < len; i++) {
            printf("%c", *(str + i));
        }
        printf("\n");
    }
        
    return suc;
}


int showPage(char ***page) {
    
    if (page == NULL) {
        return 1;
    }
    
    for (short i = 0; i < pageLength; i++) {
        for (short j = 0; *(*(*(page + i) + j)) != (char)10; j++) {
            showStrN(*(*(page + i) + j));
        }
    }
    
    return 0;
}

int showLabel(labelNode *label) {
    
    if (label == NULL) {
        return 1;
    }
    
    for (short i = 0; i < labelCount; i++) {
        printf("%hd -- ", (*(label + i)).locat);
        showStrN((*(label + i)).label);
    }
    
    return 0;
}

int showVar(varNode *var) {
    int suc = 0;
    
    if (var != NULL) {
        for (short i = 0; i < varCount; i++) {
            printf("%hd -- %hd -- %hd -- ", (*(var + i)).rowIndex, (*(var + i)).colIndex, (*(var + i)).varType);
            showStr((*(var + i)).label);
            printf(" -- ");
            if (*(*(var + i)).value != (char)10) {
                showStrN((*(var + i)).value);
            } else {
                printf("none\n");
            }
        }
    } else {
        suc = 1;
    }
    
    return 0;
}
