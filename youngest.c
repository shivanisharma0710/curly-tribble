#include<stdio.h>
int main()
{
    int r,s,a,young;
    printf("enter the age of ram,shyam and ajay:");
    scanf("%d%d%d", &r,&s,&a);
    if(r<s)
    {
        if(r<a)
        young=r;
        else 
        young=a;
    }
    else
    {
        if(s<a)
        young=s;
        else
        young=a;
    }
     printf("the youngest of ram(%d),shyam(%d) and ajay(%d) is %d\n",r,s,a,young);
     
}