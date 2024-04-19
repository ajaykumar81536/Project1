# include <iostream> 
using namespace std;

int main() {

    int num = 5;
    int *p1 = &num;
    cout<< *p1 <<endl;
    cout<<"address of p1 " << p1 <<endl;
    cout<< "size of *p1 " << sizeof(*p1) <<endl;
    cout<< "size of p1 " << sizeof(p1) <<endl;

    int *q = p1;
    int *a = p1;
    cout<< *q <<endl;
    cout << *a <<endl;

    cout<<"addresses.." << p1 << "  " << q <<endl;
    cout<< "values..." <<*p1 <<"  " <<*q <<endl;
  

   cout<<p1++<<"  " <<++p1;
}