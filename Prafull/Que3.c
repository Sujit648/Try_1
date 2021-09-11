#include<stdio.h>
#include<string.h>
#include<conio.h>

// Arr[10] = {};
// add number
// if at last index notify
// delete number
// if at last index notify
// find max and min
// out: number and address
// sum of all numbers
// out: sum 

int idx = 0, n = 0;

int array[10] = {};

void p_a(){
    printf("\nArray: ");
    for(int i = 0; i<10; i++){
        printf(" %d: %d", i, array[i]);
    }
}

void add(){
    printf("\nEnter index:");
    int input = 0;
    scanf("%d", &input);
    idx = (input>=0 && input<10)?idx = input:printf("Incorrect index.");
    while(idx < 10){
    printf("\nEnter input for index %d:", idx);
    input = 0;
    scanf("%d", &input);
    array[idx] = input;
    idx++;
    }
    p_a();
}

void del(){
    printf("\nEnter index:");
    int input = 0;
    scanf("%d", &input);
    idx = (input>=0 && input<10)?idx = input:printf("Incorrect index.");
    array[idx] = 0;
    printf("Array: ");
    p_a();
}
void others(){
    int min, max=0;
    int min_index = 0, max_index = 0;
    for (int i = 0; i<10; i++){
        min = min>=array[i]?array[i]:min;
        max = max<=array[i]?array[i]:max;
    }
    for (int i = 0; i<10; i++){
        if(array[i] == min){
            min_index = i;
        }
        if(array[i] == max){
            max_index = i;
        }
    }

    int sum = 0;

    for(int i = 0; i<10; i++){
        sum += array[i];
    }

    printf("Min: %d, Min_index: %d, Max: %d, Max_index: %d", min, min_index, max, max_index);
    printf("\nSum: %d", sum);
}

void main(){

    do{
    printf("\nSelect \n 1. Add Element \n 2. Delete Element \n 3. Max Min Sum\n");
    scanf("\n %d", &n);
    switch (n){
    case 1:
        add();
        break;
    case 2:
        del();
        break;
    case 3:
        others();
        break;
    
    default:
        printf("Select between the inputs");
        break;
    }
    }while(n>0 && n<=3);
}


