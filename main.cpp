#include <iostream>
#include <vector>

// Function to perform Insertion Sort on a vector of integers
void insertionSort(std::vector<int>& arr) {
    int n = arr.size();

    // Traverse through 1 to n-1 elements
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // The element to be inserted
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the key at the correct position
        arr[j + 1] = key;
    }
}

// Function to print the elements of the array
void printArray(const std::vector<int>& arr) {
    for (const int& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Initialize an array of integers
    std::vector<int> data = {29, 10, 14, 37, 13};

    std::cout << "Original array:\n";
    printArray(data);

    // Perform Insertion Sort
    insertionSort(data);

    std::cout << "Sorted array:\n";
    printArray(data);

    return 0;
}
