#include <iostream>
using namespace std;

void printArrayInReverse(int arr[], int size) 
{
    for (int i = size - 1; i >= 0; --i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size]; // Dynamic allocation of array

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
    }

    cout << "Array in reverse order: ";
    printArrayInReverse(arr, size);

    delete[] arr; // Free dynamically allocated memory

    return 0;
}
