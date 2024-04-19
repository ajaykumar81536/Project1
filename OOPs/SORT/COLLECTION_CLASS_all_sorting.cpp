#include <iostream>

class SortingAlgorithms {
public:
    static void bubbleSort(int arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    std::swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    static void selectionSort(int arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    static void quickSort(int arr[], int low, int high) {
        if (low < high) {
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot - 1);
            quickSort(arr, pivot + 1, high);
        }
    }

    static int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);
        return (i + 1);
    }

    static void heapify(int arr[], int size, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < size && arr[left] > arr[largest]) {
            largest = left;
        }

        if (right < size && arr[right] > arr[largest]) {
            largest = right;
        }

        if (largest != i) {
            std::swap(arr[i], arr[largest]);
            heapify(arr, size, largest);
        }
    }

    static void heapSort(int arr[], int size) {
        for (int i = size / 2 - 1; i >= 0; i--) {
            heapify(arr, size, i);
        }
        for (int i = size - 1; i > 0; i--) {
            std::swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }

    static int getMax(int arr[], int size) {
        int max = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }

    static void countSort(int arr[], int size, int exp) {
        int output[size];
        int count[10] = {0};

        for (int i = 0; i < size; i++) {
            count[(arr[i] / exp) % 10]++;
        }

        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for (int i = size - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        for (int i = 0; i < size; i++) {
            arr[i] = output[i];
        }
    }

    static void radixSort(int arr[], int size) {
        int max = getMax(arr, size);
        for (int exp = 1; max / exp > 0; exp *= 10) {
            countSort(arr, size, exp);
        }
    }

    static void printArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int arr_copy[size];
    std::copy(arr, arr + size, arr_copy);

    std::cout << "Original array: ";
    SortingAlgorithms::printArray(arr_copy, size);

    int choice;
    std::cout << "Choose a sorting algorithm: " << std::endl;
    std::cout << "1. Bubble Sort" << std::endl;
    std::cout << "2. Selection Sort" << std::endl;
    std::cout << "3. Quick Sort" << std::endl;
    std::cout << "4. Heap Sort" << std::endl;
    std::cout << "5. Radix Sort" << std::endl;
    std::cout << "Enter your choice (1-5): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            SortingAlgorithms::bubbleSort(arr_copy, size);
            std::cout << "Array after Bubble Sort: ";
            break;
        case 2:
            SortingAlgorithms::selectionSort(arr_copy, size);
            std::cout << "Array after Selection Sort: ";
            break;
        case 3:
            SortingAlgorithms::quickSort(arr_copy, 0, size - 1);
            std::cout << "Array after Quick Sort: ";
            break;
        case 4:
            SortingAlgorithms::heapSort(arr_copy, size);
            std::cout << "Array after Heap Sort: ";
            break;
        case 5:
            SortingAlgorithms::radixSort(arr_copy, size);
            std::cout << "Array after Radix Sort: ";
            break;
        default:
            std::cout << "Invalid choice. Please select 1, 2, 3, 4, or 5." << std::endl;
            return 1;
    }

    SortingAlgorithms::printArray(arr_copy, size);

    return 0;
}
