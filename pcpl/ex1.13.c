#include<stdio.h>
#define IN 1
#define OUT 0
main()
{
    int c,len;
    int state = OUT;
    len=0;
    printf("enter some text: ");
    while((c= getchar())!= EOF)
    {
       if(c== ' ' || c == '\n' || c=='\t' || c == '.')
       {
        if ( state == IN)
        {
            printf("%d ", len);
            len = 0;
            state = OUT;
        }
       }
       else
       {
       len++;
        state = IN;
       }
    }
    
