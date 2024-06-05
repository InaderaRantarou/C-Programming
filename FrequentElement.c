#include <stdio.h>

void findMostFrequentElement(int arr[], int size) 
{
    int maxCount = 0;
    int mostFrequent = arr[0];
    for (int i = 0; i < size; ++i) 
	  {
        int count = 0;
        for (int j = 0; j < size; ++j) 
  		  {
            if (arr[j] == arr[i]) 
  			    {
                count++;
            }  
        }
        if (count > maxCount) 
  		  {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    
    printf("The most frequent element is: %d\n", mostFrequent);
}

int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; ++i) 
	  {
        scanf("%d", &arr[i]);
    }
    findMostFrequentElement(arr, size);
    return 0;
}
