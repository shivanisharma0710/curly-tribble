#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    float c;
    for(a=1;a<=30;a++)
    {
        for(b=1;b<=30;b++)
        {
            c = sqrt(a*a+b*b);
            if(c == (int)c)
            {
                printf("(%d, %d, %d)\n",a,b,(int)c);
            }
        }
    }
}

    
