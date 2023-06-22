#include<stdio.h>
int prime(int n);
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    prime(num);
}
int prime(int n)
{
    int a;
    for(a=2;a<=n;a++)
    {
        if(n%a==0)
        {
            printf("%d",a);
        }
    }
}