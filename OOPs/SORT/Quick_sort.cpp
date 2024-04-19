#include <iostream>
using namespace std;


int partition(int arr[], int low, int high) {  // Function to partition the array
    int pivot = arr[low]; // Choose the leftmost element as the pivot
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high) {
            i++;
        }
        while (arr[j] > pivot && j >= low) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]); // Swap values at positions i and j
        }
    }
    swap(arr[low], arr[j]); // Swap pivot with element at index j (pivot's correct position)
    return j;
}


void quickSort(int arr[], int low, int high) { // Function to perform Quick Sort
    if (low < high) {
        int pivotIndex = partition(arr, low, high); // Get the pivot's correct position
        quickSort(arr, low, pivotIndex - 1);        // Recursively sort the left subarray
        quickSort(arr, pivotIndex + 1, high);       // Recursively sort the right subarray
    }
}

int main() {
    int *arr, n;
    cout << "Enter the size of the Array: " << endl;
    cin >> n;

    arr = new int[n]; // Allocate memory for the array using 'new'

    cout << "Enter the Elements in the Array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "After Sorting the Given Inputs: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    delete[] arr; // Deallocate memory when done with the array

    return 0;
}
