#include<stdio.h>
int main()
{
int num,a=0,b=0,c=0;
printf("Enter the integer : ");
scanf("%d", &num);
if(num==0)
a++;
if(num>0)
b++;
if(num<0)
c++;
printf("You have entered %d positive, %d negative and %d zero integers\n", b,c,a);
}