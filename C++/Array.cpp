# include<iostream>
using namespace std;

int main() {
    
    int num[15];

    cout<< endl <<"value at 14 index : " << num[14] << endl;

    // cout<< endl <<"value at 26 index : " << num[26] << endl;

    int second[5] = {1,3,5,8,10};

    cout<< endl <<"value at 2 index : " << second[2] << endl;
    cout<< endl <<"value at 4 index : " << second[4] << endl;
    // cout<< endl <<"value at 10 index : " << second[10] << endl;

    int third[10] = {1,3,2,5,6,6,6,1,2};
     
     cout<<endl <<"Print the Array : " <<endl;
      int index=10;
      for(int i = 1; i<index; i++){
        cout<<third[i]<< "  " ;

      }
     cout<< endl <<"value at 4 index : " << third[4] << endl;
     cout<< endl <<"value at 11 index : " << second[11] << endl;
        // store garbage value

    
    cout<< endl <<"every thing is fine "  << endl;
}