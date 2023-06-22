#include<stdio.h>
int rec_func(int num);
int nonrec_func(int num);

int main()
{
    int num;
    printf("enter any number:");
    scanf("%d", &num );
    printf("Decimal To Binary Using Recursion: %d", rec_func(num));
    printf("Decimal To Binary Without Using Recursion: %d", nonrec_func(num));
}

int rec_func(int num)
{
    if(num==0)
   {
       return 0;
   }
    else
   {
       return((num%2)+10*rec_func(num/2));
   }
}


int nonrec_func(int num)
{
    int x, res=0, pos=1;
    while (num!=0)
    {
        x = num%2;
        res = res + (x*pos);
        pos = 10*pos;
        num = num/2;
    }
    return res;

}