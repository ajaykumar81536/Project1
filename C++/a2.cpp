# include<iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;

    int prod = 1;
    int sum = 0;
     
     while(n != 0) {
        int lastdigit = n%10;
        prod = prod*lastdigit;
        sum = sum + lastdigit;
         
         n = n/10;
     }
     int answer = prod - sum;
     cout<<answer;
}