#include<stdio.h>
int main()
{
  int yr;
  printf("enter a year:");
    scanf("%d",&yr);
    if(yr%4==0 && yr%400==0 || yr%100!=0)
        printf("leap year\n");
        else
        printf("not leap year\n");
}