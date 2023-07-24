#include<stdio.h>
#include<conio.h>
int main()
{
	char num[20];
	int i, sum = 0;
	printf("\nEnter the 16 digit credit card number : ");
	scanf("%s", num);
	for (i = 0; i <= 15; i++)
	{
		num[i] -= 48;
		if ((i % 2))
			sum = sum + num[i];
		else
		{
			num[i] *= 2;
			if (num[i] >= 10)
				num[i] -= 9;
			sum = sum + num[i];	
		}
	}
	if ((sum % 10))
		printf("\nNumber is valid.");
	else
		printf("\nNumber is not valid.");
}