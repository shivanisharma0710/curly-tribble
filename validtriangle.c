#include<stdio.h>
int main()
{
    float a1,a2,a3;
    printf("enter three angles of triangle:");
    scanf("%f%f%f", &a1,&a2,&a3);
    if((a1+a2+a3==180))
    printf("triangle is valid\n");
    else
    printf("triangle is invalid\n");
}