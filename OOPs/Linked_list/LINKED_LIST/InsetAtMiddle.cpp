#include<iostream>
using namespace std;

class linked_list {
  public:
  int data;
  linked_list * next;

  linked_list(int data){
   this -> data = data;
   this -> next = nullptr;

  }

};

void InsertatPosition(linked_list* &head,int position, int Dataa){
    linked_list* temp = head; 
    int count = 1;

    while (count < position-1){
        temp = temp-> next;  // updation of temp for traversing
        count++;
    }

linked_list * new_node = new linked_list(Dataa); // creating a new node for inseting at given position

new_node -> next = temp -> next;
temp -> next = new_node;

}

void Printing(linked_list* & head){
    linked_list* temp = head;

    while(temp != nullptr){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
cout<<endl;
}


int main () {

linked_list * node1 = new linked_list(5);
cout<< node1->data <<endl;

linked_list * head = node1;
linked_list * tail = node1;


InsertatPosition(head,1,12);
Printing(head);

InsertatPosition(head,2,22);
Printing(head);

InsertatPosition(head,2,30);
Printing(head);
}