#include<iostream>
using namespace std;

int swapping(int *arr, int *brr){
int temp;
temp = *arr;
*arr=*brr;
*brr=temp;
}

int InsertionShort(int arr[], int n){
int i;
int j;

for (i=0; i<=n-1; i++){
    j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swapping(&arr[j-1], &arr[j]);
        j--;
    }
}

}

void inputarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}


void printing(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
}

int main() {

int size;
cout<<"Enter the size of the array : ";
cin>>size;
// allocate memory using malloc
int * arr = (int * )malloc(sizeof(int)*size);

cout<<"Enter the input in the array "<<endl;
inputarray(arr, size);
 

InsertionShort(arr, size);
cout<<"sorted array : ";
printing(arr,size);

}