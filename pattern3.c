#include<stdio.h>
int main()
{
    int i,j=1, k, num, p, s;
    int numoflines=5;
    for(i=1;i<=numoflines;i++)
    {
        for(int s=1; s<=numoflines-i; s++)
        {
            printf(" ");
        }
        num=j;
        for (k=1;k<=i;k++)
        {
            p=num%10;
            printf("%d ", p);
            num=num/10;
        }
        j=j*11;
        printf("\n");
    }
    
}