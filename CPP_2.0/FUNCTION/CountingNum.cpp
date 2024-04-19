#include<iostream>
using namespace std;

// void :- when no returning values..like any answer,values ... , only for printing purpose
void CountNum(int num) {
    for(int i=1; i<=num; i++) {
        cout<< i <<"  ";
    }
}

int main() {
 
 int number;
 cin >> number;

 CountNum(number);

}