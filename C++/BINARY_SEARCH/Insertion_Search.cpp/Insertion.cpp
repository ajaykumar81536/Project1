# include<iostream>
using namespace std;

int main() {
    int arr[5] = {5,4,3,2,1};
    
    for(int i=0; i<5; i++) {
        cout<<arr[i] <<"  " <<endl;
    }

    for(int i=1; i<5; i++) {

        for(int j=i-1; j>=0; j--){
           if(arr[j] > arr[i]) {
            int temp = arr[j];
            arr[i-1] = arr[i];
            arr[i] = arr[j];

           } 
        }
    }
    
}