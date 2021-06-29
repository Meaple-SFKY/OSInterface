//
//  process.c
//  OSInterface
//
//  Created by sfky on 2021/6/27.
//

#include "process.h"

int process(char ***page, labelNode *label, varNode *var, short rowPos) {
    
    // TODO
    for (short i = rowPos; i < pageLength; i++) {
        char *str = *(*(page + i));
        
        if (ifIsEcho(str)) {
//            printf("echo : ----\n");
            
            // TODO
            processEcho(*(page + i), 1, var);
            
        } else if (ifIsGoto(str)) {
//            printf("goto : ----\n");
            
            // TODO
            short p = processGoto(*(page + i), 1, label);
            i = p - 1;
            
        } else if (ifIsSet(str)) {
//            printf("set : ----\n");
            
            // TODO
            processSet(*(page + i), 1, var);
            
        } else if (ifIsFor(str)) {
            printf("for : ----\n");
            
            // TODO
            
        } else if (ifIsIf(str)) {
            printf("if : ----\n");
            
            // TODO
            
        } else if (ifIsShift(str)) {
            printf("shift : ----\n");
            
            // TODO
            
        } else {
            printf("else : ----\n");
            showStr(str);
            // TODO
            
        }
    }
    
    return 0;
}

bool processEcho(char **word, short pos, varNode *var) {
    bool suc = true;
    
    // TODO
    if((word != NULL) && (!ifIsEnd(*(*(word + pos))))) {
        short *anbInfo = ifHavAnb(word, pos);
        char **echoStr = NULL;
        short douLen = getDouStrLen(word);
        echoStr = (char **)malloc(douLen * sizeof(char *));
        
        for (short i = 0; i < douLen; i++) {
            short len = getStrLen(*(word + i));
            *(echoStr + i) = (char *)malloc(len * charSize);
            
            for (short j = 0; j < len; j++) {
                *(*(echoStr + i) + j) = *(*(word + i) + j);
            }
        }
        
        if (ifIsMod(*(*(echoStr + pos)))) {
            short anaMod = 0;
            
            for (short i = 1; !ifIsEnd(*(*(echoStr + pos) + i)); i++) {
                if (ifIsMod(*(*(echoStr + pos)+ i))) {
                    anaMod = i;
                }
            }
            
            if ((anaMod == 0) || (anaMod == 1)) {
                suc = false;
            } else {
                char *value = (char *)malloc(anaMod * charSize);
                
                for (short j = 1; j < anaMod; j++) {
                    *(value + j - 1) = *(*(echoStr + pos) + j);
                }
                
                *(value + anaMod) = endChar;
                value = getValue(value, var);
                
                if (value != NULL) {
                    
                    // TODO
                    short varLen = getStrLen(value);
                    *(echoStr + pos) = (char *)realloc(*(echoStr + pos), varLen * charSize);
                    for (short i = 0; i < varLen; i++) {
                        *(*(echoStr + pos) + i) = *(value + i);
                    }
                }
            }
        }
        if (anbInfo != NULL) {
            if ((*anbInfo == 0) || (*anbInfo == 2)) {
                
                // TODO
                bool mode = false;
                if (*(anbInfo + 1) == 2) {
                    mode = true;
                }
                
                short pathPos = *anbInfo;
                short pathInfo = *(anbInfo + 1);
                char *path = getEchoPath(echoStr, pathPos, pathInfo);
                char *value = getEchoValue(echoStr, pos, pathPos, pathInfo);
                
                if (path != NULL) {
                    
                    if (!echoFile(path, value, mode)) {
                        printf("Echo File Error!\n");
                        suc = false;
                    }
                } else {
                    suc = false;
                }
            } else {
                printf("Log: %s", getFollow(echoStr, pos));
            }
        }
    }
    
    return suc;
}

short processGoto(char **word, short pos, labelNode *label) {
    short gotoPos = pos + 1;
    
    // TODO
    if (word != NULL) {
        for (short i = 0; i < labelCount; i++) {
            if(strCmp(*(word + pos), (*(label)).label)) {
                gotoPos = (*(label)).locat + 1;
                break;
            }
        }
    }
    
    return gotoPos;
}

bool processSet(char **word, short pos, varNode *var) {
    bool suc = true;
    
    // TODO
    if (word != NULL) {
        
        if (ifIsEnd(*(*(word + pos)))) {
            showVar(var);
        } else {
            short len = getStrLen(*(word + pos));
            
            if (len == 3) {
                if (!ifIsEnd(*(*(word + pos + 1)))) {
                    short slashInfo = ifIsSla(*(word + pos));
                    
                    if (slashInfo == 0) {
                        char *name = getVarNam(*(word + pos + 1));
                        char *value = getVarVal(*(word + pos + 1));
                        value = setArith(value);
                        
                        // TODO
                        if (!setVarVal(name, value, var)) {
                            printf("Set(0) Error!\n");
                        }
                    } else if (slashInfo == 1) {
                        
                    } else {
                        printf("Set(2) Error!\n");
                        suc = false;
                    }
                }
            } else {
                char *name = getVarNam(*(word + pos));
                char *value = getVarVal(*(word + pos));
                if (!setVarVal(name, value, var)) {
                    printf("Set(3) Error!\n");
                }
            }
        }
    }
    
    return suc;
}
