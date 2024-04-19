# include <iostream>
using namespace std;

int power(int n){
    //base case
    if(n == 0)
    return 1;
    
    // recursive cases
    int smallerProblem = power(n-1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;
}

int main(){

    int n;
    cin>>n;

    power(n);
    cout<<power(n)<<endl; 


}

