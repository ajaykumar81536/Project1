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

void selectionShort(int arr[], int n){ //shorting by take min at first position
int i;
int j;
for (i=0; i<=n-2; i++){
    int mini = i;
    for (j=i; j<=n-1; j++){
        if(arr[mini]>arr[j]){
            swapping(&arr[mini], &arr[j]);
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
 

selectionShort(arr, size);
cout<<"sorted array : ";
printing(arr,size);

}