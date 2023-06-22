#include<stdio.h>
int main() 
{
int base, power, ans = 1;
printf("Enter two numbers: ");
scanf("%d%d", &base, &power);
while (power > 0)
{
ans *= base;
 --power;
}
printf("Answer = %d\n", ans);
}