#include<stdio.h>
int main()
{
int num,i,left;
printf("You have 21 matchstick, pick between 1 to 4 : ");
scanf("%d", &num);
for(i=1;i<5;i++)
{
if(num>4)
{		
printf("\nWrong choice!! \n\nChoose from 1 to 4.\n\nTry again!!");
break;
}
left=21-5*i;
printf("\nComputer picked %d matchsticks.\n\n%d matchstick left", 5-num, left);
if(left==1)
{
printf(" and it's your turn\n\nYou loose the game.\n\nTry again!!");
break;
}
printf("\n\nYour turn, pick matchsticks between 1 to 4 : ");
scanf("%d", &num);
}
}