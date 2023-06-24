#include<stdio.h>
int main()
{
    int arr[25],i,pos=0,neg=0,zero=0,odd=0,even=0;
    for(i=0;i<25;i++)
    {
        printf("enter the number:");
        scanf("%d", &arr[i]);
    }
    for(i=0;i<25;i++)
    {
        if(arr[i]>0)
        pos++;
        if(arr[i]<0)
        neg++;
        if(arr[i]==0)
        zero++;

        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
        printf("\n data contains %d positive,%d negative,%d zeroes, %d even, %d odd numbers",pos,neg,zero,even,odd);
}
