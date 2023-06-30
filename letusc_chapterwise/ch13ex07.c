#include<stdio.h>
int main()
{
    int arr[]={1,2,3,2,1};
    int length=sizeof(arr)/sizeof(arr[0]);
    int ispalindrome=1;

    for(int i=0;i<length/2;i++)
    {
        if (arr[i]= arr[length-1-i]);
    }
    if(ispalindrome)
    {
        printf("the array is palindrome\n");
    }
    else
    {
        printf("the array is not palindrome\n");
    }


}