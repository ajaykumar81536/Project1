#include<iostream>
using namespace std;

class Hero {
    public:
    // Hero() {                                   // when we create any object of a class , there is a allready space for that 
    //                                                // like Hero h1 ... h1 is object but this is allready created in the form of h1.Hero()
    //     cout<<"Constructor called ! "<<endl;   
    // }

  string name;
  int age;
  float height;
  float weitht;

  void getinput(){

  }

};

int main() {
// Hero *h1 = new Hero; //dynamically created object h1 
Hero h1;
h1.name ="Sharukh_khan";
h1.age = 56;
h1.height= 6.2;
h1.weitht=68;

cout<<"Name "<< h1.name<<endl;
cout<<"age "<< h1.age <<endl;
cout<<"height "<< h1.height<<endl;
cout<<"weight "<< h1.weitht<<endl;

    // return 0;
}