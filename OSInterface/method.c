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

char *getFollow(char **str, short pos) {
    char *followStr = NULL;
    
    // TODO
    if (str != NULL) {
        short countCh = 0;
        short countStr = 0;
        short temp = 0;
        
        for (short i = pos; !ifIsEnd(*(*(str + i))); i++) {
            countStr++;
            for (short j = 0; !ifIsEnd(*(*(str + i) + j)); j++) {
                countCh++;
            }
        }
        
        followStr = (char *)malloc((countCh + countStr) * sizeof(char));
        
        for (short i = pos; !ifIsEnd(*(*(str + i))); i++) {
            for (short j = 0; !ifIsEnd(*(*(str + i) + j)); j++) {
                *(followStr + temp) = *(*(str + i) + j);
                temp++;
            }
            *(followStr + temp) = (char)32;
            temp++;
        }
        *(followStr + countCh + countStr) = (char)10;
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
            for (short j = 0; !ifIsEnd(*(*(str + i) + j)); j++) {
                countCh++;
            }
        }
        
        subStr = (char *)malloc((countCh + countStr) * sizeof(char));
        
        for (short i = startPos; i < endPos; i++) {
            for (short j = 0; !ifIsEnd(*(*(str + i) + j)); j++) {
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
        short len = 0;
        for (short i = 0; !ifIsEnd(*(str + i)); i++) {
            len++;
        }
        
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
    if ((info == 0) || (info == 2)) {
        pathStr = getStr(*(str + anbPos + 1));
    } else {
        pathStr = getStr(*(str + anbPos - 1));
    }
    
    return pathStr;
}

char *getEchoValue(char **str, short pos, short anbPos, short info) {
    char *echoValue = NULL;
    
    // TODO
    if ((info == 0) || (info == 2)) {
        echoValue = getStr(getSubStr(str, pos, anbPos));
    } else {
        short temp = 0;
        for (short i = 0; !ifIsEnd(*(*(str + i))); i++) {
            temp++;
        }
        echoValue = getStr(getSubStr(str, anbPos + 1, temp));
    }
    
    return echoValue;
}

short ifHavEqo(char *str) {
    short ifHav = -1;
    
    // TODO
    if (str != NULL) {
        for (short i = 0; !ifIsEnd(*(str + i)); i++) {
            if (ifIsEqo(*(str + i))) {
                ifHav = i;
                break;
            }
        }
    }
    
    return ifHav;
}

short *ifHavAnb(char **str, short pos) {
    short *ifAnb = NULL;
    
    // TODO
    if (str != NULL) {
        ifAnb = (short *)malloc(2 * sizeof(short));
        char *strLefSinAnb = (char *)malloc(2 * sizeof(char));
        char *strRigSinAnb = (char *)malloc(2 * sizeof(char));
        char *strLefDouAnb = (char *)malloc(3 * sizeof(char));
        char *strRigDouAnb = (char *)malloc(3 * sizeof(char));
        
        *ifAnb = -1;
        *(ifAnb + 1) = -1;
        *strLefSinAnb = '>';
        *(strLefSinAnb + 1) = (char)10;
        *strRigSinAnb = '<';
        *(strRigSinAnb + 1) = (char)10;
        *strLefDouAnb = '>';
        *(strLefDouAnb + 1) = '>';
        *(strLefDouAnb + 2) = (char)10;
        *strRigDouAnb = '<';
        *(strRigDouAnb + 1) = '<';
        *(strRigDouAnb + 2) = (char)10;
        
        for (short i = pos; !ifIsEnd(*(*(str + i))); i++) {
            if (strCmp(strLefSinAnb, *(str + i))) {
                *ifAnb = i;
                *(ifAnb + 1) = 0;
            } else if (strCmp(strRigSinAnb, *(str + i))) {
                *ifAnb = i;
                *(ifAnb + 1) = 1;
            }else if (strCmp(strLefDouAnb, *(str + i))) {
                *ifAnb = i;
                *(ifAnb + 1) = 2;
            }else if (strCmp(strRigDouAnb, *(str + i))) {
                *ifAnb = i;
                *(ifAnb + 1) = 3;
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

short getVarCou(char **str, short count) {
    short value = 0;
    
    // TODO
    if (str != NULL) {
        
        char *tempEnd = (char *)malloc(sizeof(char));
        char **tempStr = (char **)malloc(count * sizeof(char *));
        
        *tempEnd = (char)10;
        
        for (short i = 0; i < count; i++) {
            *(tempStr + i) = tempEnd;
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
    short *tempMat = NULL;
    short count = 0;
    short temp = 0;
    short start = 0;
    short len = getStrLen(sentence);
    
    // TODO
    if (sentence != NULL) {
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
    
    return  label;
}

varNode *varInfo(char ***page) {
    varNode *var = NULL;
    char **temVar = NULL;
    
    // TODO
    if (page != NULL) {
        for (short i = 0; i < pageLength; i++) {
            for (short j = 0; !ifIsEnd(*(*(*(page + i) + j))); j++) {
                if (getStrLen((*(*(page + i) + j + 1))) > 3) {
                    if (ifIsSet(*(*(page + i) + j))) {
                        short index = ifHavEqo(*(*(page + i) + j + 1));
                        if ((index != -1) && (index != 0)) {
                            varCount++;
                        }
                    }
                }
            }
        }
        
        temVar = (char **)malloc(varCount * sizeof(char *));
        short temp = 0;
        
        for (short i = 0; i < pageLength; i++) {
            for (short j = 0; !ifIsEnd(*(*(*(page + i) + j))); j++) {
                if (getStrLen((*(*(page + i) + j + 1))) > 3) {
                    if (ifIsSet(*(*(page + i) + j))) {
                        short index = ifHavEqo(*(*(page + i) + j + 1));
                        
                        if ((index != -1) && (index != 0)) {
                            *(temVar + temp) = (char *)malloc((index + 1) * sizeof(char));
                            
                            for (short p = 0; p < index; p++) {
                                *(*(temVar + temp) + p) = *(*(*(page + i) + j + 1) + p);
                            }
                            *(*(temVar + temp) + index) = (char)10;
                            temp++;
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
            for (short j = 0; !ifIsEnd(*(*(*(page + i) + j))); j++) {
                if (getStrLen((*(*(page + i) + j + 1))) > 3) {
                    if (ifIsSet(*(*(page + i) + j))) {
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
                                (*(var + temp)).label = (char *)malloc((index + 1) * sizeof(char));
                                (*(var + temp)).value = (char *)malloc(len + sizeof(char));
                                
                                for (short p = 0; p < index; p++) {
                                    *((*(var + temp)).label + p) = *(*(*(page + i) + j + 1) + p);
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
    
    if (str == NULL) {
        return 1;
    }
    
    for (short i = 0; !ifIsEnd(*(str + i)); i++) {
        printf("%c", *(str + i));
    }
    
    return 0;
}


int showPage(char ***page) {
    
    if (page == NULL) {
        return 1;
    }
    
    for (short i = 0; i < pageLength; i++) {
        for (short j = 0; *(*(*(page + i) + j)) != (char)10; j++) {
            printf("%s", *(*(page + i) + j));
        }
    }
    
    return 0;
}

int showLabel(labelNode *label) {
    
    if (label == NULL) {
        return 1;
    }
    
    for (short i = 0; i < labelCount; i++) {
        printf("%hd -- %s", (*(label + i)).locat, (*(label + i)).label);
    }
    
    return 0;
}

int showVar(varNode *var) {
    
    if (var == NULL) {
        return 1;
    }
    
    for (short i = 0; i < varCount; i++) {
        printf("%hd -- %hd -- %s", (*(var + i)).rowIndex, (*(var + i)).colIndex, (*(var + i)).label);
    }
    
    return 0;
}
