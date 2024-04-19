#include<iostream>
using namespace std;

class Node{

public:
int data;
Node *next;

Node(int data) {   // Constructor
 this -> data = data;
 this -> next = nullptr;
}

};

void InsertAtHead(Node* &head, int D) {
 Node * temp = new Node(D);  // creating new node

    temp -> next = head; // temp ke address head node ko point karrega
    head = temp;
}

void printing(Node* &head) {
    Node*temp = head;
    
    while(temp != nullptr) {
        cout<< temp -> data <<" ";
        temp = temp -> next;   // updation of temp to point to next node addrss
    }
    cout<<endl;
}

int main() {

Node * node1 = new Node(5);  // creating a  new node
cout<< node1 -> data <<endl;   // print node1 ka data 
cout<< node1 -> next <<endl;

// Node * head = node1; // head pointed to node1
// printing(head);

// InsertAtHead(head, 8);
// printing(head);

// InsertAtHead(head, 12);
// printing(head);


}