#include <stdio.h>
#include<string.h>
int main( int argc, char* argv[])
{
    //printf("The Total Number of Arguments Are %d\n", argc);
    
    for(int i=1; i<argc; i++){
        char* token= strtok(argv[i],",");
        while (token != NULL)
        {
            printf("%s\n",token);
            token = strtok(NULL,",");
        }
    }
    return 0;
}
