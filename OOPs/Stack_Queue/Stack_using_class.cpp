#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum stack size

class Stack {
private:
    int elements[MAX_SIZE];
    int top; // Index of the top element

public:
    Stack() : top(-1) {}

    void push(int value) {
        if (top < MAX_SIZE - 1) {
            elements[++top] = value;
        } else {
            cerr << "Stack is full. Cannot push." << endl;
        }
    }

    int pop() {
        if (!isEmpty()) {
            return elements[top--];
        }
        cerr << "Stack is empty. Cannot pop." << endl;
        return -1; // Return a sentinel value for an empty stack
    }

    bool isEmpty() {
        return top == -1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack contents: ";
            for (int i = 0; i <= top; i++) {
                cout << elements[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;
    int choice;
    int value;

    while (true) {
        cout << "Stack Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                if (!stack.isEmpty()) {
                    int poppedValue = stack.pop();
                    cout << "Popped: " << poppedValue << endl;
                } else {
                    cout << "Stack is empty." << endl;
                }
                break;
            case 3:
                stack.display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
