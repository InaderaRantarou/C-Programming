/*1.	Write a program to input 2 integers (the first number is smaller than the second number). 
Print the numbers from the first number to the second number, but replace numbers divisible by 3 with 'F', 
divisible by 5 with 'Z', and divisible by both 3 and 5 with 'A'.
*/
#include <stdio.h>
int main()
{
	//1.	Write a program to input 2 integers (the first number is smaller than the second number). 
	// Print the numbers from the first number to the second number, 
	// but replace numbers divisible by 3 with 'F', divisible by 5 with 'Z', and divisible by both 3 and 5 with 'A'.
	int n1, n2;
	fflush(stdin);
	printf("\nInput an integer num1 : ");
	scanf("%d", &n1);
	
	while(true)
    {
	printf("\nInput an integer num2 with num2 > num1  : ");
	scanf("%d", &n2);
    	if(n1<n2)
    	{
            break;
    	}
	}
	for(int i=n1; i<=n2;i++)
    {
		if(i%3==0 && i%5==0){printf(" A ");	}
		else if(i%3==0){printf(" F ");}
		else if(i%5==0){printf(" Z ");}
		else
        {
            printf(" %d ",i);
	    }
	}
}
