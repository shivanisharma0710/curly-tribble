#include<stdio.h>
int main()
{
  int c,d,e;
  printf("enter the number at location c:");
  scanf("%d",&c);
  printf("enter the number at loaction d:");
  scanf("%d",&d);
  e=c;
  c=d;
  d=e;
  printf("the number at location c=%d\n",c);
  printf("the number at location d=%d\n",d);
}