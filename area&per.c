#include<stdio.h>
int main()
{
    int l,b,r,area1,per;
    float area2, circum;
    printf("enter the length & breadth of rectangle:");
    scanf("%d%d",&l,&b);
    area1= l*b;
    per=2*l+2*b;
    printf("area of rectangle=%d/n",area1);
    printf("perimeter of rectangle=%d\n",per);

    printf("enter the radius of circlr:");
    scanf("%d",&r);
    area2=3.14*r*r;
    circum=2*3.14*r;
    printf("area of circle=%f\n",area2);
    printf("circumference of circle=%f\n",circum);
}