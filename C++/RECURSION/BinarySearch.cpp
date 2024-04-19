# include <iostream>
using namespace std;

void print(int arr[], int s, int e){
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}


bool binarySearch(int arr[], int s, int e, int k){
     // base case
     //element not found

     cout<<endl;
     print(arr, s, e);
     if(s>e){
        return false;
     } 
       int mid = s + (e-s)/2;
       cout<<"value of mid arr : "<<arr[mid]<<endl;

     // element found
     if(arr[mid] == k){
        return true;
     }
     // recursiv call
     if(arr[mid] < k){
        //right side
        return binarySearch(arr, mid+1, e, k);
    
     } else {
        //left side
        return binarySearch(arr, s, mid-1, k);
     }

}

int main () {
    int arr[12] = {2,5,6,7,12,16,18,20,25,28,30,35};
    
    int k = 35;

int ans = binarySearch(arr, 0, 11, k);

cout<<"present or absent : "<<ans<<endl;

}