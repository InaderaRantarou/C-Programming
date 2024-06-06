// Write a program to find the number of elements greater than a given value in an array of integers.  
#include <stdio.h>

int main()
{ 	
	int size, numberA, num[size];

	printf("Nhap kich thuoc mang (size of array) la so nguyen > 0: ");
	fflush(stdin);
	scanf("%d", &size);
	
	printf("Size of array : %d", size);
	printf("\n");
	fflush(stdin);
	for(int i=0; i<size;i++)
  {
		printf("Nhap num[%d]: ",i);
		scanf("%d",&num[i]);
	}
	//Nhap so can so sanh
			printf("Nhap so can so sanh la so nguyen, number A = ");
			scanf("%d", &numberA);

	//Dem so phan tu trong mang > numberA
	int count=0;
	for(int i=0; i<size; i++)
  {
			if(num[i]>numberA)
      {
          count++;
		  }
	}
  printf("So phan tu trong mang > number A = %d phan tu", count);
}
