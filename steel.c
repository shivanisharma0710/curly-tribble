#include<stdio.h>
int main()
{
    float hard,carbon,tensile;
    printf("enter hardness of steel:");
    scanf("%f", &hard);
    printf("enter carbon content:");
    scanf("%f", &carbon);
    printf("enter tensile strength:");
    scanf("%f", &tensile);
    if(hard>50 && carbon<0.7 && tensile>5600)
    {
        printf("grade 10\n");
    }
    if(hard>50 && carbon<0.7 && tensile<=5600)
    {
        printf("grade 9\n");
    }
    if(hard<=50 && carbon<0.7 && tensile>5600)
    {
        printf("grade 8\n");
    }
    if(hard>50 && carbon>=0.7 && tensile>5600)
    {
        printf("grade 7\n");
    }
    if(hard>50 || carbon<0.7 || tensile>5600)
    {
        printf("grade 6\n");
    }
    else
    printf("grade 5\n");
}