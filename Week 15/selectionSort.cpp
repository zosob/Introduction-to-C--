#include <iostream>
#include <vector>
#include <algorithm> // For std::swap

// 1. Selection Sort: Moves the minimum to the front
void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of unsorted part
        std::swap(arr[i], arr[minIndex]);
    }
}

// 2. Binary Search: Divide and Conquer (Iterative)
int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        // Prevent overflow compared to (low + high) / 2
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            
            return mid; // Target found
        } else if (arr[mid] < target) {
            low = mid + 1; // Target is in the right half
        } else {
            high = mid - 1; // Target is in the left half
        }
    }
    return -1; // Target not found
}

int main() {
    std::vector<int> data = {64, 25, 12, 22, 11};

    std::cout << "Sorting the array...\n";
    selectionSort(data);

    std::cout << "Sorted array: ";
    for (int x : data) std::cout << x << " ";
    std::cout << "\n\n";

    int target = 22;
    int result = binarySearch(data, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}