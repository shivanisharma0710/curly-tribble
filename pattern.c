#include<stdio.h>
int main()
{
    int i,j,n,p,s;
    p=1;
    printf("how many lines do you want?\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
         for(s=1;s<=n-i;s++)
         {
            printf(" ");
         }
         for(j=1;j<=i;j++)
        {
            printf("%d ",p++);
        }
        printf("\n");
}
}