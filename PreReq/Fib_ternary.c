#include<stdio.h>
// 1. Write a recursive function that will generate and print first n fibonacci numbers
long fib(int n){
    long out = 0;
    // Base cases
    out = n==0?0:n==1?1:(fib(n-1)+fib(n-2));
}
void main(){
    int n;
    printf("Input N:");
    scanf("%d", &n);  
    n+=1;
    for(int i=0; i<n; i++){
            i<n-1?printf("%d, ", fib(i)):printf("%d.", fib(i));
        }
}

