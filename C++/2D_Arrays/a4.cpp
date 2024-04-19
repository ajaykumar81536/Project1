# include<iostream>
using namespace std;

void getsum(int arr[], int n){
   int sum=0;
   for(int i=0; i<n; i++){
      sum = sum + arr[i];

   }
   cout<<sum;
}

int main() {

int n; 
cin>>n;

//creating variable arrays
int *arr = new int [5];

//taking input in arrays
for(int i=0; i<n; i++){
   cin>>arr[i];
}

//print out 
for(int i=0; i<n; i++){
   cout << arr[i]<<"  ";
}
cout<<endl;

getsum(arr, n);

}
