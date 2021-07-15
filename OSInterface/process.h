//
//  process.h
//  OSInterface
//
//  Created by sfky on 2021/6/27.
//

#ifndef process_h
#define process_h

#include "method.h"

bool processEcho(char **, short, argNode, varNode*);
bool processSet(char **, short, varNode*, argNode);
short processGoto(char **, short, short, labelNode*);
bool processFor(char **, short, varNode*, argNode);
ifInfo processIf(char **, short, short, argNode, varNode*, labelNode *);
argNode processShift(char **, short, argNode);
int process(char ***, labelNode *, argNode, varNode*, short);

#endif /* process_h */
