# include <iostream>
using namespace std;

int main() {

    int arr[3][4];

    /* // input arrays in row wise
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++){
            cin >> arr[row][col];
} 
  }

   */

  // 2nd Input in col wise
  for(int col=0; col<4; col++) {
    for(int row=0; row<3; row++){
        cin >> arr[row][col];
    }
  }

  //output arrays
  for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cout<< arr[row][col] <<"  ";
        }
        cout<<endl;
}
}