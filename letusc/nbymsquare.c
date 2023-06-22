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

    int n = get_int("how many rows you want?");
    printf( "%d ", n);
    int m = get_int("how many columns you want?");
    printf("%d", m);
for(int i=1; i<=n; i++)
{
    printf("\n");
    for(int j=1; j<=m; j++)
    printf("*");
}
}