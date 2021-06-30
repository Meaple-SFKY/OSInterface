//
//  process.c
//  OSInterface
//
//  Created by sfky on 2021/6/27.
//

#include "process.h"

int process(char ***page, labelNode *label, argNode arg, varNode *var, short rowPos) {
    
    // TODO
    for (short i = rowPos; i < pageLength; i++) {
        char *str = *(*(page + i));
        
        if (ifIsEcho(str)) {
//            printf("echo : ----\n");
            
            // TODO
            if (!processEcho(*(page + i), 1, arg, var)) {
                printf("Echo format error in line %hd, check again.\n", (short)(i + 1));
            }
            
        } else if (ifIsGoto(str)) {
//            printf("goto : ----\n");
            
            // TODO
            short p = processGoto(*(page + i), 1, label);
            if (p != -2) {
                i = p - 1;
            } else {
                printf("Cannot find goto label in line %hd, check again.\n", (short)(i + 1));
            }
            
        } else if (ifIsSet(str)) {
//            printf("set : ----\n");
            
            // TODO
            if(!processSet(*(page + i), 1, var)) {
                printf("Set var error in line %hd, check again.\n", (short)(i + 1));
            }
            
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

bool processEcho(char **word, short pos, argNode arg, varNode *var) {
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
        
        for (short p = pos; p < douLen; p++) {
            if (ifIsMod(*(*(echoStr + p)))) {
                short anaMod = 0;
                
                for (short i = 1; i < getStrLen(*(echoStr + p)); i++) {
                    if (ifIsMod(*(*(echoStr + p) + i))) {
                        anaMod = i;
                        break;
                    }
                }
                
                if (anaMod > 1) {
                    char *value = (char *)malloc(anaMod * charSize);
                    
                    for (short j = 1; j < anaMod; j++) {
                        *(value + j - 1) = *(*(echoStr + p) + j);
                    }
                    *(value + anaMod - 1) = endChar;
                    bool flag = false;
                    short subLen = getStrLen(value) - 1;
                    
                    for (short i = 0; i < subLen; i++) {
                        if (!ifIsDig(*(value + i))) {
                            flag = true;
                            break;
                        }
                    }
                    
                    if (flag) {
                        value = getValue(value, var);
                        
                        if ((value != NULL) && (*value != endChar)) {
                            
                            // TODO
                            short varLen = getStrLen(value);
                            *(echoStr + p) = (char *)realloc(*(echoStr + p), varLen * charSize);
                            for (short i = 0; i < varLen; i++) {
                                *(*(echoStr + p) + i) = *(value + i);
                            }
                        }
                    } else {
                        
                        // TODO
                        
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
                        printf("Echo filepath error: ");
                        showStrN(path);
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
        bool flag = false;
        for (short i = 0; i < labelCount; i++) {
            if(strCmp(*(word + pos), (*(label)).label)) {
                gotoPos = (*(label)).locat + 1;
                flag = true;
                break;
            }
        }
        if (flag == false) {
            gotoPos = -2;
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
                    
                    // TODO
                    if (slashInfo == 0) {
                        char *name = getVarNam(*(word + pos + 1));
                        char *value = getVarVal(*(word + pos + 1));
                        len = getStrLen(name) - 1;
                        bool flag = false;
                        
                        for (short i = 0; i < len; i++) {
                            if(!ifIsDig(*(name + i))) {
                                flag = true;
                                break;
                            }
                        }
                        
                        if (flag) {
                            value = setArith(value);
                            
                            if (!setVarVal(name, value, var)) {
                                printf("Set ari error: set /a ");
                                showStr(name);
                                printf("=");
                                showStrN(getVarVal(*(word + pos + 1)));
                                suc = false;
                            }
                        } else {
                            printf("Set ari var name error: set /a ");
                            showStr(name);
                            printf("=");
                            showStrN(getVarVal(*(word + pos + 1)));
                            suc = false;
                        }
                    } else if (slashInfo == 1) {
                        char *name = getVarNam(*(word + pos + 1));
                        char *info = getVarVal(*(word + pos + 1));
                        len = getStrLen(name) - 1;
                        bool flag = false;
                        
                        for (short i = 0; i < len; i++) {
                            if(!ifIsDig(*(name + i))) {
                                flag = true;
                                break;
                            }
                        }
                        
                        if (flag) {
                            showStr(info);
                            putchar(32);
                            char *te = getFollow(word, pos + 2);
                            showStr(te);
                            putchar(32);
                            char *value = getInp(1);
                            
                            if (!setVarVal(name, value, var)) {
                                printf("Set string error, number is UNUSABLE: set /p ");
                                showStr(name);
                                printf("=");
                                showStrN(getVarVal(*(word + pos + 1)));
                                suc = false;
                            }
                        } else {
                            printf("Set var name error, number is UNUSABLE: set /p ");
                            showStr(name);
                            printf("=");
                            showStrN(getVarVal(*(word + pos + 1)));
                            suc = false;
                        }
                    } else {
                        printf("Set type error: ");
                        showStrN(getFollow(word, 0));
                        printf("If it's directly, /a or /p?\n");
                        suc = false;
                    }
                }
            } else {
                char *name = getVarNam(*(word + pos));
                char *value = getVarVal(*(word + pos));
                len = getStrLen(name) - 1;
                bool flag = false;
                
                for (short i = 0; i < len; i++) {
                    if(!ifIsDig(*(name + i))) {
                        flag = true;
                        break;
                    }
                }
                
                if (flag) {
                    if (!setVarVal(name, value, var)) {
                        printf("Set string error: set ");
                        showStr(name);
                        printf("=");
                        showStrN(getVarVal(*(word + pos)));
                        suc = false;
                    }
                } else {
                    printf("Set var name error, number is UNUSABLE: set ");
                    showStr(name);
                    printf("=");
                    showStrN(getVarVal(*(word + pos)));
                    suc = false;
                }
            }
        }
    }
    
    return suc;
}

bool processShift(char **word, short pos, argNode arg) {
    bool suc = true;
    
    // TODO
    
    return suc;
}
