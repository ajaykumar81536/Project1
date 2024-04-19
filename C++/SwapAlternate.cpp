# include<iostream>
using namespace std;

void PrintArray(int array[], int size) {
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    } cout<<endl;
}

void SwapAlternate(int array[], int size) {
    for(int i=0; i<size; i+2) {
        if(i+1<size) {
            swap(array[i], array[i+1]);

        }
    }
}

int main() {
    
    int array[6] = {1,4,6,8,6,3};
    int array2[4] = {1,3,4,2};

    SwapAlternate(array, 6);
    SwapAlternate(array2, 4);

    PrintArray(array, 6);
    PrintArray(array2, 4);
}