#include<stdio.h>
int main()
{
    float cp,sp,pro,los;
    printf("enter cost price and selling price:");
    scanf("%f%f",&cp,&sp);
    pro=sp-cp;
    los=cp-sp;
    if(pro>0)
    printf("seller made profit of rs.%f\n",pro);
    if(los>0)
    printf("seller is in loss by rs.%f\n",los);
    if(pro==0)
    printf("there is neither loss nor profit\n");
}