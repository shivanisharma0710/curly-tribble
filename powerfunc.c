#include<stdio.h>
#include<math.h>
int power(int a, int b);
int main()
{
    int a, b, res;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    res = power(a, b);

    printf("Result: %d", res);
}

int power(int a, int b)
{
    int x;
    x = pow(a, b);
}