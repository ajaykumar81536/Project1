#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void mergeSortedArrays(vector<int>& arr1, vector<int>& arr2, vector<int>& mergedArray) {
    int index1 = 0;
    int index2 = 0;

    while (index1 < arr1.size() && index2 < arr2.size()) {
        if (arr1[index1] < arr2[index2]) {
            mergedArray.push_back(arr1[index1]);
            index1++;
        } else {
            mergedArray.push_back(arr2[index2]);
            index2++;
        }
    }

    while (index1 < arr1.size()) {
        mergedArray.push_back(arr1[index1]);
        index1++;
    }

    while (index2 < arr2.size()) {
        mergedArray.push_back(arr2[index2]);
        index2++;
    }
}

vector<int> mergeKSortedArrays(vector<vector<int>>& inputArrays) {
    vector<int> result = inputArrays[0];

    for (int i = 1; i < inputArrays.size(); i++) {
        vector<int> temp;
        mergeSortedArrays(result, inputArrays[i], temp);
        result = temp;
    }

    return result;
}

int main() {
    int numArrays;
    int arrayLength;

    cout << "Enter the number of sorted arrays you want to merge: ";
    cin >> numArrays;
    cout << "Enter the number of elements you want in a single array: ";
    cin >> arrayLength;

    vector<vector<int>> inputArrays(numArrays, vector<int>(arrayLength));

    ifstream inputFile("input2.txt");
    if (!inputFile.is_open()) {
        cerr << "Unable to open file input2.txt" << endl;
        return 1;
    }

    for (int i = 0; i < numArrays; i++) {
        for (int j = 0; j < arrayLength; j++) {
            inputFile >> inputArrays[i][j];
        }
    }
    inputFile.close();

    ofstream outputFile("output2.txt");
    if (!outputFile.is_open()) {
        cerr << "Unable to open file output2.txt" << endl;
        return 1;
    }

    vector<int> mergedArray = mergeKSortedArrays(inputArrays);

    for (int i = 0; i < mergedArray.size(); i++) {
        outputFile << mergedArray[i] << " ";
    }
    outputFile.close();

    return 0;
}
