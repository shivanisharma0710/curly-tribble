#include<stdio.h>
int print_array(int arr[],int size);
int print_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    printf("%d, ", arr[i]);
}
int main()
{
    int arr[]={64,25,11,22,12};
    int size=5,min,swap;
    print_array(arr,size);
    printf("\n");

    for(int i=0;i<(size-1);i++)
    {
    min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            min=j;
            if(min!=i)
            {
            swap = arr[i];
            arr[i] = arr[min];
            arr[min] = swap;
            }
            print_array(arr,size);
            printf("\n");   
        }
        }
    print_array(arr,size);
    printf("\n");
} 