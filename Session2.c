/* Write a program to input an array of integers and print the array in reverse order.*/
#include <stdio.h>
int main()
{
	int size;
	printf("Input size: ");
	scanf("%d", &size);

	int num[size];
	for(int i = 0; i < size; i++)
	{
		printf("Input num[%d]: ",i);
		scanf("%d",num[i]);
	}
	for(int i = size - 1; i >= 0; i--)
	{
		printf("num[%d]: %d\n",i,num[i]);
	}
}
