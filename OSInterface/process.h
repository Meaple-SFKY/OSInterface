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

bool processEcho(char **, short, varNode*);
bool processSet(char **, short, varNode*);
short processGoto(char **, short, labelNode*);
short processFor(char **, short, varNode*);
short processIf(char **, short, varNode*);
short processShift(char **, short, varNode*);
int process(char ***, labelNode *, varNode*, short);

#endif /* process_h */
