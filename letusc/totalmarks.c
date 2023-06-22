#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float per;
    printf("enter marks in 5 subjects:");
    scanf("%d%d%d%d%d,&m1,&m2,&m3,&m4,&m5");
    total=m1+m2+m3+m4+m5;
    per=total/5;

    printf("total marks=%d\n", total);
    printf("percentage marks=%f\n", per);

}