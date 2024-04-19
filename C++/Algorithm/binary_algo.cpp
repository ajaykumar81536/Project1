# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

int main () {
    vector <int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(8);
    v.push_back(12);

    cout<<"finding 8 : "<<binary_search(v.begin(), v.end(), 8) <<endl;
    cout<<"finding 2 : "<<binary_search(v.begin(), v.end(), 2) <<endl;

    int a = 5;
    int b = 8;

    cout<<"max " << max(a,b)<<endl;
    cout<<"mini "<< min(a,b)<<endl;
     
    swap(a,b);
    cout<<"a = " <<a <<endl;
    cout<<"b = " <<b <<endl;

     string ab = "abcdef";
     cout<<"before reverse of ab  "<<ab<<endl;
    reverse(ab.begin(),ab.end());
    cout<<"reverse order of ab  " <<ab<<endl;



}