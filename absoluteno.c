#include<stdio.h>
int main()
{
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    if(n<0)
    n=n*-1;
    printf("the absolute value of given number is %d\n", n);
}