/* Write a program to input 2 integers (the first number is smaller than the second number). 
  Print the numbers from the first number to the second number, but replace numbers divisible by 3 with 'F', divisible by 5 with 'Z', and divisible by both 3 and 5 with 'A'. */
#include <stdio.h>
int main()
{
	int num1,num2;
	printf("Input num1: ");
	scanf("%d",&num1);
	printf("Input num2: ");
	scanf("%d",&num2);

	for(int i = num1; i<=num2; i++)
	{
		if(i%3 == 0 && i%5 ==0)
		{
			printf("A ");	
		}
		else if(i%3 == 0)
		{
			printf("F ");	
		}
		else if(i%5 == 0) 
		{
			printf("Z ");	
		}
		else
		{
			printf("%d ",i);
		}
	}
}
