#include<stdio.h>
#include<math.h>
int main()
{
	float x[10], y[10], dis = 0;
	printf("Enter the coordinates of 10 points :");
	
	for (int i = 0; i<10; i++)
		scanf("%f%f", &x[i], &y[i]);

	for (int i = 0; i<10; i++)
		dis = dis + sqrt(pow((x[i + 1] - x[i]), 2) + pow((y[i + 1] - y[i]), 2));

	printf("The total distance between first and last point is %f", dis);

}