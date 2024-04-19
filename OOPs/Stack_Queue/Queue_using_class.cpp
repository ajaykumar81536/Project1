#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(NULL), right(NULL) {}
};

class BinarySearchTree {
public:
    TreeNode* root;   // Other member functions as in the previous implementation

   

public:
    BinarySearchTree() : root(NULL) {}  // Other member functions as in the previous implementation

    
};

class Queue {
public:
    TreeNode* front; // Points to the front of the queue
    TreeNode* rear;  // Points to the rear of the queue

public:
    Queue() : front(NULL), rear(NULL) {}

    void enqueue(int value) {
        TreeNode* newNode = new TreeNode(value);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->right = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            std::cerr << "Queue is empty." << std::endl;
            return -1; // Return a sentinel value for an empty queue
        }

        int frontValue = front->data;
        TreeNode* temp = front;

        if (front == rear) {
            front = rear = NULL;
        } else {
            front = front->right;
        }

        delete temp;
        return frontValue;
    }

    bool isEmpty() {
        return front == NULL;
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            return;
        }

        std::cout << "Queue: ";
        TreeNode* current = front;
        while (current != NULL) {
            std::cout << current->data << " ";
            current = current->right;
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue queue;
    int choice;
    int value;

    while (true) {
        std::cout << "Queue Menu:" << std::endl;
        std::cout << "1. Enqueue" << std::endl;
        std::cout << "2. Dequeue" << std::endl;
        std::cout << "3. Display" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the value to enqueue: ";
                std::cin >> value;
                queue.enqueue(value);
                break;
            case 2:
                if (!queue.isEmpty()) {
                    int front = queue.dequeue();
                    std::cout << "Dequeued: " << front << std::endl;
                } else {
                    std::cout << "Queue is empty." << std::endl;
                }
                break;
            case 3:
                queue.display();
                break;
            case 4:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
