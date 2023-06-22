#include<stdio.h>
int main()
{
    int i,num,max,min,how,range;
    printf("enter how many number you want to enter:");
    scanf("%d", &how);
    max=min=num;
    for(i=1;i<how;i++)
    {
        printf("enter the number:");
        scanf("%d",&num);
        if(num>max)
        max=num;
        if(num<min)
        min=num;
    }
    range=max-min;
    printf("\n %d is the range of the data",range);
}