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
        for (int i = 0; i < size; ++i) {
            cout << "Name: " << students[i].name << ", Roll Number: " << students[i].rollNumber
                 << ", CGPA: " << students[i].cgpa << endl;
        }
    }

    void radixSort() {
        const int radix = 10;
        int exp = 1;
        int* count = new int[radix];
        Student* output = new Student[maxSize];

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < radix; ++j) {
                count[j] = 0;
            }

            for (int j = 0; j < size; ++j) {
                int index = static_cast<int>(students[j].cgpa * 100) / exp % radix;
                count[index]++;
            }

            for (int j = 1; j < radix; ++j) {
                count[j] += count[j - 1];
            }

            for (int j = size - 1; j >= 0; j--) {
                int index = static_cast<int>(students[j].cgpa * 100) / exp % radix;
                output[size - count[index] - 1] = students[j]; // Sorting in descending order
                count[index]--;
            }

            for (int j = 0; j < size; ++j) {
                students[j] = output[j];
            }

            exp *= radix;
        }

        delete[] count;
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
