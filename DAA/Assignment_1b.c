#include <stdio.h>
#include <stdlib.h>

void mergeSortedArrays(int *arr1, int size1, int *arr2, int size2, int *mergedArray) {
    int index1 = 0;
    int index2 = 0;
    int currentIndex = 0;

    while (index1 < size1 && index2 < size2) {
        if (arr1[index1] < arr2[index2]) {
            mergedArray[currentIndex] = arr1[index1];
            currentIndex++;
            index1++;
        } else {
            mergedArray[currentIndex] = arr2[index2];
            currentIndex++;
            index2++;
        }
    }

    while (index1 < size1) {
        mergedArray[currentIndex] = arr1[index1];
        currentIndex++;
        index1++;
    }

    while (index2 < size2) {
        mergedArray[currentIndex] = arr2[index2];
        currentIndex++;
        index2++;
    }
}

int* mergeKSortedArrays(int **inputArrays, int numArrays, int arrayLength) {
    int *result = (int*)malloc(sizeof(int) * numArrays * arrayLength);

    for (int i = 0; i < arrayLength; i++) {
        result[i] = inputArrays[0][i];
    }

    for (int i = 0; i < numArrays - 1; i++) {
        int *temp = (int*)malloc((arrayLength * (i + 2)) * sizeof(int));
        mergeSortedArrays(result, arrayLength * (i + 1), inputArrays[i + 1], arrayLength, temp);

        // Free the memory of the previous result
        free(result);

        // Assign the new merged array to result
        result = temp;
    }

    return result;
}

int main() {
    int numArrays;
    int arrayLength;

    printf("Enter the number of sorted arrays you want to merge: ");
    scanf("%d", &numArrays);
    printf("Enter the number of elements you want in a single array: ");
    scanf("%d", &arrayLength);

    int **inputArrays = (int**)malloc(sizeof(int*) * numArrays);
    for (int i = 0; i < numArrays; i++) {
        inputArrays[i] = (int*)malloc(sizeof(int) * arrayLength);
    }

    FILE *inputFile = fopen("input2.txt", "r");
    for (int i = 0; i < numArrays; i++) {
        for (int j = 0; j < arrayLength; j++) {
            fscanf(inputFile, "%d", &inputArrays[i][j]);
        }
    }
    fclose(inputFile);

    FILE *outputFile = fopen("output2.txt", "w");

    int *mergedArray = mergeKSortedArrays(inputArrays, numArrays, arrayLength);

    for (int i = 0; i < numArrays * arrayLength; i++) {
        fprintf(outputFile, "%d ", mergedArray[i]);
    }
    fclose(outputFile);

    // Free the allocated memory
    for (int i = 0; i < numArrays; i++) {
        free(inputArrays[i]);

        
    }
    free(inputArrays);
    free(mergedArray);

    return 0;
}
