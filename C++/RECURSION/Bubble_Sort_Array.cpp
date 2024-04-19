# include <iostream>
using namespace std;

void sortedArray(int arr[], int size) {

    //base case
    if(size ==0 || size ==1){
        return ; //allready sorted
    }
    //1st case solve karlo baki recursion sambhal lega
    for(int i=0; i<size; i++){
        if(arr[i]> arr[i+1]){
        swap(arr[i+1], arr[i]);

    }
}
sortedArray(arr, size-1);
}



int main() {

    int arr[5] = {10,1,6,4,9};

    sortedArray(arr, 5);

    for(int i=0; i<5; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}