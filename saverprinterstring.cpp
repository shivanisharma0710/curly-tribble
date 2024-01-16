#include<iostream>
using namespace std;


class intSaverReturner
{
    public:
    char* var;

    void saver(char* input)
    {
        var=input;
    }

    char* returner( )
    {
        return var;
    }
};

int main()
{
    intSaverReturner obj;
    obj.saver("shivaninavdeep");
    cout<<obj.returner();
    return 0;




}