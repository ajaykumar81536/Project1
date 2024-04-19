# include <iostream>
# include <queue>
using namespace std;

int main() {

    priority_queue <int> maxi;
    //maxim heap.

    priority_queue <int, vector<int>, greater<int> > mini;
    //minim heap.

    maxi.push(2);
    maxi.push(3);
    maxi.push(5);
    maxi.push(6);
    maxi.push(0);

    cout<<"size of maxi "<<maxi.size() <<endl;
    int n = maxi.size();
    for(int i=0; i<n; i++) {
        cout<<maxi.top()<<" ";
        maxi.pop();
    } 
    cout<<endl;

    mini.push(2);
    mini.push(3);
    mini.push(5);
    mini.push(6);
    mini.push(0);
    
    cout<<"Size of mini " <<mini.size() <<endl;
    int m = mini.size();
    for(int i=0; i<m; i++) {
        cout<<mini.top()<<" ";
        mini.pop();

    }
}