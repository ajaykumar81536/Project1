#include<iostream>
#include<conio.h>
using namespace std;

class test {
    int abc=15;

    public:
    test() {
    int num = 10;
    cout<<"calling constructor : " ;
    cout<<num<<endl;
    
    }

    ~test() {
        cout<<"calling destructor ";
        cout<<sizeof(test);
    }
};

int main() {
    cout<< sizeof(test) <<endl;
    test first;
    cout<< sizeof(test) <<endl;
    cout<<"All is well "<<endl;
    test second;
    test third;
    cout<< sizeof(test) ;

}
