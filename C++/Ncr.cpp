# include<iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact = fact*i;
    }
    return fact;
}
int Ncr(int n, int r) {
    int num = factorial(n);
    int den = factorial(r)*factorial(n-r);
    int ans = num/den;

    return ans;
}

int main() {
    int a,b;
    cout<<"enter the value of a and b : " <<endl;
    cin>>a >>b;
    cout <<Ncr(a, b);
}