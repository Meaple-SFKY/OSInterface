//
//  file_in.c
//  OSInterface
//
//  Created by sfky on 2021/6/23.
//

#include "file_in.h"

#define N 255

int initStr(char str[N + 1]) {
    
    for (short i = 0; i < N + 1; i++) {
        str[i] = '\0';
    }
    
    return 0;
}

char **dupliPage(char **page, short count) {
    char **tempPage = (char **)malloc(count * sizeof(char *));

    // TODO
    if (page == NULL) {
        return NULL;
    }
    
    for (short i = 0; i < count - 1; i++) {
        short len = 0;
        
        for (short j = 0; *(*(page + i) + j) != (char)10; j++) {
            len++;
        }
        len++;
        *(tempPage + i) = (char *)malloc(len * sizeof(char));
        for (short j = 0; j < len; j++) {
            *(*(tempPage + i) + j) = *(*(page + i) + j);
        }
    }

    return tempPage;
}

int copyPageEle(char **pageSou, char **pageDir, short count) {
    
    // TODO
    if (pageSou == NULL) {
        pageDir = NULL;
        return 1;
    }
    
    for (short i = 0; i < count - 1; i++) {
        short len = 0;
        for (short j = 0; *(*(pageSou + i) + j) != (char)10; j++) {
            len++;
        }
        len++;
        *(pageDir + i) = (char *)malloc(len * sizeof(char));
        for (short j = 0; j < len; j++) {
            *(*(pageDir + i) + j) = *(*(pageSou + i) + j);
        }
    }
    
    return 0;
}

int fileIn(int argc, char *argv[]) {
    
    FILE *fp = NULL;
    char getsStr[N + 1];
    char **page = NULL;
    short count = 0;
    
    initStr(getsStr);
    
    if(argc != 2) {
        printf("Error format,Usage: display filename1\n");
        return 1;
    }
    
    if((fp = fopen(argv[1],"r")) == NULL) {
        printf("The file <%s> can not be opened.\n",argv[1]);
        return 1;
    }
    
    while (fgets(getsStr, N, fp) != NULL) {
        
        // TODO
        count++;
        short len = 0;
        
        for (short i = 0; *(getsStr + i) != '\0'; i++) {
            len += sizeof(char);
        }
                
        char *str = (char *)malloc(len * sizeof(char));
        
        initStr(str);
        
        for (short i = 0; i < len; i++) {
            *(str + i) = getsStr[i];
        }
        
        char **tempPage = NULL;
        
        if (page != NULL) {
            tempPage = dupliPage(page, count);
        }
                
        page = (char **)realloc(page, count * sizeof(char *));
        
        if (tempPage != NULL) {
            copyPageEle(tempPage, page, count);
        }
        
        *(page + count - 1) = (char *)malloc(len * sizeof(char));
        for (short i = 0; i < len; i++) {
            *(*(page + count - 1) + i) = str[i];
        }
    }
    
//    for (short i = 0; i < count; i++) {
//        printf("%s", *(page + i));
//    }
    
    fclose(fp);
    
    return 0;
}
