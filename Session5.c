/* Write a program to input an array (array size and array elements). 
Print the most frequent element in the array of integers. */

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
		scanf("%d",&num[i]);
	}
	int maxCount = 0;
	int position = -1;
	for(int i = 0; i < size; i++)
	{
		int count = 0;
		for(int j = 0; j < size; j++)
		{
			if(num[i]== num[j])
			{
				count++;
			}
		}
		if(count > maxCount)
		{
			maxCount = count;
			position = i;
		}
	}
	printf("The most frequent element is: %d\n",num[position]);
	printf("The most count element: %d\n",maxCount);
}
