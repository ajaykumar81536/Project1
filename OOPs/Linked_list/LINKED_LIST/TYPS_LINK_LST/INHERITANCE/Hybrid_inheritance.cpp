#include<iostream>
using namespace std;

class Human { // parents group

 public:

 int age;
 float heiht;
 float weight;

    public:
    void speaking () {
        cout<<"human speaking"<<endl;
    }
};

class A : public Human {
    
};

class b {
    public:
    void sleep(){
        cout<<"sleeping" <<endl;
    }
};

class c {
    public: 
    void baby (){
        cout<<"baby group"<<endl;
    }
};

class D : public A, public b{

};

class E : public D, public c {};  // this is like a chain 

int main () {


    E obj1;
    obj1.speaking();  // E obj1 can access parents group
    obj1.sleep();  // E obj1 can also access child group and soo on...
    obj1.baby();
}