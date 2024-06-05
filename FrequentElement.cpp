#include <iostream>
using namespace std;

void findMostFrequentElement(int arr[], int size) {
    int maxCount = 0;
    int mostFrequent = arr[0];
    
    for (int i = 0; i < size; ++i) {
        int count = 0;
        for (int j = 0; j < size; ++j) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    
    cout << "The most frequent element is: " << mostFrequent << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];  // Dynamic allocation of the array

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    findMostFrequentElement(arr, size);

    delete[] arr;  // Free dynamically allocated memory

    return 0;
}
