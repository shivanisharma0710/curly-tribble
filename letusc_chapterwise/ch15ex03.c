#include<stdio.h>
#include<string.h>
int main()
{
    char sen[100];
    int i;
    printf("enter your sentence:\n");
    gets(sen);
    printf("after how many characters you want to extract the line:\n");
    scanf("%d", &i);
    i--;
    if(i<0)
    i=0;
    printf("%s\t", &sen[i]);
}