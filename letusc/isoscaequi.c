#include<stdio.h>
int main()
{
    int s1,s2,s3,a,b,c;
    printf("enter three sides of triangle:");
    scanf("%d%d%d", &s1,&s2,&s3);
    if(s1!=s2 && s2!=s3 && s3!=s1)
    printf("scalene triangle\n");
    if((s1==s2)&&(s2!=s3))
    printf("isosceles triangle\n");
    if((s2==s3)&&(s3!=s1))
    printf("isosceles triangle\n");
    if((s1==s3)&&(s3!=s2))
    printf("isosceles triangle\n");
    a=(s1*s1)==(s2*s2)+(s3*s3);
    b=(s2*s2)==(s1*s1)+(s3*s3);
    c=(s3*s3)==(s1*s1)+(s2*s2);
    if(a||b||c)
    printf("right angled triangle\n")
}