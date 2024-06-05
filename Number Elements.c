#include <stdio.h>

int main() 
{
    int size, threshold, count = 0;
    
    printf("Enter the size: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements: ");
    for(int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the threshold value: ");
    scanf("%d", &threshold);
    
    for(int i = 0; i < size; i++) 
	{
        if(arr[i] > threshold) 
		{
            count++;
        }
    }
    
    printf("Number of elements greater than %d: %d\n", threshold, count);
    
    return 0;
}
#include <stdio.h>

// Function to count elements greater than a given value
int countElementsGreaterThan(int arr[], int n, int value) {
    int count = 0;

    // Traverse the array and count elements greater than the given value
    for (int i = 0; i < n; i++) {
        if (arr[i] > value) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, value;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the value
    printf("Enter the value to compare: ");
    scanf("%d", &value);

    // Find and print the number of elements greater than the given value
    int count = countElementsGreaterThan(arr, n, value);
    printf("Number of elements greater than %d: %d\n", value, count);

    return 0;
}
