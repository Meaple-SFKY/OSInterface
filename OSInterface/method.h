//
//  method.h
//  OSInterface
//
//  Created by sfky on 2021/6/25.
//

#ifndef method_h
#define method_h

#include "file_in.h"
#include <stdio.h>
#include <stdlib.h>

#define bool char
#define true 1
#define false 0
#define endChar (char)10
#define charSize sizeof(char)
#define overFlow -32768

const static short N = 255;
extern short pageLength;
extern short labelCount;
extern short varCount;

typedef struct labelNode {
    short locat;
    char *label;
} labelNode;

typedef struct varNode {
    short rowIndex;
    short colIndex;
    short varType;
    char *label;
    char *value;
} varNode;

typedef struct ariNode {
    bool ariType;
    int data;
    char ope;
} ariSen;

typedef struct argNode {
    char **argVar;
    short count;
} argNode;

typedef struct ifInfo {
    short pos;
    bool errInfo;
} ifInfo;

int showStr(char *);
int showStrN(char *);
int showVar(varNode *, argNode);
int decPow(int);
int strToDig(char *);
int ariVal(int, int, char);
bool strCmp(char *, char *);
bool ifIsSpace(char);
bool ifIsEnd(char);
bool ifIsColon(char);
bool ifIsAt(char);
bool ifIsMod(char);
bool ifIsDig(char);
bool ifIsEcho(char *);
bool ifIsFor(char *);
bool ifIsGoto(char *);
bool ifIsIf(char *);
bool ifIsSet(char *);
bool ifIsShift(char *);
bool ifIsEls(char *);
bool ifIsEQU(char *);
bool ifIsNEQ(char *);
bool ifIsLSS(char *);
bool ifIsLEQ(char *);
bool ifIsGTR(char *);
bool ifIsGEQ(char *);
bool *ifJudTru(char *, varNode *, argNode);
bool echoFile(char *, char *, bool);
bool setVarVal(char *, char *, varNode *);
char *digToStr(int);
char *setArith(char *);
char *getValue(char *, varNode *);
char *getVarNam(char *);
char *getVarVal(char *);
char *getStr(char *);
char *getFollow(char **, short);
char *getSubStr(char **, short, short);
char *getEchoPath(char **, short, short);
char *getEchoValue(char **, short, short, short);
char *getInp(bool);
char *getAriStr(char *, varNode *, argNode);
char **getBraStr(char **, short, short);
char **strToTwoDem(char *);
short ifIsOpe(char);
short ifHavEqo(char *);
short ifIsSla(char *);
short ifShiSla(char *);
short ifForSla(char *);
short getStrLen(char *);
short getDouStrLen(char **);
short getVarCou(char **, short);
short *ifHavAnb(char **, short);
labelNode *labelInfo(char ***);
varNode *varInfo(char ***);
ariSen getAriSen(bool);
argNode setArgNod(int, char **);
argNode shiftArg(argNode, short);

#endif /* method_h */
