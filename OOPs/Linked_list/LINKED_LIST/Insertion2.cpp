#include<iostream>
using namespace std;

class Node {
public:
int data;
Node * next;

Node(int data){  //constructor
this -> data = data;
this -> next = nullptr;

}
};

void InseratHead(Node * &head, int new_data){

Node * temp = new Node(new_data);
temp-> next = head;
head = temp;
}

void printing(Node * &head){
    Node*temp = head;

while(temp != nullptr){
    cout<< temp->data <<" ";
     temp = temp-> next;
}
}


int main() {

Node * node1 = new Node(10);  // creating a new node
cout<< node1 -> data <<endl;
cout<< node1 -> next <<endl;

Node * head = node1;

InseratHead(head, 15);
printing(head);

InseratHead(head, 20);
printing(head);

}