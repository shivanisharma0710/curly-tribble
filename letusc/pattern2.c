#include<stdio.h>
int main()
{
    int s,row,fh,sh,nos,totalrows;
    int ch=64;
    printf("how many lines do you want?\n");
    scanf("%d", &totalrows);
    for(row=1;row<=totalrows;row++)
    {
        for(fh=1;fh<=totalrows-row+1;fh++)
        {
            printf("%c ", ch+fh);
        }
        nos=2*(row-1)+1;
        if(row==1)
        {
            printf("%c ",ch+fh);
        }
        else
        {
            for(s=1;s<=nos;s++)
            {
                printf("  ");
            }
        }
        for(fh=totalrows-row+1;fh>=1;fh--)
        {
            printf("%c ", ch+fh);
        }
        printf("\n");
    }
}
