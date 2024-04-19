# include<iostream>
# include<vector>
using namespace std;

int main() {
    vector<int> v;

    vector<int> a(5,2);
    vector<int> last(a);
    cout<<"last " << a.back() <<endl;

    cout<<"Capacity of vector v : "<< v.capacity()<<endl;
    cout<<"Size of vector v  : "<< v.size()<<endl;

    v.push_back(1);
    cout<<"Capacity of vector v 1 : "<< v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of vector v 2 : "<< v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity of vector v 3 : "<< v.capacity()<<endl;
    cout<<"Size of vector v 3 : "<< v.size()<<endl;

    cout<<"Element ar 2nd Index : " <<v.at(2)<<endl;
    cout<<"Element ar 0th Index : " <<v.at(0)<<endl; 

    cout<<"Front " << v.front()<<endl;
    cout<<"back" <<v.back()<<endl;  
}