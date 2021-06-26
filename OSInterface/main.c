//
//  main.c
//  OSInterface
//
//  Created by sfky on 2021/6/17.
//

#include "file_in.h"
#include "method.h"

int showPage(char **);
int showNode(labelNode *);

int main(int argc, char * argv[]) {
    
    // insert code here...
    
    // File To Array
    char **page = NULL;
    labelNode *labelInfo = NULL;
    
    page = fileIn(argc, argv, page);
    labelInfo = formatLabel(page);
    
    // Array lines Analysis
    showPage(page);
//    showNode(formatLabel(page));
    // Array Goto Label
    
    return 0;
}

int showPage(char **page) {
    
    for (short i = 0; i < pageLength; i++) {
//        printf("\n");
        short len = getStrLen(*(page + i));
        for (short j = 0; j < len; j++) {
            printf("%c", *(*(page + i) + j));
        }
    }
    return 0;
}

int showNode(labelNode *labelInfo) {
    
    for (short i = 0; i < labelCount; i++) {
        printf("%hd, %s", (*(labelInfo +i)).locat, (*(labelInfo + i)).label);
    }
        
    return 0;
}
