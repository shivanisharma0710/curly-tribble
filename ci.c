#include<stdio.h>
#include<math.h>
int main()
{
    float p,n,r,q,a;
    int i;
    for(i=1;i<=10;i++)
    {
        printf("Set: %d\n",i);
        printf("Enter Principle: ");
        scanf("%f",&p);
        printf("Enter Rate: ");
        scanf("%f",&r);
        printf("Enter Time(in year): ");
        scanf("%f",&n);
        printf("Enter Compound Interest: ");
        scanf("%f",&q);
        a = p*(pow((1+r/q),n*q));
        printf("Amount: %0.2f\n",a);
    }
}