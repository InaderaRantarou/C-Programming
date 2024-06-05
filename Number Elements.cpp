#include <iostream>
using namespace std;

int countGreaterThan(int arr[], int size, int value) 
{
    int count = 0;
    for (int i = 0; i < size; ++i) 
    {
        if (arr[i] > value) 
        {
            count++;
        }
    }
    return count;
}

int main() 
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size]; // Dynamic allocation of the array

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
    }

    int value;
    cout << "Enter the value to compare: ";
    cin >> value;

    int result = countGreaterThan(arr, size, value);

    cout << "Number of elements greater than " << value << " is: " << result << endl;

    delete[] arr; // Free dynamically allocated memory

    return 0;
}
