#include <stdio.h>
int main()
{
int decimal, remainder, octal = 0, place = 1;
printf("Enter a decimal number: ");
scanf("%d", &decimal);

while (decimal != 0)
{
remainder = decimal % 8;  
octal += remainder * place;  
decimal /= 8;  
place *= 10;  
}
printf("Octal equivalent: %d\n", octal);
}