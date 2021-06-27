//
//  process.c
//  OSInterface
//
//  Created by sfky on 2021/6/27.
//

#include "process.h"

int process(char ***page, labelNode *label, varNode *var) {
    
    // TODO
    for (short i = 0; i < pageLength; i++) {
        if (ifIsEcho(*(*(page + i)))) {
            
            // TODO
            processEcho(*(page + i), 1, var);
            
        } else if (ifIsGoto(*(*(page + i)))) {
            
            // TODO
            
        } else if (ifIsSet(*(*(page + i)))) {
            
            // TODO
            
        } else if (ifIsFor(*(*(page + i)))) {
            
            // TODO
            
        } else if (ifIsIf(*(*(page + i)))) {
            
            // TODO
            
        } else if (ifIsShift(*(*(page + i)))) {
            
            // TODO
            
        } else if (ifIsEnd(*(*(*page + i)))) {
            
            // TODO
            
        } else {
            
            // TODO
            
        }
    }
    
    return 0;
}

short processEcho(char **word, short pos, varNode *var) {
    short posi = 0;
    
    // TODO
    if((word != NULL) && (!ifIsEnd(*(*(word + pos))))) {
        short *anbInfo = ifHavAnb(word, pos);
        
        if (ifIsMod(*(*(word + pos)))) {
            short anaMod = 0;
            
            for (short i = 1; !ifIsEnd(*(*(word + pos) + i)); i++) {
                if (ifIsMod(*(*(word + pos)+ i))) {
                    anaMod = i;
                }
            }
            
            if ((anaMod == 0) || (anaMod == 1)) {
                posi = -1;
            } else {
                char *value = (char *)malloc(anaMod * sizeof(char));
                
                for (short j = 1; j < anaMod; j++) {
                    *(value + j - 1) = *(*(word + pos) + j);
                }
                
                *(value + anaMod) = (char)10;
                value = getValue(value, var);
                
                if (value != NULL) {
                    
                    // TODO
                    short varLen = getStrLen(value);
                    *(word + pos) = (char *)realloc(*(word + pos), varLen * sizeof(char));
                    for (short i = 0; i < varLen; i++) {
                        *(*(word + pos) + i) = *(value + i);
                    }
                }
            }
        }
        if (anbInfo != NULL) {
            if (*anbInfo == 0 || *anbInfo == 2) {
                
                // TODO
                bool mode = false;
                if (*(anbInfo + 1) == 2) {
                    mode = true;
                }
                
                short pathPos = *anbInfo;
                short pathInfo = *(anbInfo + 1);
                char *path = getEchoPath(word, pathPos, pathInfo);
                char *value = getEchoValue(word, pos, pathPos, pathInfo);
                
                if (path != NULL) {
//                    printf("%s\n", path);
//                    printf("%s\n", value);
                    
                    if (!echoFile(path, value, mode)) {
                        printf("Echo File Error!\n");
                    }
                }
                
            } else {
                printf("Nor: %s", getFollow(word, pos));
            }
        }
    }
    
    return posi;
}
