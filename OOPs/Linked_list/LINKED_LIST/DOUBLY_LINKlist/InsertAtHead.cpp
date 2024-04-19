#include<iostream>
using namespace std;

class Node {
public:
 int data;
 Node *prev;
 Node *next;

 Node(int data){
    this -> data = data;
    this -> next = nullptr;
    this -> prev = nullptr;
 }


};

void printing(Node* &head){
    Node*temp = head;
    while(temp != nullptr){
        cout<<temp->data <<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

void InsertAtHead(Node* &head, int d){

Node* temp = new Node(d);
temp->next = head;
head->prev = temp;
head = temp;

}

void InsertAtTail(Node* &tail, int d){

Node * temp = new Node(d);
tail->next = temp;
temp->prev = tail;
tail = temp;

}
int main() {

Node * node1 = new Node(10);
Node* head = node1;
Node* tail = node1;
cout<<node1->data <<endl;

InsertAtHead(head, 15);
printing(head);

InsertAtHead(head, 20);
printing(head);

InsertAtTail(tail,30);
printing(head);

InsertAtTail(tail, 50);
printing(head);

return 0;
}