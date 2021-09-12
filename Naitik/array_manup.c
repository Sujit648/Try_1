#include<stdio.h>
int main(){
    int a[10]={0};
    int i,n,position,value;
    //do{
        printf("\nwhat to do\n1. Add element\n2. delete element\n3. max element\n4. min element\n5. addition of elements\n");
        scanf("%d\n",&n);
        switch (n)
        {
        case 1:printf("Value to be added = "); 
        scanf("%d\n",&value);
        printf("At Index = ");
        scanf("%d\n",&position);
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
         break;
        
        /*case 2:
            break;
        
        case 3:
            break;
        
        case 4:
            break;
        
        case 5:
            break;
        */
        default:
            break;
        }
    //}
    return 0;
}