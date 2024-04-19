#include <iostream>
#include<fstream>

using namespace std;

int find_max_fib_index(int arr[], int n) {

    if (n == 0) {
        return -1;
    }

    int fib_prev = 0;
    int fib_curr = 1;
    int max_index = -1;

    for (int i = 0; i < n; i++) {

        if (arr[i] == fib_prev) {
            max_index += 1;
            int temp = fib_prev;
            fib_prev = fib_curr;
            fib_curr = fib_prev + temp;
        }

        else if (arr[i] < fib_prev) {
            continue; } // Move to the next element
        else {
            break;  // Stop if exceed
        }
    }

    return max_index;
}

int main() {

    
    int *array;
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    cout<<"Taking input from input1.txt file --> "<<endl;
    ifstream input("input1.txt"); //read from a file
    

    for (int i = 0; i<size; i++){
        input>>array[i];
    }
   
    int result = find_max_fib_index(array, size);
    input.close();

    
    ofstream output("output1.txt");  //write in a file
    output<<result;
    output.close();

    cout<<"Check Output1.txt file for Maximum_fibonacci_index  "<<endl;
    cout<<"Thanking You !! "<<endl;



    return 0;
}
