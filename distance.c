#include<stdio.h>
int main()
{
    float km,m,ft,inch,cm;
    printf("enter distance in kilometers:");
    scanf("%f", &km);

    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;

    printf("distance in meters=%f\n, m");
    printf("distance in centimeters=%f\n , cm");
    printf("distance in inches=%f\n", inch);
    printf("distance in feet=%f\n",ft );



}