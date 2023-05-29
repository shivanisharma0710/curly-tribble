#include<stdio.h>
int main()
{
    int x,y,r;
    int dis,d;
    printf("enter radius of circle and coordinates of point(x,y):");
    scanf("%d%d%d", &x,&y,&r);
    dis=x*x+y*y;
    d=r*r;
    if(dis==d)
    printf("point is on circle\n");
    else
    {
        if(dis>d)
        printf("point is outside circle\n");
        else
        printf("point is inside circle\n");
        
    }
}