#include<stdio.h>
#include<math.h> 
void func(int a, int b, int c, int d, int e, float *sum, float *avg, float *std_dev);
int main()
{
    int a,b,c,d,e;
    float sum, avg, std_dev;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    printf("Enter 4th number: ");
    scanf("%d", &d);
    printf("Enter 5th number: ");
    scanf("%d", &e);

    func(a,b,c,d,e,&sum,&avg,&std_dev);
    printf("The Sum: %f\n", sum);
    printf("The Average: %f\n", avg);
    printf("The Standard Deviation: %f", std_dev);
}
void func(int a, int b, int c, int d, int e, float *sum, float *avg, float *std_dev)
{
    *sum = a+b+c+d+e;
    *avg = *sum/5.0;
    *std_dev = sqrt (((a-*avg)*(a-*avg))+((b-*avg)*(b-*avg))+((c-*avg)*(c-*avg))+((d-*avg)*(d-*avg))+((e-*avg)*(e-*avg))/5.0);
}