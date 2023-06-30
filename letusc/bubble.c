#include<stdio.h>
#include<unistd.h>
int print_array(int arr[],int size);
int print_array(int arr[], int size)
{
    for(int i=0;i<size;i++)
    printf("%d, ", arr[i]);
}
int main()
{

    int arr[]={10,9,8,7,6,5,4,3,2,1,0};
    int size=11,swap;
    print_array(arr,size);
    printf("\n");

    for(int outer=0;outer<size;outer++)
    {
        for(int i=0;i<size-1-outer;i++)
        {
            if(arr[i]>arr[i+1])
            {

                swap=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=swap;
                sleep(1);
            }
            print_array(arr,size);
            printf("\n");
        }
        printf("\n");
        
    }
    print_array(arr,size);
    printf("\n");
}
