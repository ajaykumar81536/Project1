# include<iostream>
 using namespace std;

 int main() {

    int a, b;
    cout<<"enter the value of a : " ;
    cin>>a;

    cout << "enter the value of b : ";
    cin >>b;

    char op;
    cout<<"enter which operation you want... : "<<endl;
    cin>>op;

    switch( op ) {
        case '+' : cout << (a+b) <<endl;
                   break;
        case '-' : cout << (a-b) <<endl;
                   break; 
        case '*' : cout << (a*b) <<endl;
                   break;
        case '/' : cout << (a/b) <<endl;
                       break;
        case '%' : cout << (a%b) <<endl;
                     break;
        case '%' : cout<<              
        default : cout << "enter the valid operation " <<endl;                   
    }
 }
 