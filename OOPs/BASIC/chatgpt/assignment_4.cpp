#include <iostream>

class QueueNode {
public:
    int data;
    QueueNode* next;

    QueueNode(int value) {
        data = value;
        next = nullptr;
    }
};

class Queue {
private:
    QueueNode* front;
    QueueNode* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int value) {
        QueueNode* newNode = new QueueNode(value);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            std::cerr << "Queue is empty. Cannot dequeue." << std::endl;
            exit(1);
        }

        int value = front->data;
        QueueNode* temp = front;
        front = front->next;
        delete temp;

        if (front == nullptr) {
            rear = nullptr;
        }

        return value;
    }

    int peek() {
        if (isEmpty()) {
            std::cerr << "Queue is empty. Cannot peek." << std::endl;
            exit(1);
        }
        return front->data;
    }

    void display() {
        QueueNode* current = front;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    std::cout << "Queue elements: ";
    myQueue.display();

    std::cout << "Front element: " << myQueue.peek() << std::endl;

    myQueue.dequeue();
    std::cout << "Dequeued. Front element is now: " << myQueue.peek() << std::endl;

    return 0;
}
