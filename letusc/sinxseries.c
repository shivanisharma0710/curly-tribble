#include<stdio.h>
#include<math.h>

float power(float a, float b);
float factorial(int p);

int main()
{
    float x;
    float res=0,d;
    printf("enter the value of x: ");
    scanf("%f", &x);

    for(int i=1;i<=10;i++)
    {
        d=power(x,(2*i-1))/factorial(2*i-1);
        if(i%2==0)
        {
            d=-d;
        }
        
    res=res+d;
    printf("%f\n", res);
    
    }
    return 0;
}
    float power(float a,float b)
    {
        float res1=1;
        for(int i=1;i<=b;i++)
        {
            res1=res1*a;
        }
        return res1;
    }
    float factorial (int p)
    {
        float res2=1;
        for(int i=1;i<=p;i++)
        {
            res2=res2*i;
        }
        return res2;
    }

