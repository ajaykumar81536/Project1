# include<iostream>
using namespace std;

void PrintCounting(int n) {
    //function body

    for(int i= 1; i<=n; i++) {
        cout<<i<<"  ";
    }
}

int main() {

    int a;
    cout<<"enter the num for count :" <<endl;
    cin>>a;

    //function call

    PrintCounting(a);

}