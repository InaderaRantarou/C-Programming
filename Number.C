#include <stdio.h>
int main() 
{
    int start, end;
    
    printf("Enter number 1st: ");
    scanf("%d", &start);
    
    printf("Enter number 2nd: ");
    scanf("%d", &end);
    if (start >= end) 
	{
        printf("number 1st smaller than 2nd number.\n");
        return 1;
    }
    for (int i = start; i <= end; ++i) 
	{
        if (i % 3 == 0 && i % 5 == 0) 
		{
            printf("A ");
        } 
		else if (i % 3 == 0) 
		{
            printf("F ");
        } 
		else if (i % 5 == 0) 
		{
            printf("Z ");
        } 
		else 
		{
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
