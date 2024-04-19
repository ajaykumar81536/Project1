#include <iostream>
#include <fstream>
using namespace std;

void merge(int *arr1, int size1, int *arr2, int size2, int *output) {
    int i = 0;
    int j = 0;
    int k = 0;
    
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            output[k] = arr1[i];
            k++;
            i++;
        } else {
            output[k] = arr2[j];
            k++;
            j++;
        }
    }
    
    while (i < size1) {
        output[k] = arr1[i];
        k++;
        i++;
    }
    
    while (j < size2) {
        output[k] = arr2[j];
        k++;
        j++;
    }
}

int* mergeKarray(int **arr, int k, int n) {
    int *result = (int*)malloc(sizeof(int) * k * n);
    for (int i = 0; i < n; i++) {
        result[i] = arr[0][i];
    }
    
    for (int i = 0; i < k - 1; i++) {
        int *temp = (int*)malloc((n * (i + 2)) * sizeof(int));
        merge(result, n * (i + 1), arr[i + 1], n, temp);
        free(result);
        result = temp;
    }

    return result;
}

int main() {
    int k;
    int n;

    cout << "Enter the number of sorted arrays you want to merge: ";
    cin >> k;
    cout << "Enter the number of elements you want in a single array: ";
    cin >> n;

    int **arr = (int**)malloc(sizeof(int*) * k);
    for (int i = 0; i < k; i++) {
        arr[i] = (int*)malloc(sizeof(int) * n);
    }

    ifstream in("input2.txt");
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            in >> arr[i][j];
        }
    }
    in.close();

    ofstream out;
    out.open("output2.txt");

    int *mergedArray = mergeKarray(arr, k, n);

    for (int i = 0; i < k * n; i++) {
        out << mergedArray[i] << " ";
    }
    out.close();

    free(mergedArray);

    for (int i = 0; i < k; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
