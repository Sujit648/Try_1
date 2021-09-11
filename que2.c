#include<stdio.h>
#include<string.h>
#include<conio.h>

int Stringcopy()
{
char studentname[20];
strcpy(studentname,"Amit");
printf("\nStudentname=%s\n",studentname);
return(0);
    
}
int StringCmp()
{
char name1[]= "amit",name2[]= "amita";
if(strncmp(name1,name2,3)==0)
printf("Values are same");
else
printf("Values are not same");
return(0);
}
int StringConcat()
{
char studentname[20]="Amit";

strcat(studentname,"Singh");
printf("\nStudentname=%s",studentname);
return(0);
}

int main()
{
    int a= Stringcopy();
    int b= StringCmp();
    int c= StringConcat();
   
    return 0;
}