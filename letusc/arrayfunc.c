//implementa function to print an array to the screen
//call this function print array that accepts two arguements (first:int array called arr, second: int called size)

// int A[]={1,5,7,9};
// print_array(A, 4)
// 1  5  7  9
#include<stdio.h>
int print_array(int arr[],int size);
int print_array(int arr[], int size)
{
    for(int i=0;i<size;i++)
    printf("%d, ", arr[i]);
}

int main()
{
    int prr[]={1,5,7,9,11,23,34,56,57}; 
    int prrsize=9;
    print_array( prr, prrsize);
}