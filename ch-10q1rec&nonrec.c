#include<stdio.h>
int rec_func(int n);
int nonrec_func(int n);
int main()
{
    int n, rec, nonrec;
    printf("enter any number:");
    scanf("%d", &n);

    rec= int rec_func(int n);
    nonrec= int nonrec_func(int n);

    printf("calculate sum using recursion: %d",rec);
    printf("calculate sum using nonrecursion: %d", nonrec);

int rec_func(int n)
{
    if (n==0)
    {
        return 0;
    }

    return (n%10+rec_func(n/10));
}

int nonrec_func(int n)
{
    int res, count=0;
    while(num!=0)
    {
        res=num%10;
        count=count+res;
        num = num/10;
    }
    return count;
}

}
