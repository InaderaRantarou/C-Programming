#include <iostream>
#include <unordered_set>

using namespace std;

// Function to count the number of unique elements in the array
int countUniqueElements(int arr[], int size) 
{
    unordered_set<int> uniqueElements;

    // Insert elements of the array into the unordered_set
    for (int i = 0; i < size; ++i) 
    {
        uniqueElements.insert(arr[i]);
    }

    // Return the size of the unordered_set, which contains only unique elements
    return uniqueElements.size();
}

int main() 
{
    int size;

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

    // Count the number of unique elements
    int uniqueCount = countUniqueElements(arr, size);

    // Print the number of unique elements
    cout << "Number of unique elements: " << uniqueCount << endl;

    return 0;
}
