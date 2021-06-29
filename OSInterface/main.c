//
//  main.c
//  OSInterface
//
//  Created by sfky on 2021/6/17.
//

#include "file_in.h"
#include "method.h"
#include "process.h"

int main(int argc, char * argv[]) {
    
    // insert code here...
    char ***page = NULL;
    page = fileToPage(argc, argv, page);
    
    labelNode *label = labelInfo(page);
    varNode *var = varInfo(page);
    process(page, label, var, 0);
    
//    showVar(var);
    
    return 0;
}
