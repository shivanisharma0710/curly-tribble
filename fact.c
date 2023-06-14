#include<stdio.h>
int fact(int num);
int main()
{
    int n, fac;
    printf("Enter an integer: ");
    scanf("%d", &n);
    fac = fact(n); 
    printf("The factorial of %d is %d", n, fac);
}
int fact(int num)   
{
    int res;
    res = num;
    while(num>1)
    {
        res = res*(num-1);
        num = num-1;
    }
    return res;
    
}
