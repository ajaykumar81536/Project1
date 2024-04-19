#include<iostream>
using namespace std;

class overloadingg {
 private:
 int a, b;

 public:
 overloadingg(int x, int y){
    x = a;
    y = b;
 }

 void show(){
    cout<<"A : "<<a<<"  "<<"B : "<<b<<endl;
 }

 void operator -(){
    a = -a;
    b = -b;
 }

};

int main() {
    overloadingg obj1(10, -15);
    obj1.show();
    
    // calling - operator
    -obj1;
    cout<<"After calling minus operator"<<endl;
    obj1.show();
}