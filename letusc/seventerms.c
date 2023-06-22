#include<stdio.h>
#include<math.h> 
int main()
{
    int i;
    float x,d,p,r,result=0;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    d=(x-1)/x;
    for(i=2;i<=7;i++)
    {
        p = pow(d,i);
        r = p/2;
        result = result + r;
    }
    result = d + result;
    printf("Result: %f",result);
}