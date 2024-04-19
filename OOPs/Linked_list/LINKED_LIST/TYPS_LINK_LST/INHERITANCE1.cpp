#include<iostream>
using namespace std;

class Human {

 public:

 int age;
 float heiht;
 float weight;

 Human(){
   this->age=age;
   this->heiht=heiht;
   this->weight=weight;
   
 }

 public:

 int getage(){
    return this->age;
 }

 float setweight(float w){
    return this->weight = w;
 }

};

// concept of Inheritance 
class Male : public Human {  // male inheritate the Human members datas or say copy datas into male 

   public:
   string color;

   void sleep (){
      cout<<"male is sleeping"<<endl;
   }
};

int main() {
   Human h1;   // static allocation
   h1.age=18;
   h1.heiht=5.3;
   h1.weight=49;
   cout<<h1.age<<endl;
   cout<<h1.heiht<<endl;
   cout<<h1.weight<<endl;


   Male object1;
   cout<< object1.age <<endl;
   cout<< object1.heiht <<endl;
   cout<< object1.weight <<endl;

   cout<<object1.color <<endl;

cout<<"all is well ";

}