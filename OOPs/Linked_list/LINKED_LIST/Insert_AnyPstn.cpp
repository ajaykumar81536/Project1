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

void InsertAtHead(linked_list* &head, int D) {
 linked_list * temp = new linked_list(D);  // creating new node

    temp -> next = head; // temp ka address head ko point karrega
    head = temp; // update head
}


void InsertAtTAil(linked_list * & tail, int D){
    linked_list * temp = new linked_list(D);
    
  tail -> next = temp; // tail ka address temp ko point karega
  tail = tail -> next; // update tail

}

void InsertAnyPosition(linked_list* &head,linked_list* &tail,int position, int Dataa){
    linked_list* temp = head; 
    int count = 1;


  if (position == 1) {  
    InsertAtHead(head,Dataa);
      return;
  }

  if (temp -> next = nullptr){
    InsertAtTAil(tail,Dataa);
    return;
  }

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

InsertAtHead(head,2);
Printing(head);

InsertAnyPosition(head,tail,1,12);
Printing(head);

InsertAnyPosition(head,tail,2,22);
Printing(head);


}