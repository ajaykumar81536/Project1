# include<iostream>
using namespace std;

    // int a;
    // int b; 
    // cout<<"enter the value of A : " <<endl;
    // cin>>a;
    // cout<<"enter the value of B : " <<endl;
    // cin>>b;
    
    // if(a>b) {
    //     cout<<"A is greater the B" <<endl;
    // } else {
    //     cout<<"A is lesser than B " <<endl;
    // }
    // }

// int a;
// cout<<"enter the value of a :" <<endl;
// cin>>a;

// if(a>0) {
//     cout<<"A is Positive number"<<endl;

// } else if(a<0) {
//     cout<<"A is negative number" <<endl;
// }else {
//     cout<<"A is zero";
// }
// }
// int n;
// cout<<"Which CountingTable u want to know :"<<endl;
// cin>>n;
// int i=1;
// while(i<=n) {
//     cout<<i<<" ";
//     i = i+1;

// }
int main() {
int n;
cout<<"enter the value for summation :" <<endl;
cin>>n;
int i = 1;
int sum = 0;
while(i<=n) {
    sum = sum + i;
    i = i+1;
} cout<<"summation of n numbers is : "<<sum<<endl;
}

