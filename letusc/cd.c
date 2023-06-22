#include<stdio.h>
int main()
{
  int c,d;
  printf("enter the number at location c:");
  scanf("%d",&c);
  printf("enter the number at loaction d:");
  scanf("%d",&d);
  c=c+d;
  d=c-d;
  c=c-d;
  printf("the number at location c=%d\n",c);
  printf("the number at location d=%d\n",d);
}