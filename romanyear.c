#include<stdio.h>
void roman(int year);
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    roman(year);
}
void roman(int year)
{
    if(year>=1000)
    {
        printf("m");
        roman(year-1000);
    }
    else if(year>=500)
    {
        printf("d");
        roman(year-500);
    }
    else if(year>=100)
    {
        printf("c");
        roman(year-100);
    }
    else if(year>=50)
    {
        printf("l");
        roman(year-50);
    }
    else if(year>=10)
    {
        printf("x");
        roman(year-10);
    }
    else if(year>=5)
    {
        printf("v");
        roman(year-5);
    }
    else if(year>=1)
    {
        printf("i");
        roman(year-1);
    }
}