#include<stdio.h>
int main()
{
    int r,g,b,c,y,m,k,w;
    printf("enter the color values of r,g,b:");
    scanf("%d%d%d", &r, &g, &b);
    r/=255;
    g/=255;
    b/=255;
    if(w<r)
    w=r;
    if(w<g)
    w=g;
    if(w<b)
    w=b;
    c=(w-r)/w;
    m=(w-g)/w;
    y=(w-b)/w;
    k=1-w;
    printf("%fC: %fM: %fY: %fK:", c,m,y,k);
}