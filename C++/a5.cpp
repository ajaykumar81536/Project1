# include<iostream>
using namespace std;

void linearsearch(int arr[], int n) {
for(int i = 0; i<n; i++) {
    if(arr[i] == 10) {
        cout<<"present"<<endl;
    } else if(arr[i] != 10) {
        cout<<"absent"<<endl;
    }} 
    
    } 

int main() {

    int arr[10] = {1,2,3,4,5,10};

    linearsearch(arr, 10);

}