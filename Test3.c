/* Write a program to input 2 integers (the first number is smaller than the second number). Count the number of even and odd elements in the range from the first number to the second number.*/	
#include <stdio.h>
int main()
{
     // (3) nhap 2 so,  num1 < num2
     //  tinh so luong so chan va so so le giua 2 so num1, num2
	
     int num1, num2; 
     printf("Input an interger num1: ");
     scanf("%d", &num1);
     while(true)
     {
	printf("\nInput num2, with num1 < num2 : ");
     	scanf("%d", &num2);
		if(num1<num2)
          {
	     	break;
          }
     }
	int count_even=0;
	int count_odd=0;
	for(int i=num1; i<=num2; i++)
	{
	     if(i%2==0) 
	     {
	          count_even++; 
	     }
	     else 
	     {
	          count_odd++;
	     }
	}
     printf("\nRange of number: %d to %d \n", num1, num2);
     printf(" \nNumber of even number = %d", count_even);
     printf(" \nNumber of odd number = %d", count_odd);
}


