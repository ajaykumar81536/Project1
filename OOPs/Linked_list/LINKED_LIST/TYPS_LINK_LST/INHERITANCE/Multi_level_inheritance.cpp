#include<iostream>
using namespace std;

class Human {

 public:

 int age;
 float heiht;
 float weight;

 public:
 void color(){
    cout<<"color of human depends on nature and envirnment "<<endl;
 }
};


//Multi_level inheritance 

class chinesse : public Human {  // copy data into chinesse from Human

};

class temp1 : public chinesse {  // copy data into temp1 form chinesse

};



int main(){

    class temp1 t1;
    t1.color();
  
}