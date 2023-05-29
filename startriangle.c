#include<stdio.h>

int get_int(char const * msg)
{
    printf("%s", msg);
    int var1;
    scanf("%d", &var1);
    return var1;
}

int main(void)
{

    int n = get_int("how many lines you want?");
    printf( "%d ", n);
    for(int i=n; i>=1; i--)
    {
        printf("\n");
    for(int j=1;j<=i;j++)
    
        printf("*");
    }
}