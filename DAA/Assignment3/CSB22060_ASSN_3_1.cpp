#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

pair<int, int> d_stable_seqnce(const vector<int>& RS, int d) {

    int n = RS.size();
    int MaxLen = 0;

    pair<int, int> Max_Indices = {-1, -1};

    int i,j;
    int k,l;

    for (i = 0;  i<n;  ++i) {
        for (j = i+1; j<n; ++j) { 
            bool stable = true;
            

            for (k = i; k <= j; ++k) {
                for (l = k + 1; l <= j; ++l) { 
                    if (abs(RS[k] - RS[l]) > d) { 
                        stable = false;
                        break;
                    }
                }


                if (!stable)
                    break;
            }
    

            if (stable && j - i > MaxLen) {
                MaxLen = j - i;
                Max_Indices = {i, j};
            }
        }
    }
    return Max_Indices;
}

int main() {

    ifstream infile("input1.txt");
    ofstream outfile("output1.txt");

    if (!infile.is_open()) {
        cout << "Unable to open input1 file. Error !!" << endl;
        return 1;
    }


    if (!outfile.is_open()) {
        cout << "Unable to open output1 file. Error !!" << endl;
        return 1;
    }


    vector<int> RS;
    int score;
    while (infile >> score) {
        RS.push_back(score);
    }


    int d;
    cout << "Enter the value of d: ";
    cin >> d;

    pair<int, int> result = d_stable_seqnce(RS, d);

    if (result.first != -1 && result.second != -1) {
        outfile << "Longest d-stable sequence indices: " << result.first << " - " << result.second << endl;
        outfile << "Scores within the sequence: ";

        for (int i = result.first; i <= result.second; ++i) {
            outfile << RS[i] << " ";
        }
        
        outfile << "\nThank you sir !! " <<endl;

    } else {
        outfile << "No d-stable sequence found.Please check the input !!" << endl;
        outfile << "\nThank you sir !!\n";
    }

    infile.close();
    outfile.close();

    return 0;
}
