#include <iostream>
#include <cstdlib>

using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    float cgpa;

    Student() : rollNumber(0), cgpa(0.0) {
        name[0] = '\0';
    }
};

class Collection {
public:
    Student* students;
    int maxSize;
    int size;

public:
    Collection(int max) : maxSize(max), size(0) {
        students = new Student[maxSize];
    }

    ~Collection() {
        delete[] students;
    }

    Collection(const Collection& other) : maxSize(other.maxSize), size(other.size) {
        students = new Student[maxSize];
        for (int i = 0; i < size; ++i) {
            students[i] = other.students[i];
        }
    }

    Collection& operator=(const Collection& other) {
        if (this != &other) {
            delete[] students;
            maxSize = other.maxSize;
            size = other.size;
            students = new Student[maxSize];
            for (int i = 0; i < size; ++i) {
                students[i] = other.students[i];
            }
        }
        return *this;
    }

    void insert(const Student& student) {
        if (size < maxSize) {
            students[size++] = student;
        }
    }
    void display() {
    for (int i = size - 1; i >= 0; --i) {
        cout << "Name: " << students[i].name << ", Roll Number: " << students[i].rollNumber
             << ", CGPA: " << students[i].cgpa << endl;
    }
    }

    // void display() {
    //     for (int i = 0; i < size; ++i) {
    //         cout << "Name: " << students[i].name << ", Roll Number: " << students[i].rollNumber
    //              << ", CGPA: " << students[i].cgpa << endl;
    //     }
    // }
    void radixSort() {
    const int radix = 10;
    int exp = 1;
    Student* output = new Student[maxSize];

    while (1) {
        int done = 1;
        int count[radix] = {0};

        for (int i = 0; i < size; i++) {
            int index = static_cast<int>(students[i].cgpa * 100) / exp;
            count[index % radix]++;
        }

        for (int i = 1; i < radix; i++) {
            count[i] += count[i - 1];
        }

        for (int i = size - 1; i >= 0; i--) {
            int index = static_cast<int>(students[i].cgpa * 100) / exp;
            output[count[index % radix] - 1] = students[i];
            count[index % radix]--;
        }

        for (int i = 0; i < size; i++) {
            students[i] = output[i];
            if (i > 0 && students[i].cgpa != students[i - 1].cgpa) {
                done = 0;
            }
        }

        exp *= radix;

        if (done || exp > 1000) { // Add the condition to avoid division by zero
            break;
        }
    }

    delete[] output;
}
};

int main() {
    int n;
    cout << "Enter the maximum number of students: ";
    cin >> n;

    Collection studentCollection(n);

    int choice = 0;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Student\n";
        cout << "2. Sort and Display Students by CGPA (Descending)\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid choice. Please enter a valid number.\n";
            cin.clear();
            cin.ignore();
        } else {
            switch (choice) {
                case 1:
                    if (studentCollection.size < studentCollection.maxSize) {
                        Student student;
                        cin.ignore();
                        cout << endl;
                        cout << "Enter student name: ";
                        cin.getline(student.name, 50);
                        cout << "Enter student roll number: ";
                        cin >> student.rollNumber;
                        cout << "Enter student CGPA: ";
                        cin >> student.cgpa;
                        cin.ignore();
                        studentCollection.insert(student);
                    } else {
                        cout << "Collection is full.\n";
                    }
                    break;

                case 2:
                    studentCollection.radixSort();
                    cout << endl;
                    cout << "Sorted Students by CGPA (Descending):\n";
                    studentCollection.display();
                    break;

                case 3:
                    cout << "Exiting program.\n";
                    break;

                default:
                    cout << "Invalid choice. Please try again.\n";
                    break;
            }
        }
    } while (choice != 3);

    return 0;
}
