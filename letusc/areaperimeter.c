#include<stdio.h>
int main()
{
int l,b,area,peri;
printf("enter length and breadth of rectangle:");
scanf("%d%d", &l,&b);
area=l*b;
peri=2*(l+b);
if(area>peri)
printf("area is greater than perimeter\n");
else 
printf("area is lesser than perimeter\n");

}

