/*Write a program to input 2 integers (the first number is smaller than the second number). 
Count the number of even and odd elements in the range from the first number to the second number.*/
#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Input num1: ");
	scanf("%d",&num1);
	printf("Input num2: ");
	scanf("%d",&num2);
	
	int count_even = 0;
	int count_odd = 0;

	for(int i = num1; i <=num2; i++)
	{
		if(i%2 == 0)
		{
			count_even++; //count_event = count_even + 1
		}
		else
		{
			count_odd++;
		}
	}
	printf("Even: %d, odd: %d",count_even,count_odd);
}
