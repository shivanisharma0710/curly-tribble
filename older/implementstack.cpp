#include<iostream>
#include<stack>
using namespace std;
std::stack;


void push(int data, int n)
{
    if (top==n)
    {
    cout<< "overflow";
    }
    else{
        top=top+1;
        stack{top}=data;
    }
}
int pop()
{
    if(top==-1)
    {cout<<"underflow";
    }
    else{
        return stack[top];
    }
}