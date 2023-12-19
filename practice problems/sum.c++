#include<iostream>
using namespace std;

float sum(float a,float b)
{
    cout<<"running float wala sum"<<endl;
    return a+b;
}

int sum(int a,int b)
{
    cout<<"running int wala sum"<<endl;
    return a+b;
}



int main()
{
    float x= 5.1, y=6.1;
    float result= sum(x,y);
    cout<<result<<endl;

    int p=4, q=5;
    int result2=sum(p,q);
    cout<<result2<<endl;

}