#include <stdio.h>
#include <string.h>

int main( int argc , char *argv[]){   
    
    int i;
    char *token =strtok(argv[1],",");
    while(token != NULL){
        printf("%s\n",token);
        token=strtok(NULL,",");
    }
    printf("argc = %d\n",argc);
    return 0;
}