#include<iostream>
using namespace std;

class Human {

 public:

 int age;
 float heiht;
 float weight;
};

class chinesse {
    public:
    
    void speak(){
        cout<<"chinesse speaking in chinesse language "<<endl;
    }

};

class color {
    public:
    void colour(){
       cout<<"different from indian "<<endl;
    }
};

// Multiple inheritance

class temp : public Human, public chinesse , public color{

};


int main(){

    temp t1;
    cout<<t1.age<<endl;
    t1.speak();
    t1.colour();

}