#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>


void main ()
{
int MB, DB, YB;
int MJ,DJ,YJ;
int MC,DC,YC;
int empid,salary;
char name[10];
char address[30];

printf("Employee ID:");
scanf("%d", &empid);

printf("Enter name:");
scanf(" %c\n", &name);

printf("Enter address :");
scanf(" %c\n", address);

printf("Salary:");
scanf("%d", &salary);

printf("Date of birth DD-MM-YYYY: ");
scanf("%d- %d- %d", &MB, &DB, &YB);

printf("Date of joining DD-MM-YYYY: ");
scanf("%d- %d- %d", &MJ, &DJ, &YJ);

printf("Current date DD-MM-YYYY: ");
scanf("%d- %d- %d", &MC, &DC, &YC);

printf("Employee ID is : %d" , empid);
printf("Name is :%c" , name);
printf("Address is : %c" , address);
printf("Salary is : %d" , salary);
printf("DOB : %d -%d -%d" , MB,DB,YB);
printf("DOJ : %d -%d -%d" , MJ,DJ,YJ);
 age(DC, MC, YC, DB, MB, YB);
 
   return 0;

}

void age(int DC, int MC, int YC, int DB, int MB, int YB) {
   int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (DB > DC) {
      DC = DC + month[MB - 1];
      MC = MC - 1;
   }
   if (MB > MC) {
      YC = YC - 1;
      MC = MC + 12;
   }
   int final_date = DC - DB;
   int final_month = MC - MB;
   int final_year = YC - YB;
   printf("Present Age Years: %d Months: %d Days: %d", final_year, final_month, final_date);
}

  void exp( int DJ, int MJ, int YJ, int DC ,int MC,int YC)
  {
      int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
      if(DJ<)
  }