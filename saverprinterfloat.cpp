#include<iostream>
using namespace std;


class intSaverReturner
{
    public:
    float var;

    void saver(float input)
    {
        var=input;
    }

    float returner( )
    {
        return var;
    }
};

int main()
{
    intSaverReturner obj;
    obj.saver(27.8);
    cout<<obj.returner();
    return 0;




}