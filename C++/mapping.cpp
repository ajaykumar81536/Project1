# include <iostream>
# include <map>
using namespace std;

int main() {
  map <int, string> m;

  m[1] = "Ajay";
  m[3] = "Kumar";
  m[8] = "babbar";
  m[5] = "love";
  
  m.insert( {9, "channel"} );
  
  cout<<"before erase" <<endl;
  for(auto i:m) {
    cout<<i.first <<"  "<< i.second <<endl;
  }
  cout<<"finding 5 : " << m.count(5)<<endl;

  m.erase(5);
  cout<<"After erase " <<endl;

  for(auto i:m) {
    cout<<i.first<<"  " <<i.second <<endl;

  }
  
  }