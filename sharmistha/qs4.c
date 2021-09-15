#include <stdio.h>
#include<conio.h>
struct book
{
int price;
char name[20];
int id;
};
void merge(struct book list[50], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = list[l + i];
    for (j = 0; j < n2; j++)
        R[j] = list[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        list[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        list[k] = R[j];
        j++;
        k++;
    }
}
 
int s =5;
void accept(struct book list[50],int s);
void display(struct book list[50],int s);
void bsortDesc(struct book list[50],int s);
void mergeSort(struct book list[50], int l, int r);
int main()
{
    struct book data[20];
 
int n;

accept(data,10);
display(data, 10);
bsortDesc(data, 10);

mergeSort(data, 0, data_size - 1);


//getch();

}


void accept(struct book list[50],int s)
{
    int i;

for (i = 0; i < s; i++)

{
printf("\nEnter name : ");
scanf("%s\n", list[i].name);

printf("\nEnter ID: ");
scanf(" %d\n", list[i].id);

printf("\nEnter price : ");
scanf(" %d\n", list[i].price);

}

}

void display(struct book list[80], int s)
{
int i;
printf("\n\nName\t\tID\t\tprice\n");
printf("-------------------------------------\n");
for (i = 0; i < s; i++)
{
printf("%s\t\t%d\t\t%d\n", list[i].name, list[i].id, list[i].price);
}
}
void bsortDesc(struct book list[50], int s)  
{  
    int i, j;
struct book temp;
for (i = 0; i < s ; i++)
{
for (j = 0; j < (s -i); j++)
{
if (list[j].price > list[j + 1].price)
{
temp = list[j];
list[j] = list[j + 1];
list[j + 1] = temp;
}
}
}
}
void mergeSort(struct book list[50], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
        int i;
    for (i = 0; i < size; i++)
        printf("%d ", list[i]);
    printf("\n");
    }
}