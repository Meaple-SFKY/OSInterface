//
//  file_in.c
//  OSInterface
//
//  Created by sfky on 2021/6/23.
//

#include "file_in.h"

short pageLength;

char ***fileToPage(int argc, char *argv[], char ***page) {
    
    // TODO
    FILE *fp = NULL;
    char buffer[N + 1];
    page = NULL;
    short length = 0;
    
    for (short i = 0; i < N + 1; i++) {
        buffer[i] = (char)10;
    }
    
    if(argc != 2) {
        printf("Error format,Usage: display filename1\n");
        return NULL;
    }
    
    if((fp = fopen(argv[1],"r")) == NULL) {
        printf("The file <%s> can not be opened.\n",argv[1]);
        return NULL;
    }
    
    while (fgets(buffer, N, fp) != NULL) {
        length++;
    }
    
    pageLength = length;
    
    page = (char ***)malloc(length * sizeof(char **));
    
    fseek(fp, 0, SEEK_SET);
    
    for (short i = 0; fgets(buffer, N, fp) != NULL; i++) {
        *(page + i) = strToTwoDem(buffer);
    }
    
    
    
    fclose(fp);
    
    return page;
}
