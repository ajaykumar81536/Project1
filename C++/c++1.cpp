# include<iostream>
using namespace std;

int main() {
//     int n;
//     cout<<"enter the value of N: " <<endl;
//     cin>>n;
    
//     int sum = 0;
//     for(int i=1; i<=n; i++) {
//         sum = sum + i;
       
//     }
//      cout<<sum<<endl;

int a = 0;
int b = 1;
int n;

cout<<"enter the value of Number: ";
cin>>n;
cout<<a<<endl;
cout<<b<<endl;

for(int i=1; i<=n; i++) {
    int nextnumber = a+b;
    cout<<nextnumber<<endl;
    a=b;
    b=nextnumber;
}
}

