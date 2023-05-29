#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    int s1,s2,s3;
    printf("enter values of x1 and y1:");
    scanf("%d%d", &x1,&y1);
    printf("enter values of x2 and y2:");
    scanf("%d%d", &x2,&y2);
    printf("enter values of x3 and y3:");
    scanf("%d%d", &x3,&y3);
    s1=abs(x2-x1)/abs(y2-y1);
    s2=abs(x3-x1)/abs(y3-y1);
    s3=abs(x3-x2)/abs(y3-y2);

    if((s1==s2)&&(s1==s3))
    printf("points are collinear\n");
    else
    printf("points are not collinear\n");
}