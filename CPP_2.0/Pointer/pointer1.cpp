#include<iostream>
using namespace std;


int main() {

    int a = 5;
    int *pr = &a;
    int **qr = &pr;

    cout<<"a  "<<a<<endl;
    cout<<"pr and &a  "<<pr <<&a <<endl;
    cout<<"*pr  "<<*pr<<endl;
    cout<<"*qr " <<*qr <<endl;
    cout<<"**qr  "<<**qr <<endl;

}