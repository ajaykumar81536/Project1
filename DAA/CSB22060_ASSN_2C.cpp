#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>  // instead random

using namespace std;

struct Student {
    string roll;
    int bio;
    int math;
};

vector<Student> readData(string& Fname) {
    ifstream file(Fname);
    if (!file.is_open()) {
        cerr << "Unable to open input file." << endl;
        exit(1);
    }

    int n;
    file >> n;

    vector<Student> stdnts(n);

    for (int i = 0; i < n; ++i) {
        file >> stdnts[i].roll >> stdnts[i].bio >> stdnts[i].math;
    }

    file.close();
    return stdnts;
}

void sortAndPrint(vector<Student>& d, string& sub, ofstream& output) {
    vector<pair<int, int>> markIndxs(d.size());  // d = data

    for (size_t i = 0; i < d.size(); ++i) {
        markIndxs[i] = make_pair((sub == "math") ? d[i].math : d[i].bio, i);
    }

    sort(markIndxs.begin(), markIndxs.end());
    output << "Sorted list of stdnts with respect to marks obtained in " << sub << ":" << endl;

    for (size_t i = 0; i < markIndxs.size(); ++i) {
        output << d[markIndxs[i].second].roll << " - "
             << markIndxs[i].first << " marks" << endl;
    }
    output << endl;
}


void printList(vector<Student>& d, string& sub, int min, int max, ofstream& output) {
    output << "List of stdnts in the range [" << min << ", " << max << "] in " << sub << ":" << endl;

    for (const auto& student : d) {

        int marks = (sub == "math") ? student.math : student.bio;
        if (marks >= min && marks <= max) {
            output << student.roll << " - " << marks << " marks" << endl;
        }
    }
    output << endl;
}


void principalDecision(vector<Student>& d, ofstream& output) {
    output << "Decision of the principal for all the stdnts:" << endl;

    for (const auto& student : d) {
        string decision;
        if (student.math < student.bio) {
            decision = "ENNG";
        } else if (student.math > student.bio) {
            decision = "MED";
        } else {
            decision = "ANY";
        }
        output << student.roll << " - " << decision << endl;

    }
    output << endl;
}


int main() {
    string filename = "input3.txt";
    vector<Student> stdnts = readData(filename);

    ofstream output("output3.txt");

    if (!output.is_open()) {
        cerr << "Unable to open output file." << endl;
        return 1;
    }

    string subject = "math";
    sortAndPrint(stdnts, subject, output);
    printList(stdnts, subject, 70, 90, output);

    subject = "bio";
    printList(stdnts, subject, 60, 80, output);
    principalDecision(stdnts, output);

    output.close();

    return 0;
}
