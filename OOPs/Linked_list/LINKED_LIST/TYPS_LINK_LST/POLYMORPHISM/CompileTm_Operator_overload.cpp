// compile time polymorphism
// B.OPERATOR OVERLOADING

#include<iostream>
using namespace std;

class A {
    public:
    int a;
    int b;
    int add(){
        return a+b;
    }
    
    void operator+ (A &obj){    // add(+) operator is overloading , jaha "+" aayega waha ye call ho jayega
        int value1 = this -> a;
        int value2 = obj.a;
        cout<<"output is : "<< value2 - value1 <<endl;
    } 

    void operator() (){
        cout<<"main bracket hu "<< a <<endl;
    }  
};

int main () {

    A obj1, obj2;

    obj1.a = 4;
    obj2.a = 6;

    obj1 + obj2;

    obj1();
    obj2();

}