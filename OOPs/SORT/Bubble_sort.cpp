#include<iostream>
using namespace std;

void inputarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int swapping(int *arr, int *brr){
int temp;
temp = *arr;
*arr=*brr;
*brr=temp;
}

void bubblesort(int arr[5], int n){

int i,j;
for(i=0; i<n-1; i++){
    for (j=0; j<n-i-1; j++){
        if(arr[j] > arr[j+1]){
            swapping(&arr[j],&arr[j+1]);
        }
    }
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
 

bubblesort(arr, size);
cout<<"sorted array : ";
printing(arr,size);

}