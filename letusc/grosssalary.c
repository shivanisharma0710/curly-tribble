#include<stdio.h>
int main()
{
    float bs, hra, da, gs;
    printf("enter basic salary of ramesh:");
    scanf("%f", &bs);

    da = 0.4*bs;
    hra = 0.2*bs;
    gs = bs+ da+ hra;  

    // printf("basic salary of ramesh= %f\n" ,bs);
    // printf("house rent allowance= %f\n" ,hra);
    // printf("dearness allowance= %f\n" ,da);
    printf("gross salary of ramesh= %f\n ,gs"); 

}