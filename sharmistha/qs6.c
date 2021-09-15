#include<stdlib.h> 

#include<conio.h>

# include<stdio.h>

# define MAX 5

struct student {
    char name[50];
    int roll;
    float marks;
    int std;
    char subname[50];
} s;

int cqueue_arr[MAX];

int front = -1;

int rear = -1;

void insert(int item)

{

if((front == 0 && rear == MAX-1) || (front == rear+1))

{

printf("Queue Overflow \n");

return;

}

if (front == -1)  /*If queue is empty */

{

front = 0;

rear = 0;

}

else

{

if(rear == MAX-1) /*rear is at last position of queue */

rear = 0;

else

rear = rear+1;

}

cqueue_arr[rear] = item ;

}

void del()

{

if (front == -1)

{

printf("Queue Underflow\n");

return ;

}

printf("Element deleted from queue is : %d\n",cqueue_arr[front]);

if(front == rear) /* queue has only one element */

{

front = -1;

rear=-1;

}

else

{

if(front == MAX-1)

front = 0;

else

front = front+1;

}

}



int main()

{

int choice,item;

do

{

printf("1.Insert\n");

printf("2.Delete\n");


printf("3.Quit\n");

printf("Enter your choice : ");

scanf("%d",&choice);



   

   

switch(choice)

{

case 1 :
 printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

 printf("Enter Std: ");
    scanf("%d", &s.std);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
 
    printf("Enter subject name: ");
    fgets(s.subname, sizeof(s.subname), stdin);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);

    printf("Roll number: %d\n", s.roll);
     printf("Standard: %d\n", s.std);
     printf(" Subject Name: ");
    printf("%s", s.subname);
    printf("Marks: %.1f\n", s.marks);


scanf("%d", &item);

insert(item);

break;

case 2 :

del();

break;

case 3:


break;

default:

printf("Wrong choice\n");

}

}while(choice!=3);

return 0;

}