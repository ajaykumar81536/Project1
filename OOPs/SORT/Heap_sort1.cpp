#include<iostream>
using namespace std;

int MaxHeap(int arr[], int n, int i){
    int largest = i;
    int left = 2*i +1;
    int right = 2*i +2;

    while(left <= n && arr[left]>arr[largest]){
        largest = left;
    }
    while(right <= n && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest != i){ // if largest are not equal to root then it may be updated so, swap them
        swap(arr[i],arr[largest]);

        MaxHeap(arr,n,largest); //again heapify the sub tree whose under the largest tree;
    }
}

int HeapSort(int arr[], int n){
    int i;
    for(i = n/2 -1; i >= 0; i--){  // build heap sort or change into max heap sort to apply heap sort
        MaxHeap(arr, n, i);  // making max heap
    }

    for(i = n-1; i>=0; i--){ //extract one by one from max heap

    swap(arr[0],arr[i]); //move current root to end

    MaxHeap(arr, n, 0); // heapify the rest parts

}
}

void display(int arr[], int n){
    int i ;
    for (i=0; i<=n-1; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}


int main() {

int arr[] = {15,23,4,5,8,10 ,26};
int n = sizeof(arr)/sizeof(arr[0]);  //size of the array

cout<<"Before Heap sort : ";
display(arr,n);

for(int i=n/2 -1;i>=0;i--){  // convert into max heap
	MaxHeap(arr,n,i);
}
cout<<"After Heapifying array : ";
display(arr,n);

HeapSort(arr,n);
cout<<"Sorted array : " ;
display(arr,n);


}