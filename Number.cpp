// Write a program to input 2 integers (the first number is smaller than the second number). Print the numbers from the first number to the second number, but replace numbers divisible by 3 with 'F', divisible by 5 with 'Z', and divisible by both 3 and 5 with 'A'.
#include <iostream>
#include <stdio.h>
using namespace std;

void fizzBuzzReplacement(int start, int end) 
{
    for (int num = start; num <= end; ++num) 
    {
        if (num % 3 == 0 && num % 5 == 0) 
	{
            cout << "A ";
        } 
	else if (num % 3 == 0) 
	{
            cout << "F ";
        } 
	else if (num % 5 == 0) 
	{
            cout << "Z ";
        } 
	else 
	{
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() 
{
    int start, end;
    cout << "Enter the first number (smaller number): ";
    cin >> start;
    cout << "Enter the second number (larger number): ";
    cin >> end;
    
    if (start >= end) 
    {
        cout << "The first number should be smaller than the second number." << endl;
    } 
    else 
    {
        fizzBuzzReplacement(start, end);
    }
    return 0;
}
