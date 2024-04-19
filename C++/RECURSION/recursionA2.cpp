# include <iostream>
using namespace std;

int fib(int n){
     
     //base case
    if(n==0)
    return 0;
    
    if(n == 1) 
    return 1;

    //processing
    int ans = fib(n-1) + fib(n - 2);

    // last case
    return ans;
}

int main(){

    int n;
    cin>>n;

    fib(n);
    cout<<fib(n)<<endl;
    
}