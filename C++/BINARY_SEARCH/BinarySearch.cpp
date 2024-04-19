# include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key) {
    int start =0;
    int end = size-1;

    int mid = (start + end )/ 2;

    while(start <= end) {
        if(arr[mid]==key) {
          return mid;
        }
        if(mid<key) {
            start=mid+1;
        } else {
            end = mid-1;
        }
        mid = (start + end) /2;
    }
     return -1;
}

int main() {

    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {1,4,5,6,8};

    int evenIndex = BinarySearch(even, 6, 6);
    cout<<"index of 6 is : "<< evenIndex <<endl;

    int oddIndex = BinarySearch(odd, 5, 8);
    cout<<"index of 8 is : "<< oddIndex <<endl;

}