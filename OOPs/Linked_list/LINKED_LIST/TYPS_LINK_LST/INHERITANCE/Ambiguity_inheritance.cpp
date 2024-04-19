// Ambiguity inheritance is mainly used for same function 
// for eg. class a and b have same function (abc)
// if I heritate a and b into c , and then i call (abc) fn , there will be confusion , which abc is calling 
// so for protecting with clash , we introduce Ambiguity inheritance


#include<iostream>
using namespace std;

class A {
    public:
    void abc() {
        cout<<"Hello , I m inside A "<<endl;
    }
};

class B {
    public:
    void abc() {
        cout<<"Hello , I m inside B "<<endl;
    }
};

class C : public A, public B {};

int main () {

C obj1;
// obj1.abc();  // this is not allowed 
obj1.A::abc();
obj1.B::abc();

}