#include<stdio.h>
int main()
{
	float w, h, bmi;
	
	printf("Enter your weight and height: ");
	scanf("%f%f", &w, &h);
	
	bmi = w / (h * h);
	
	if(bmi < 15)
		printf("Starvation");
		
	if(bmi >= 15.1 && bmi <= 17.5)
		printf("Anorexic");
		
	if(bmi >= 17.6 && bmi <= 18.5)
		printf("Underweight");
		
	if(bmi >= 18.6 && bmi <= 24.9)
		printf("Ideal");
		
	if(bmi >= 25 && bmi <= 25.9)
		printf("Overweight");
		
	if(bmi >= 30 && bmi <= 30.9)
		printf("Obese");
		
	if(bmi >= 40)
		printf("Morbidly Obese");
	
	printf("Your BMI category is : ");
}