#include <stdio.h>

void count_even_odd(int first, int second) 
{
    int even_count = 0;
    int odd_count = 0;
    for (int num = first; num <= second; num++) 
    {
        if (num % 2 == 0) 
        {
            even_count++;
        } else 
        {
            odd_count++;
        }
    }

    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);
}

int main() 
{
    int first_num, second_num;

    // Input the two integers
    printf("Enter the first number: ");
    scanf("%d", &first_num);
    printf("Enter the second number: ");
    scanf("%d", &second_num);

    // Check if the first number is smaller than the second number
    if (first_num < second_num) 
    {
        count_even_odd(first_num, second_num);
    } 
    else 
    {
        printf("Error: The first number should be smaller than the second number.\n");
    }
    return 0;
}
