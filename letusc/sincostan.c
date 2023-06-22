#include<stdio.h>
#include<math.h>
int main()
{
    float angle,s,c,t;
    printf("enter an angle:");
    scanf("%f",&angle);
    angle=angle*3.14/180;
    s=sin(angle);
    c=cos(angle);
    t=tan(angle);
    printf("sin=%fcos=%ftan=%f\n",s,c,t);
}