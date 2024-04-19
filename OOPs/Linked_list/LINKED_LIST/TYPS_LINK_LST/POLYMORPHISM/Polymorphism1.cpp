// polymorphism means 
// poly ="Many", morphs = "forms"
// so, polymorphism means many forms
// there are two types of polymorphism 
// 1. compile time polymorphis and 2. Run time polymorphism

// 1.>COMPILE TIME POLYMORPHISM
// A.> FUNCTION OVERLOADING

#include<iostream>
using namespace std;

class overloading {
    public:
    int a, b,c;

    public:
    void addn(){
        cout<<"None \n";
    }

    void addn(int a, int b){   // same function with diffn arguments
        cout<<"addn of a and b is : " <<a+b<<endl;
    }

    void addn(int a, int b, int c){      // same function with diffn arguments
        cout<<"addn of a, b and c is : "<<a+b+c<<endl;
    }
};

int main() {

    overloading obj1;
    obj1.addn();
    obj1.addn(5,8);
    obj1.addn(5,8,4);

}