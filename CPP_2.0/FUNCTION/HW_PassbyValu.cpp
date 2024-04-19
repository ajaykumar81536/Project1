#include<iostream>
using namespace std;

// pass by value
/*
int update(int a) {
    a = a-5;
    return a;
    
}

int main() {
    int a = 15;
    update(a);
    cout<< a <<endl;     

} */

// 2nd HW PASS BY REFERENCE

int update(int a) {
    int ans = a*a;
    return ans;
}
int main() {
    int a = 14;
    a = update(a);
    cout<< a <<endl;
}