#include<stdio.h>
int main()
{
int i=1,hr, bonus;
while(i<=10); 
{
printf("\nEnter the working hour of the employ : ");
scanf("%d", &hr);		
if(hr>40)
{
bonus = (hr - 40)*12;
printf("%d Rs. is the bonus of the employ\n", bonus);
}
else
printf("This employ has not done overtime\n");
}
}
	