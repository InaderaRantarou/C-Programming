#include <iostream>

using namespace std;

// Function to count elements greater than a given value
int countElementsGreaterThan(int arr[], int size, int value) 
{
    int count = 0;

    // Traverse the array and count elements greater than the given value
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
    int size, value;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // Input the elements of the array
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
    }

    // Input the value
    cout << "Enter the value to compare: ";
    cin >> value;

    // Find and print the number of elements greater than the given value
    int count = countElementsGreaterThan(arr, size, value);
    cout << "Number of elements greater than " << value << ": " << count << endl;

    return 0;
}
