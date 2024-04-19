# include<iostream>
using namespace std;

int FirstOccurance(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start+ (end-start) /2;
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } 
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else if(arr[mid] > key) {
            end = mid-1;
        }
        mid = start+ (end-start) /2;
    } 
     return ans;
}

int LastOccurance(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start+ (end-start) /2;
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } 
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else if(arr[mid] > key) {
            end = mid-1;
        }
        mid = start+ (end-start) /2;
    } 
     return ans;
}

int main() {

    int even[10] = {1,2,4,5,5,5,5,5,8};

    FirstOccurance(even, 10, 5);
    cout<<"first occurance of 5 is at : " << FirstOccurance <<endl;

    LastOccurance(even, 10, 5);
    cout<<"Last occurance of 5 is at : " << LastOccurance <<endl;
}
