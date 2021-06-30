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
bool processSet(char **, short, varNode*);
bool processShift(char **, short, argNode);
short processGoto(char **, short, labelNode*);
short processFor(char **, short, varNode*);
short processIf(char **, short, varNode*);
int process(char ***, labelNode *, argNode, varNode*, short);

#endif /* process_h */
