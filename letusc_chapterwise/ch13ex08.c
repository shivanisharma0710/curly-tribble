#include<stdio.h>
int main()
{
    int arr[25],i;
    int min=arr[0];
    int *ptr;

    for(i=0;i<25;i++)
    {
        printf("enter the element:",i+1);
        scanf("%d", (ptr+i));
    }
    ptr=arr;
    for(i=0;i<25;i++)
    {
    if(*(ptr+i)<min)
    min=*(ptr+i);
    }
    printf("min:%d" ,min);
}