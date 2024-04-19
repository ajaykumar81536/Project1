#include <iostream>

using namespace std; // Using the std namespace

class Person {
public:
    Person(const char* name, int age) : age(age) {  // Copy the name character by character
        
        int i = 0;
        while (name[i] != '\0' && i < 49) {
            this->name[i] = name[i];
            i++;
        }
        this->name[i] = '\0'; // Ensure null-termination
    }

    void setName(const char* newName) {   // Copy the new name character by character
       
        int i = 0;
        while (newName[i] != '\0' && i < 49) {
            name[i] = newName[i];
            i++;
        }
        name[i] = '\0'; // Ensure null-termination
    }

    void setAge(int newAge) {
        age = newAge;
    }

    const char* getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << " years old" << endl;
    }

private:
    char name[50]; // Using a character array to store the name
    int age;
};

int main() {
    char name[50]; // Using a character array to store the name
    int age;

    cout << "Enter name: ";
    cin.getline(name, sizeof(name));

    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); // Consume the newline character left in the input buffer

    Person person(name, age);

    cout << "Person's Information:" << endl;
    person.displayInfo();

    return 0;
}
