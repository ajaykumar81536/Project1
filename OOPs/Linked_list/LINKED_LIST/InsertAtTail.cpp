#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;

    Node(int data){
        this -> data = data;
        this -> next= NULL;
    }
};

void InsertAtTAil(Node * & tail, int new_data){
    Node * temp = new Node(new_data);
    
  tail -> next = temp;
  tail = temp;

}

void printing(Node * &head){
    Node * temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {

class Node * node1 = new Node(5);
cout<< node1 -> data <<endl;
cout<< node1 -> next <<endl;

Node * head = node1;
Node * tail = node1;


InsertAtTAil(tail, 7);
printing(head);

InsertAtTAil(tail, 12);
printing(head);

} 