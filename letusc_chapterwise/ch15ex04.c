#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int num, fin;
    printf("enter a string of numbers:");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]!='\0'; i++)
    {
       if (str[i] >= '0' && str[i] <= '9')
        {
            num = str[i] - '0';
            fin = fin * 10 + num;
        }
    }
    printf("number: %d",fin);
}