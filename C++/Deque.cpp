# include<iostream>
# include<deque>
using namespace std;

int main() {
    deque<int> d;

    d.push_back(2);
    d.push_front(1);

    cout<<"first Index Element " << d.at(1)<<endl;

    cout<<"front " << d.front()<<endl;
    cout<<"back " << d.back()<<endl;

    cout<<" empty or Not -> " << d.empty() <<endl;

    cout<<"before erase " << d.size()<<endl;
    for(int i:d) {
        cout<<i<<endl;
    }

    d.erase(d.begin(), d.begin()+1);

    cout<<"After Erase "<<d.size() <<endl;

}