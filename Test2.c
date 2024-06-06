//2.	Write a program to input an array of integers and print the array in reverse order.
#include <stdio.h>
int main()
{ 	
	int size;
	printf("Nhap kich thuoc mang (size of array) la so nguyen > 0: ");
	scanf("%d", &size);
	
	int num[size];
	printf("Size of array : %d", size);
	printf("\n");
	fflush(stdin);
		
	for(int i=0; i<size;i++)
    {
		printf("Nhap num[%d]: ",i);
		scanf("%d",&num[i]);
	}
	for(int i = size-1; i >= 0; i--) 
    {
		printf(" num[%d]: %d\n", i, num[i]);
	}	

}
