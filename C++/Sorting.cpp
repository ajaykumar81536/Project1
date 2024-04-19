# include<iostream>
using namespace std;

int main() {
    int i, j, Mini;

    int arr[8] = {8,7,6,15,14,13,2,1};
    cout<<"unsorted array"<<endl;
    for(int i=0; i<8; i++) {
        cout<<arr[i]<<"  " ;
    }

       for(i=0; i<8; i++) {

        for(j=i+1; j<8; j++) {
            if(arr[i]> arr[j]) {
                // Mini = arr[i];
                // arr[i] = arr[j];
                // arr[j] = Mini;
                swap(arr[i], arr[j]);
            }
        }
       } cout<<endl;
       cout<<"sorted array" <<endl;
       for(i=0; i<8; i++) {
        cout<<arr[i] <<"  " ;
       }
       return 0;
}