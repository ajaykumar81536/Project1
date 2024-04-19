# include <iostream>
using namespace std;

int main() {

    int n; 
    cin>>n;
 
 /*
    int *arr = new int[n];
     
     //taking input in 1D arrays
     for(int i=0; i<n; i++){
        cin>> arr[i];
     }

     //taking output in 1D arrays
     for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
     }

     */
    //taking 2D arrays....

    int **arr = new int *[n];
    for(int i=0; i<n; i++){
        arr[i]= new int[n];
    }

    //taking input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> arr[i][j];    
        } 
    }
      cout<<endl;
    //taking output

     for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            cout<< arr[i][j]<< "  ";
        } cout<<endl;
    }

}
