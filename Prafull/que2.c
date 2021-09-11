#include<stdio.h>
#include<string.h>
#include<conio.h>

void Stringcopy()
{
char studentname[20] = "Amit";
char copy[20]="";

for(int i =0; i<20; i++){
    // if (studentname[i] == '\0'){
    //     return;
    // }
    copy[i] = studentname[i];
}

printf("\nStudentname=%s\n",studentname);
printf("\nCopy=%s\n",copy);
return;
}



char* StringConcat(char* destination, const char* source){

    char* ptr = destination + strlen(destination);
    while (*source != '\0') {
        *ptr++ = *source++;
    }
    *ptr = '\0';
    return destination;
}

void StringCompare(char* destination, const char* source){

    int i = 0;
    while(destination[i] != '\0' || source[i] != '\0'){
        if(destination[i] == source[i]){
            i++;
        }
        else{
            printf("Not Equal");
            return;
        }
    }
    printf("Equal");
    return;
}

// dest = "test123'\0'"
// *ptr = dest + len(dest)
// src = "source'\0'"

// dest = "test123source'\0'"
// print(dest) = test123source


void StringRev(char* str){

    char reverse[20] = "";
    char* p = &reverse[0];
    for(int i = strlen(str)-1; i>=0; i--){
        *p = str[i];
        p++;
    }
    p++;
    *p = '\0';
    printf("%s", reverse);
    return;
}


int main()
{
    // Stringcopy();
    // char x[100] = "";
    // StringConcat(x, "Test");
    // StringConcat(x, "Test2");    
    // printf(x);

    // char a[10] = "hello";
    // char b[10] = "hello not";
    // StringCompare(a, b);

    char a[10] = "hello";
    StringRev(a);
    
    return 0;
}