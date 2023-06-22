#include<stdio.h>

int main()
{
    int totalrows;
    printf("shut up and give me a number between 1 and 26: ");
    scanf("%d", &totalrows);
    int row, s, fh, sh;
    int base = 64;
    //print first line
    for(fh=1; fh<=totalrows; fh++) printf("%c ", base+fh);
    for(sh=totalrows-1; sh>=1; sh--) printf("%c ", base+sh);
    printf("\n");
    // print rest of the rows
    for(row=1; row<=totalrows-1;row++){
        for(fh=1; fh<=totalrows-row; fh++) printf("%c ", base+fh);
        for(s=1; s<=2*row-1; s++) printf("  ");
        for(sh=totalrows-row; sh>=1; sh--) printf("%c ", base+sh);
        printf("\n");
    }
}