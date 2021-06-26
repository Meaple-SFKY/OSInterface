//
//  method.h
//  OSInterface
//
//  Created by sfky on 2021/6/25.
//

#ifndef method_h
#define method_h

#include <stdio.h>
#include <stdlib.h>

#define bool char
#define true 1
#define false 0

const static short N = 255;
extern short pageLength;
extern short labelCount;

typedef struct labelNode {
    short locat;
    char *label;
} labelNode;

int showPage(char ***);
bool strCmp(char *, char *);
bool ifIsSpace(char);
bool ifIsEnd(char);
bool ifIsColon(char);
bool ifIsAt(char);
bool ifIsEcho(char *);
bool ifIsFor(char *);
bool ifIsGoto(char *);
bool ifIsIf(char *);
bool ifIsSet(char *);
bool ifIsShift(char *);
bool ifIsEQU(char *);
bool ifIsNEQ(char *);
bool ifIsLSS(char *);
bool ifIsLEQ(char *);
bool ifIsGTR(char *);
bool ifIsGEQ(char *);
char **strToTwoDem(char *);
short getStrLen(char *);

#endif /* method_h */
