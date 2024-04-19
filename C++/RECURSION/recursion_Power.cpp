# include <iostream>
using namespace std;

int power(int a, int b) {

    //base case 
    if(b == 0) {
        return 1;
    } 
    if(b == 1){
        return a;
    }

    int ans = power(a, b/2);

    //RECURSIVE CALL

    if(b % 2 == 0){
        //even power 
        return ans*ans;
    } else {
        //odd power
        return a*ans*ans;
    }


}

int main() {
    int a;
    int b;
    cin>>a>>b;
    
    power(a, b);
    cout<<power(a, b)<<endl;

}
