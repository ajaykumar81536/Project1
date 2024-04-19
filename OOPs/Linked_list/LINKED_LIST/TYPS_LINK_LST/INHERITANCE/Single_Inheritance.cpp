#include<iostream>
using namespace std;

class Human {

 public:

 int age;
 float heiht;
 float weight;

};

// single inheritance
class Male : public Human {
 public:
 void speak(){
    cout<<"male speaking "<<endl;
 }
};

int main(){

Male obj1; //object of male 
cout<< obj1.age <<endl;
 obj1.speak();

}