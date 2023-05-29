#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,theta;
    printf("enter the x and y coordinate:");
    scanf("%f%f", &x,&y);
    r=sqrt(x*x+y*y);
    theta=atan2(y,x);
    theta=theta*180/3.14;
    printf("r=%ftheta=%f\n",r,theta);
}