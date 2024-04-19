# include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    //base case
    if(size == 0){
        return 0;
    } 
    //recursive call

    if(arr[0] == key){
        return true;

        } else {
            int checkremaing = linearSearch(arr+1, size-1, key);
                return checkremaing;
        }
        
    }


int main() {

    int arr[5] = {2,4,5,6,9};
    int size = 5;
    int key = 1;

    bool ans = linearSearch(arr, size, key);
    cout << ans;
}