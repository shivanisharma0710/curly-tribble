#include<iostream>
using namespace std;

class base
{
    protected:
    int p=0, q=1;
    public:
    int a=1,b=2;
    int sum(int x,int y)
    {
        cout<<"ye base ka sum h"<<a<<b<<" "<<p<<q<<endl;
        return x+y;
    }
};

class child: public base
{
    protected:

    private:

    public:
    int sum(int x,int y)
    {
        cout<<"ye child ka sum h"<<a<<b<<" "<<p<<q<<endl;
        return x+y;
    }

};
int main()
{
    child c=child();
    cout<<c.sum(1,2)<<endl<<endl;

    base b2 = c;
    cout<<b2.sum(1,2)<<endl<<endl;
    return 0;
}