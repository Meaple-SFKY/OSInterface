//
//  main.c
//  OSInterface
//
//  Created by sfky on 2021/6/17.
//

#include "file_in.h"
#include "method.h"

int main(int argc, char * argv[]) {
    
    // insert code here...
    
    // File To Array
    char ***page = NULL;
    page = fileToPage(argc, argv, page);
    showPage(page);
    
//    printf("%s", **page);
    
    return 0;
}
