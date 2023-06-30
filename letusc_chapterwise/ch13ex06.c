#include<stdio.h>
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[length];

    for (int i = 0; i < length; i++) 
    {
        arr2[i] = arr1[length - 1 - i];
    }

    printf("Source Array: ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", arr1[i]);
    }

    printf("\nDestination Array (Reverse Order): ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", arr2[i]);
    }

}