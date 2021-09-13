#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct cricket
{
   char name[50];
 char team[50];
 float bavg ;
};
int main(void)
{
struct cricket player [10],temp;
int i,j;
printf("Enter the details of player");
for (i=0;i<3;i++)  //REPLACE 3 WITH 10 TO TAKE DETAILS OF 10 PLAYER
   {
    printf("\nEnter Name :- ");
    scanf("%s",player[i].name);
    printf("Enter Team :- ");
    scanf("%s",player[i].team);
    printf("Enter Bating Avg. :- ");
    scanf("%f",&player[i].bavg);
    printf("\n");
   }int n=3;    //REPLACE 3 WITH 10 TO TAKE DETAILS OF 10 PLAYER

   printf("Details of Players\n");
   for(i=1;i<n;i++){
    for(j=0;j<n-1;j++)
    {
        if (strcmp(player[j].team,player[j+1].team)) //two string arguments are passed for comparision
        {
            temp = player[j];
            player[j]=player[j+1];
            player[j+1]=temp;

        }
    }
   }
   for (i=0;i<3;i++)    //REPLACE 3 WITH 10 TO TAKE DETAILS OF 10 PLAYER
    {

    printf("\nName :- %s\n",player[i].name);
    printf("\nTeam :- %s\n",player[i].team);
    printf("\nBating Avg. :- %f\n",player[i].bavg);
    }

}

