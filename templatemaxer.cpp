#include<iostream>
using namespace std;

template <class T>
T maxint(T a, T b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    cout<< maxint("SHIVANI","NAVDEEP");
    return 0;

}