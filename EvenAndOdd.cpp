#include <iostream>
using namespace std;

void countEvenAndOdd(int start, int end, int &evenCount, int &oddCount) 
{
    evenCount = 0;
    oddCount = 0;
    for (int num = start; num <= end; ++num) 
    {
        if (num % 2 == 0) 
        {
            evenCount++;
        }     
        else 
        {
            oddCount++;
        }
    }
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
        int evenCount, oddCount;
        countEvenAndOdd(start, end, evenCount, oddCount);
        cout << "Number of even elements: " << evenCount << endl;
        cout << "Number of odd elements: " << oddCount << endl;
    }
    return 0;
}
