#include<iostream>
using namespace std;

class Hero {
  public:
  int health;
  char level;

  //constructor
  Hero (){

    cout<<"calling constructor"<<endl;
    this -> health = health;
    this -> level = level;
  }

 // destructor 
 ~Hero() {
  cout<<"Calling destructor"<<endl;
 }

};

int main() {

    //statically allocation
    Hero h1;  // static allocation me automatic destructor call ho jata hai

   // dynamically allocation
    Hero *h2 = new Hero();  // in dynamic allocation , u should call by manually
    delete h2;


}   
