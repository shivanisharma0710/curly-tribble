#include<stdio.h>
int main()
{
    int num;
    long int a,revnum;
    printf("enter the 5 digit number:");
    scanf("%d", &num);
    a=num%10;
    num=num/10;
    revnum=revnum+a*10000;

    a=num%10;
    num=num/10;
    revnum=revnum+a*1000;

    a=num%10;
    num=num/10;
    revnum=revnum+a*100;

    a=num%10;
    num=num/10;
    revnum=revnum+a*10;

    a=num%10;
    num=num/10;
    revnum=revnum+a*1;

    printf("the number after reversal is:%d\n", revnum);


}