#include<stdio.h>
int main()
{
    int i=1, n;
    printf("Enter number: ");
    scanf("%d", &n);
    while(i!=11)
    {
        printf("%d x %d = %d\n",n,i, n*i);
        i++;
    }
}