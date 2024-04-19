# include<iostream>
using namespace std;

int factorial(int n){

    //base case
    if(n == 0){
        return 1;
    }
     // recursive relation

     int smallerPb = factorial(n-1);
     int biggerpb = n * smallerPb;
     return biggerpb;

}

int main() {

    int n;
    cin>>n;

    int ans = factorial(n);
    
    cout<<ans<<endl;
}