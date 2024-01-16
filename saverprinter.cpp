#include<iostream>
using namespace std;


class intSaverReturner
{
    public:
    int var;

    void saver(int input)
    {
        var=input;
    }

    int returner( )
    {
        return var;
    }
};

int main()
{
    intSaverReturner obj;
    obj.saver(5);
    cout<<obj.returner();
    return 0;




}