#include<stdio.h>
int main(){
    int a[10]={0};
    
    int i,n,position,value;
    
        printf("\nwhat to do\n1. Add element\n");
        scanf("%d",&n);
        if(n==1)
        {
        printf("Value to be added = "); 
        scanf("%d\n",&value);
        printf("At Index = ");
        scanf("%d\n",position);
        for (i = 9; i>=position; i--)
        {
            a[i]=a[i-1];
            a[position-1]=value;
        }
        
for (i = 0; i < 10; i++)
        {
            printf("element at %d is %d ",i,a[i]);
            printf("\n");
        }
        }
    return 0;
}