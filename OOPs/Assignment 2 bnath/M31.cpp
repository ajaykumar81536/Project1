#include <iostream>
#include <cstdlib>

using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    float cgpa;

    Student() {
        rollNumber = 0;
        cgpa = 0.0;
    }
};

class Collection {
public:
    Student* students;
    int maxSize;
    int size;

public:
    Collection(int max) : maxSize(max), size(0) {
        students = static_cast<Student*>(malloc(maxSize * sizeof(Student)));
    }

    ~Collection() {
        free(students);
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

    Collection& operator=(const Collection& other) {
        if (this != &other) {
            free(students);
            maxSize = other.maxSize;
            size = other.size;
            students = static_cast<Student*>(malloc(maxSize * sizeof(Student)));
            for (int i = 0; i < size; ++i) {
                students[i] = other.students[i];
            }
        }
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Collection& collection) {
        for (int i = 0; i < collection.size; ++i) {
            os << "Name: " << collection.students[i].name << ", Roll Number: " << collection.students[i].rollNumber
               << ", CGPA: " << collection.students[i].cgpa << endl;
        }
        return os;
    }

    void radixSort() {
    const int radix = 10;
    int exp = 1;
    int* count = static_cast<int*>(malloc(radix * sizeof(int)));
    Student* output = static_cast<Student*>(malloc(maxSize * sizeof(Student)));

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < radix; ++j) {
            count[j] = 0;
        }

        for (int j = 0; j < size; ++j) {
            int index = (static_cast<int>(students[j].cgpa * 100) / exp) % radix;
            count[index]++;
        }

        for (int j = 1; j < radix; ++j) {
            count[j] += count[j - 1];
        }

        for (int j = size - 1; j >= 0; j--) {
            int index = (static_cast<int>(students[j].cgpa * 100) / exp) % radix;
            output[size - count[index]] = students[j];  // Change here
            count[index]--;
        }

        for (int j = 0; j < size; ++j) {
            students[j] = output[j];
        }

        exp *= radix;
    }

    free(count);
    free(output);
}

};

int main() {
    int n;
    cout << "Enter the maximum number of students: ";
    cin >> n;

    Collection studentCollection(n);

    int choice = 0; // Initialize choice to a value not equal to 3

    do {
        cout << "\nMenu:\n";
        cout << "1. Add Student\n";
        cout << "2. Sort and Display Students by CGPA (Descending)\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            // Handle the case where the user enters a non-integer input
            cout << "Invalid choice. Please enter a valid number.\n";
            cin.clear(); // Clear the error state
            
        } else {
            switch (choice) {
                case 1:
                    if (studentCollection.size < studentCollection.maxSize) {
                        Student student;
                        cin.ignore(); // Clear the newline character from the previous input
                        cout << "Enter student name: ";
                        cin.getline(student.name, 50);
                        cout << "Enter student roll number: ";
                        cin >> student.rollNumber;
                        cout << "Enter student CGPA: ";
                        cin >> student.cgpa;

                        // Manually clear the input buffer after reading CGPA
                        while (cin.get() != '\n');

                        studentCollection.insert(student);
                    } else {
                        cout << "Collection is full.\n";
                    }
                    break;

                case 2:
                    studentCollection.radixSort();
                    cout << "Sorted Students by CGPA (Descending):\n";
                    cout << studentCollection;
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
