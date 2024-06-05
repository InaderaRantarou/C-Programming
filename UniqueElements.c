#include <stdio.h>

// Function to check if an element is unique in the array
int isUnique(int arr[], int size, int index) 
{
    for (int i = 0; i < size; i++) 
    {
        if (i != index && arr[i] == arr[index]) 
        {
            return 0; // Not unique
        }
    }
    return 1; // Unique
}

// Function to count the number of unique elements in the array
int countUniqueElements(int arr[], int size) 
{
    int count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (isUnique(arr, size, i)) 
        {
            count++;
        }
    }
    return count;
}
int main() 
{
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Count the number of unique elements
    int uniqueCount = countUniqueElements(arr, size);

    // Print the number of unique elements
    printf("Number of unique elements: %d\n", uniqueCount);

    return 0;
}
