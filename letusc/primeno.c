#include <stdio.h>
int main() 
{
printf("Prime numbers from 1 to 300:\n");
for (int n = 2; n<= 300; n++) 
{
int isPrime = 1;
for (int i = 2; i < n; i++) 
{
if (n % i == 0) 
{
isPrime = 0;
break;
}
}
if (isPrime)
printf("%d ", n);
}
printf("\n");    
}






