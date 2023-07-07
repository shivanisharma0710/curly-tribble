#include<stdio.h>
void circular_left_shift(int arr[], int size)
{
    int temp1=arr[0];
    int temp2=arr[1];

    for(int i=2;i<size;i++)
    {
        arr[i-2]=arr[i];
    }
    arr[size-2]=temp1;
    arr[size-1]=temp2;
}
int main()
{
    int p[]={15,30,28,19,61};
    int size= sizeof(p)/sizeof(p[0]);
    circular_left_shift(p,size);

    for(int i=0;i<size;i++)
    {
        printf("%d, ", p[i]);
    }
    printf("\n");
    return 0;
}