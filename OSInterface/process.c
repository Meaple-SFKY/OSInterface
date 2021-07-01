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
        char *err = (char *)malloc(6 * charSize);
        *err = 'E';
        *(err + 1) = 'r';
        *(err + 2) = 'r';
        *(err + 3) = ':';
        *(err + 4) = ' ';
        *(err + 5) = endChar;
        
        if (ifIsEcho(str)) {
            if (!processEcho(*(page + i), 1, arg, var)) {
                showStr(err);
                showStrN(digToStr(i + 1));
            }
            
        } else if (ifIsGoto(str)) {
            short p = processGoto(*(page + i), i, 1, label);
            if ((p == i + 1) || (p == -1)) {
                showStr(err);
                showStrN(digToStr(i + 1));
            } else {
                i = p - 1;
            }
            
        } else if (ifIsSet(str)) {
            if(!processSet(*(page + i), 1, var, arg)) {
                showStr(err);
                showStrN(digToStr(i + 1));
            }
            
        } else if (ifIsFor(str)) {
//            printf("for : ----\n");
            
            // TODO
            
        } else if (ifIsIf(str)) {
            
            // TODO
            ifInfo info = processIf(*(page + i), i, 1, arg, var, label);
            if (info.pos != -2) {
                i = info.pos - 1;
            }
            
            if (!info.errInfo) {
                showStr(err);
                showStrN(digToStr(i + 1));
            }
            
        } else if (ifIsShift(str)) {
            
            // TODO
            argNode tempArg = processShift(*(page + i), 1, arg);
            if (tempArg.count >= 0) {
                arg = tempArg;
            }
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
            *(echoStr + i) = getAriStr(*(word + i), var, arg);

        }
        
        if (anbInfo != NULL) {
            if ((*(anbInfo + 1) == 0) || (*(anbInfo + 1) == 2)) {
                
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
                    char *endStr = (char *)malloc(charSize);
                    *endStr = endChar;
                    
                    if (!(echoFile(path, value, mode) && echoFile(path, endStr, 1))) {
                        suc = false;
                    }
                } else {
                    suc = false;
                }
            } else {
                showStrN(getFollow(echoStr, pos));
            }
        }
    }
    
    return suc;
}

short processGoto(char **word, short row, short pos, labelNode *label) {
    short gotoPos = row + 1;
    
    // TODO
    if (word != NULL) {
        bool flag = false;
        for (short i = 0; i < labelCount; i++) {
            if(strCmp(*(word + pos), (*(label + i)).label)) {
                gotoPos = (*(label + i)).locat + 1;
                flag = true;
                break;
            }
        }
    }
    
    return gotoPos;
}

bool processSet(char **word, short pos, varNode *var, argNode arg) {
    bool suc = true;
    
    // TODO
    if (word != NULL) {
        
        if (ifIsEnd(*(*(word + pos)))) {
            showVar(var, arg);
        } else {
            short len = getStrLen(*(word + pos));
            
            if (len == 3) {
                if (!ifIsEnd(*(*(word + pos + 1)))) {
                    short slashInfo = ifIsSla(*(word + pos));
                    
                    // TODO
                    if (slashInfo == 0) {
                        char *name = getVarNam(*(word + pos + 1));
                        char *value = getVarVal(*(word + pos + 1));
                        value = getAriStr(value, var, arg);
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
                                suc = false;
                            }
                        } else {
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
                                suc = false;
                            }
                        } else {
                            suc = false;
                        }
                    } else {
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
                        suc = false;
                    }
                } else {
                    suc = false;
                }
            }
        }
    }
    
    return suc;
}

argNode processShift(char **word, short pos, argNode arg) {
    argNode tempArg = arg;
    
    // TODO
    if (word != NULL) {
        if (*(*(word + pos)) == (char)10) {
            tempArg = shiftArg(arg, 1);
        } else {
            short argPos =ifShiSla(*(word + pos));
            if (argPos != 0) {
                tempArg = shiftArg(arg, argPos);
            }
        }
    } else {
        tempArg.count = 0;
    }
    
    return tempArg;
}

ifInfo processIf(char **word, short row, short pos, argNode arg, varNode *var, labelNode *label) {
    ifInfo thisInfo = {
        row + 1,
        true
    };
    
    // TODO
    if (word != NULL) {
        short douLen = getDouStrLen(word) - 1;
        bool *flag = ifJudTru(*(word + pos), var, arg);
        
        if (*flag) {
            if (*(*(word + pos + 1)) == (char)40) {
                short ifAnaBra = 0;
                
                for (short i = 1; i < douLen; i++) {
                    short subLen = getStrLen(*(word + pos + i));
                    if (*(*(word + pos + i) + subLen - 2) == (char)41) {
                        ifAnaBra = i;
                        break;
                    }
                }
                
                if (ifAnaBra != 0) {
                    if (*(flag + 1)) {
                        char **opera = getBraStr(word, pos + 1, ifAnaBra + 1);
                        if (ifIsEcho(*opera)) {
                            if(!processEcho(opera, 1, arg, var)) {
                                thisInfo.errInfo = false;
                            }
                        } else if (ifIsGoto(*opera)) {
                            short temPos = processGoto(opera, row, 1, label);
                            
                            if (temPos != -2) {
                                thisInfo.pos = temPos;
                            }
                        } else if (ifIsSet(*opera)) {
                            if(!processSet(opera, 1, var, arg)) {
                                thisInfo.errInfo = false;
                            }
                        } else {
                            thisInfo.errInfo = false;
                        }
                    } else {
                        if (ifIsEls(*(word + pos + ifAnaBra + 1))) {
                            short nowPos = pos + ifAnaBra + 2;
                            ifAnaBra = 0;

                            for (short i = 1; i < douLen; i++) {
                                short subLen = getStrLen(*(word + nowPos + i));
                                if (*(*(word + nowPos + i) + subLen - 2) == (char)41) {
                                    ifAnaBra = i;
                                    break;
                                }
                            }
                            
                            if (ifAnaBra != 0) {
                                char **anaOpera = getBraStr(word, nowPos, ifAnaBra + nowPos);
                                if (ifIsEcho(*anaOpera)) {
                                    if(!processEcho(anaOpera, 1, arg, var)) {
                                        thisInfo.errInfo = false;
                                    }
                                } else if (ifIsGoto(*anaOpera)) {
                                    short temPos = processGoto(anaOpera, row, 1, label);

                                    if (temPos != -2) {
                                        thisInfo.pos = temPos;
                                    }
                                } else if (ifIsSet(*anaOpera)) {
                                    if(!processSet(anaOpera, 1, var, arg)) {
                                        thisInfo.errInfo = false;
                                    }
                                } else {
                                    thisInfo.errInfo = false;
                                }
                            } else {
                                thisInfo.errInfo = false;
                            }
                        } else {
                            thisInfo.errInfo = false;
                        }
                    }
                } else {
                    thisInfo.errInfo = false;
                }
            } else {
                thisInfo.errInfo = false;
            }
        } else {
            thisInfo.errInfo = false;
        }
    } else {
        thisInfo.errInfo = false;
    }
    
    return thisInfo;
}

bool processFor(char **word, short pos, varNode* var, argNode arg) {
    bool suc = true;
    
    // TODO
    if (word != NULL) {
//        short douLen = getDouStrLen(word) - 1;
        short sla = ifForSla(*(word + pos));
        
        if (sla == -1) {
            
        } else if (sla == 0) {
            // /d
            
        } else if (sla == 1) {
            // /r
            
        } else if (sla == 2) {
            // /l
            
        } else if (sla == 3) {
            // /f
            
        }
        
    }
    
    return suc;
}
