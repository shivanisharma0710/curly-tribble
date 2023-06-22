#include<stdio.h>
int rec_func(int n);
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    printf("sum of first %d numbers: %d",n,rec_func(n));
}

int rec_func(int n)
{
    while(n)
    {
        return (n+rec_func(n-1));
    }
}