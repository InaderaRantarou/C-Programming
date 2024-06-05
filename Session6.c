/*Write a program to input an array (array size and array elements). 
Print the number of unique elements in the array of integers (elements that do not repeat). */

#include<stdio.h>
int main ()
{
	int size; 
	printf ("Input size:");
	scanf ("%d", &size);
	
	int num [size];
	for (int i = 0; i<size; i++)
	{
	 	printf ("Input num[%d]:", i);
	 	scanf("%d", &num[i]);
	} 
	int result =0;
	for (int  i =0; i<size; i++)
	{
		int count = 0;
		for (int j=0; j< size; j++)
		{
			if (num[j]== num[i])
			{
				count++;
			}
		}
		if (count ==1)
		{
			printf (" %d", num[i]);
			result++;
		}
	}
	printf ("\n result: %d", result);
}
