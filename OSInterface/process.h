//
//  process.h
//  OSInterface
//
//  Created by sfky on 2021/6/27.
//

#ifndef process_h
#define process_h

#include <stdio.h>
#include "method.h"

bool processEcho(char **, short, argNode, varNode*);
bool processSet(char **, short, varNode*, argNode);
short processGoto(char **, short, short, labelNode*);
bool processFor(char **, short, varNode*, argNode);
ifInfo processIf(char **, short, short, argNode, varNode*, labelNode *);
argNode processShift(char **, short, argNode);
int process(char ***, labelNode *, argNode, varNode*, short);

bool echoFile(char *, char *, bool);
int showStr(char *);
int showStrN(char *);
int showVar(varNode *, argNode);

#endif /* process_h */
