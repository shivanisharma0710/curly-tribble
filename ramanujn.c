#include<stdio.h>
int main()
{
    int i,n,x,y,count;
    n=30000;
    for(i=1;i<=n;i++)
    {
        count=0;
        for(x=1;x*x*x<i;x++)
        {
            for(y=x;x*x*x+y*y*y<=i;y++)
            {
                if(x*x*x+y*y*y==i)
                {
                  count++;

                }
            }
        }
        if(count==2)
        {
            printf("%d\n",i);
        }
    }
}