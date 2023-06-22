#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the x and y coordinates of a point:");
    scanf("%d%d", &x,&y);
    if(x==0 && y==0)
    printf("point lies on origin\n");
    else 
    if(x==0 && y!=0)
    printf("point lies on y-axis\n");
    else
    if(x!=0 && y==0)
    printf("point lies on x-axis\n");
    else
    printf("point lies neither on any axis or origin\n");

}