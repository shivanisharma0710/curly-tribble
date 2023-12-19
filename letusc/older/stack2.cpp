#include<iostream>
using namespace std;
class simplestack{
    public:
    int storage[100];
    int topindex= -1;
    void push(int x)
    {
      topindex = topindex+1;
      storage[topindex] = x;

    }
    int pop()
    {
      int a = storage[topindex];
      storage[topindex]= 0;
      topindex = topindex -1;
      return a;
    }

};
int main()
{
    simplestack a;
    a = simplestack();
    // a.storage[0] = 5;
    // cout<<a.storage[0];
    // return 25;
    a.push(34);
    a.push(78);
    a.push(76);
    cout<< a.pop();
    cout<<a.pop();
    cout<<a.pop();

}