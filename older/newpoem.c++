#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int buttonpress;
    char arr[][100]={"twinkle twinkle little star",
    "how i wonder what you are",
    "up above the world so high",
    "like a diamond in the sky"};
    for(int i=0;i<4;i++)
    {
    
    buttonpress=getch();
    if(buttonpress=='q')
    {
        return(0);
    }
    else if(buttonpress=='p')
    {
        i=i-2;

    }
    else if(buttonpress=='n')
    {
    
    }
    else
    {
        cout<<"press one of q,n,p: ";
        continue;
    }
     cout<<arr[i]<<"\n";
    }
    // cout<<"twinkle twinkle little star\n";
    // Sleep(1000);
    // cout<<"how i wonder what you are\n";
    // Sleep(1000);
    // cout<<"up above the world so high\n";
    // Sleep(1000);
    // cout<<"like a diamond in the sky\n";


}