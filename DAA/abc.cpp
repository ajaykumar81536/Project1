#include<iostream>
#include<stdlib.h>
using namespace std;

class p {
    public:
    p() {cout<<"p"; }
    ~p() { cout<<"~p"; }
};

class q {
    public:
    q() { cout<<"q"; }
    ~q() { cout<<"~q"; }
};
class r {
    public:
    r() { cout<<"r"; }
    ~r() { cout<<"~r"; }
};
class s {
    public:
    s() { cout<<"s"; }
    ~s() { cout<<"~s"; }
};

class t: public r{
    s s1; q q1;
    public:
    t() { cout<<"t"; }
    ~t() { cout<<"~t";} 
};

int main() {
    t obj;
    cout<<endl;
    return 0;
}