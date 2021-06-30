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
    int reMain = 0;
    
    // insert code here...
    if (argc > 1) {
        char ***page = NULL;
        page = fileToPage(argc, argv, page);

        labelNode *label = labelInfo(page);
        varNode *var = varInfo(page);
        argNode arg = setArgNod(argc, argv);
        process(page, label, arg, var, 0);
        
//        if (showArg(arg) != 0) {
//            printf("arg error\n");
//        }
        
    } else {
        printf("Error format,Usage: display filename1\n");
        reMain = 1;
    }
    
    return 0;
}
