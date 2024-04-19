#include <iostream>
#include <cstdlib>

// Student structure
struct Student {
    char name[50];
    int rollNumber;
    float cgpa;

    Student() {
        rollNumber = 0;
        cgpa = 0.0;
    }
};

// Collection class to store student objects
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
            std::cout << "Name: " << students[i].name << ", Roll Number: " << students[i].rollNumber
                      << ", CGPA: " << students[i].cgpa << std::endl;
        }
    }

    // Overload assignment operator
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

    // Overload stream insertion operator
    friend std::ostream& operator<<(std::ostream& os, const Collection& collection) {
        for (int i = 0; i < collection.size; ++i) {
            os << "Name: " << collection.students[i].name << ", Roll Number: " << collection.students[i].rollNumber
               << ", CGPA: " << collection.students[i].cgpa << std::endl;
        }
        return os;
    }

    // Radix Sort based on CGPA in descending order
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
                output[count[index] - 1] = students[j];
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
    std::cout << "Enter the maximum number of students: ";
    std::cin >> n;

    Collection studentCollection(n);

    int choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Sort and Display Students by CGPA (Descending)\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                if (studentCollection.size < studentCollection.maxSize) {
                    Student student;
                    std::cout << "Enter student name: ";
                    std::cin.ignore();
                    std::cin.getline(student.name, 50);
                    std::cout << "Enter student roll number: ";
                    std::cin >> student.rollNumber;
                    std::cout << "Enter student CGPA: ";
                    std::cin >> student.cgpa;
                    studentCollection.insert(student);
                } else {
                    std::cout << "Collection is full.\n";
                }
                break;

            case 2:
                studentCollection.radixSort();
                std::cout << "Sorted Students by CGPA (Descending):\n";
                std::cout << studentCollection;
                break;
            case 3:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 3);

    return 0;
}
