#include<stdio.h>
int main()
{
    int i,j,n,p,s, front_spaces;
    p=1;
    printf("how many lines do you want?\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        front_spaces = n-i;
         for(s=1;s<=front_spaces;s++)
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