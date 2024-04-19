# include<iostream>
# include<queue>
 using namespace std;

 int main() {
    queue <string> q;

    q.push("Ajay ");
    q.push("kumar ");
    q.push("Ram");
    
    cout<<"Before pop "<<q.size() <<endl;
    cout<<"First Element " << q.front() <<endl;

    q.pop();
    // remove from front due to queue fn.

    cout<<"First Element "<<q.front() <<endl;

    cout<< "Size After pop " <<q.size() <<endl;
    
 }