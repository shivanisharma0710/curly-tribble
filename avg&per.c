#include<stdio.h>
void func(int a, int b, int c, float *avg, float *per);
int main()
{
    int a, b, c;
    float avg, per;
    printf("Enter the marks of subject 1: ");
    scanf("%d", &a);
    printf("Enter the marks of subject 2: ");
    scanf("%d", &b);
    printf("Enter the marks of subject 3: ");
    scanf("%d", &c);

    func(a, b, c, &avg, &per);
    printf("\n The Average: %.2f", avg);
    printf("\n The Percentage: %.2f%%", per);
}

void func(int a, int b, int c, float *avg, float *per)
{
    *avg = (a+b+c)/3.0;
    *per = ((a+b+c)/300.0)*100;
}
