#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
    vector<double> convertTemperature(double celsius) 
    {
    
              double kel =  celsius + 273.15;
                double fah = celsius * 1.80 + 32.00;
                return {kel, fah};
    
    }
};

int main()
{
Solution obj;
vector<double> v;
v = obj.convertTemperature(52);
cout<<v[0] <<endl<<v[1];

}