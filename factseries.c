#include<stdio.h>
int main()
{
    int i;
    float fact=1.0, result, nresult=0;
    for (i=1;i<8;i++)
    {
        fact = fact * i;

        result = i/fact;

        nresult = nresult + result;
    }
}