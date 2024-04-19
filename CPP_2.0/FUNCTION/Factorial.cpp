#include<iostream>
using namespace std;

int Factorial(int n) {
    int fact = 1;
    for(int i=n; i>=1; i--) {
        fact = fact * i;
    }  
    return fact;
}

int main() {

    int num;
    cin>>num;

 // base case
    if(num==0) {
    cout<< 1 <<endl;
    }
    Factorial(num);
    cout<<Factorial(num)<<endl;
   
}