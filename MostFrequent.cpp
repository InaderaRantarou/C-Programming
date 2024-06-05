#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Function to find the most frequent element in the array
int findMostFrequent(const vector<int>& arr) 
{
    unordered_map<int, int> frequencyMap;

    // Count the frequency of each element in the array
    for (int num : arr) 
    {
        frequencyMap[num]++;
    }

    // Find the element with the maximum frequency
    int maxFrequency = 0;
    int mostFrequentElement = arr[0]; // Initialize with the first element

    for (const auto& pair : frequencyMap) 
    {
        if (pair.second > maxFrequency) 
        {
            maxFrequency = pair.second;
            mostFrequentElement = pair.first;
        }
    }

    return mostFrequentElement;
}

int main() {
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Input the elements of the array
    vector<int> arr(size);
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
    }

    // Find the most frequent element
    int mostFrequent = findMostFrequent(arr);

    // Print the most frequent element
    cout << "Most frequent element: " << mostFrequent << endl;

    return 0;
}
