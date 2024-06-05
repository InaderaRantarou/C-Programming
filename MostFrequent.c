#include <stdio.h>

#define MAX_SIZE 100

// Function to find the most frequent element in the array
int findMostFrequent(int arr[], int size) 
{
    int maxCount = 0;
    int maxElement = arr[0];

    for (int i = 0; i < size; i++) 
    {
        int count = 1;

        // Count occurrences of current element
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] == arr[j])
                count++;
        }
        // Update maxCount if current element has more occurrences
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() 
{
    int size;
    int arr[MAX_SIZE];

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Find the most frequent element
    int mostFrequent = findMostFrequent(arr, size);

    // Print the most frequent element
    printf("Most frequent element: %d\n", mostFrequent);

    return 0;
}
