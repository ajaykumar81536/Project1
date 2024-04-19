#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

pair<int, int> MergeStableRuns(const vector<int>& RS, int start, int mid, int end, int d) {
    int maxLeftIndex = mid;
    int maxRightIndex = mid + 1;
    int leftIndex = mid;
    int rightIndex = mid + 1;

    while (leftIndex >= start) {
        if (abs(RS[leftIndex] - RS[leftIndex + 1]) <= d) {
            leftIndex--;
        } else {
            break;
        }
    }

    while (rightIndex <= end) {
        if (abs(RS[rightIndex] - RS[rightIndex - 1]) <= d) {
            rightIndex++;
        } else {
            break;
        }
    }

    return {leftIndex + 1, rightIndex - 1};
}

pair<int, int> DivideAndConquerLongestStableRun(const vector<int>& RS, int start, int end, int d) {
    if (start == end) {
        return {start, end}; // Base case: Single element is a stable run
    }

    int mid = (start + end) / 2;

    // Recursively find the longest stable run in the left and right halves
    pair<int, int> leftStableRun = DivideAndConquerLongestStableRun(RS, start, mid, d);
    pair<int, int> rightStableRun = DivideAndConquerLongestStableRun(RS, mid + 1, end, d);

    // Find the longest stable run that crosses the midpoint
    pair<int, int> crossMidStableRun = MergeStableRuns(RS, start, mid, end, d);

    // Return the longest of the three runs: left, right, and cross-mid runs
    int leftLength = leftStableRun.second - leftStableRun.first + 1;
    int rightLength = rightStableRun.second - rightStableRun.first + 1;
    int crossMidLength = crossMidStableRun.second - crossMidStableRun.first + 1;

    if (leftLength >= rightLength && leftLength >= crossMidLength) {
        return leftStableRun;
    } else if (rightLength >= leftLength && rightLength >= crossMidLength) {
        return rightStableRun;
    } else {
        return crossMidStableRun;
    }
}

int main() {
    ifstream inputFile("input2.txt");
    if (!inputFile.is_open()) {
        cout << "Error: Unable to open input file." << endl;
        return 1;
    }

    int n, d;
    inputFile >> n >> d;

    vector<int> RS(n);
    for (int i = 0; i < n; ++i) {
        inputFile >> RS[i];
    }
    inputFile.close();

    pair<int, int> result = DivideAndConquerLongestStableRun(RS, 0, n - 1, d);

    ofstream outputFile("output2.txt");
    if (!outputFile.is_open()) {
        cout << "Error: Unable to open output file." << endl;
        return 1;
    }

    outputFile << "Longest d-stable sequence indices: " << result.first << " - " << result.second << endl;
    outputFile << "Scores within the sequence: ";
    for (int i = result.first; i <= result.second; ++i) {
        outputFile << RS[i] << " ";
    }
    outputFile << endl;

    outputFile.close();

    return 0;
}
