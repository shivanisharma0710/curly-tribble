#include<stdio.h>
void modify(int *ele)
{
	int i;
	for (i = 0; i<10; i++, ele++)
		*ele *= 3;
}
int main()
{
	int arr[] = { 10,20,30,40,50,60,70,80,90,100 }, i;
	modify(arr);
	for (i = 0; i<10; i++)
		printf("%d ", arr[i]);
}