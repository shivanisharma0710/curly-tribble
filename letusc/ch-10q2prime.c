#include<stdio.h>
int prime(int n);
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The Prime Factors of %d are: ",n);
    prime(n);
}

int prime(int n)
{
    int x;
    for(x=2;x<=n;x++)
    {
        if(n%x==0)
        {
            printf("%d, ",x);
        }
    }
}