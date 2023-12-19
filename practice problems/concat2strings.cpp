#include<iostream>
#include<string>
using namespace std;
// class mystringtype
// {
//     public:
//     char* value;

// };
// char* operator+ (mystringtype p, mystringtype d)
// {
//     char *temp = new char[200];
//   strcpy(temp,p.value);
// strcat(temp,d.value); 
// return temp; 
// }

int main()
{
   string s1, s2;
   int a=1;
   cout<<a<<endl;
   a=a<<3;
   cout<<a<<endl;

   s1="hello";
   s2= "World";

   cout<<s1+s2;
   return 0;
}
