//
//  file_in.c
//  OSInterface
//
//  Created by sfky on 2021/6/23.
//

#include "file_in.h"

short pageLength;

char **fileIn(int argc, char *argv[], char **page) {
    
    FILE *fp = NULL;
    char getsStr[N + 1];
    page = NULL;
    short count = 0;
    
    if(argc != 2) {
        printf("Error format,Usage: display filename1\n");
        return NULL;
    }
    
    if((fp = fopen(argv[1],"r")) == NULL) {
        printf("The file <%s> can not be opened.\n",argv[1]);
        return NULL;
    }
    
    while (fgets(getsStr, N, fp) != NULL) {
        count++;
    }
    count++;
    
    page = (char **)malloc(count * sizeof(char *));
    
    fseek(fp, 0, SEEK_SET);
    
    for (short temp = 0; fgets(getsStr, N, fp) != NULL; temp++) {
        
        short len = getStrLen(getsStr);
        
        *(page + temp) = (char *)malloc(len * sizeof(char));
        
        for (short i = 0; i < len - 1; i++) {
            *(*(page + temp) + i) = getsStr[i];
        }
        
        *(*(page + temp) + len - 1) = (char)10;
    }
    
    pageLength = count;
    
    *(page + count - 1) = (char *)malloc(sizeof(char));
    *(*(page + count - 1)) = (char)10;
        
    fclose(fp);
    
    return page;
}
