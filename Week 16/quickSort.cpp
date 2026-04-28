#include <iostream>
#include <vector>
using namespace std;

// Function to swap two elements
void swapValues(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Partition function
// This places the pivot element in the correct position
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];   // Choose last element as pivot
    int i = low - 1;         // Index of smaller element

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swapValues(arr[i], arr[j]);
        }
    }

    // Place pivot in correct position
    swapValues(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort function
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);

        // Recursively sort left and right subarrays
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Helper function to print vector
void printVector(const vector<int> &arr)
{
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main()
{
    vector<int> numbers = {10, 7, 8, 9, 1, 5};

    cout << "Before Quick Sort: ";
    printVector(numbers);

    quickSort(numbers, 0, numbers.size() - 1);

    cout << "After Quick Sort: ";
    printVector(numbers);

    return 0;
}