# include<iostream>
# include<stack>
  using namespace std;

int main() {
    stack <string> s;
    s.push("Ajay");
    s.push("Kumar");
    s.push("Ram");

    cout<<"Top Elements " << s.top() <<endl;

    s.pop();
     //remove from the Last Element due to stack fn.

    cout<<"Top Elements " << s.top() <<endl;

    s.pop();
    cout<<"Top Elements " << s.top() <<endl;

    cout<<"Size of Elements "<<s.size() <<endl;


}