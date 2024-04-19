#include<iostream>
using namespace std;

class Node {  // Node contain basically Data nd addrss on nxt node
public:
int data;
Node * next;

// Constructor 
Node(int data) {
    this -> data = data;
    this -> next = nullptr;
}

};



int main() {
// creating a new node 
Node * node1 = new Node(10);
cout<< node1 ->data <<endl;
cout<< node1 -> next <<endl;

}