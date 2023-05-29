#include<stdio.h>
int main()
{
    float far,cel;
    printf("enter the temperature in F:");
    scanf("%f", &far);

    cel=5.0/9.0*(far-32);
    printf("temperature in cel=%f\n", cel);
}