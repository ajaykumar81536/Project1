# include<iostream>
using namespace std;

// 1 is prime
// 0 is not a prime 
bool isPrime(int n) {
    //fn body

    for(int i=2; i<n; i++) {
      if(n%i == 0) {
            return 0;
      } }
    return 1;
}
     int main() {
        int a;
        cin>>a;

        //fn call
        if( isPrime(a) == 0 ) {
            cout<<"is not a prime" <<endl;

        } else { 
            cout<<"is a prime " <<endl;
        }
     }