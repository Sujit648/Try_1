#include <stdio.h>
#include<conio.h>
struct book
{
int price;
char name[20];
int id;
};
int s =5;
void accept(struct book list[50],int s);
void display(struct book list[50],int s);
void bsortDesc(struct book list[50],int s);
int main()
{
    struct book data[20];
 
int n;

accept(data,10);
bsortDesc(data, 10);
display(data, 10);


//getch();

}


void accept(struct book list[50],int s)
{
    int i;

for (i = 0; i < s; i++)

{
printf("\nEnter name : ");
scanf("%s", list[i].name);

printf("\nEnter ID: ");
scanf("%d",&list[i].id);

printf("\nEnter price : ");
scanf("%d", &list[i].price);

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