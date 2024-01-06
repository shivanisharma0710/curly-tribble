#include<iostream>
using namespace std;

int main()
{
    int arr[5]={0,0,0,0,0},i,num;
    cout<<"enter location in array ";
    cin>>i;
    cout<<"enter number to store ";
    cin>>num;
try {
    if(i>4)
    {
        throw i;
    }
    arr[i]=num;
    
    for(int j=0;j<5;j++)
    cout<< endl<< arr[j] ;
}

catch(int x){
    cout<<"some errr";
}

    return 0;
    
    
}