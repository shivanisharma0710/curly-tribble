#include<iostream>
using namespace std;

template<class placeholder>
class intSaverReturner
{
    public:
    placeholder var;

    void saver(placeholder input)
    {
        var=input;
    }

    placeholder returner( )
    {
        return var;
    }
};

int main()
{
    intSaverReturner<char*> obj;
    obj.saver("shivani");
    cout<<obj.returner();
    return 0;




}