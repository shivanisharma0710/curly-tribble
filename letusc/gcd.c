#include<stdio.h>
int gcd(int a, int b);
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Greatest Common Divisor of (%d, %d): %d",a,b,gcd(a,b));
}

int gcd(int a, int b)
{
    int t;
    while(b != 0)
    {
    t = b;
    b = a % b;
    a = t;
    }
    return a;
}