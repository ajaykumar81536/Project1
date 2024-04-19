# include<iostream>
using namespace std;


int main() {
      
   /*/ int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++){
            cout<< arr[row][col] <<"  ";
        }
        cout<<endl;
    } */

    // 2nd arrays input Output;;
        
    int arr2[3][5];
    
    for(int m=0; m<5; m++) {
        for(int n=0; n<3; n++){
            cin >> arr2[n][m];

        }
    }
    //output arrayss...
    for(int n=0; n<3; n++) {
        for(int m=0; m<5; m++){
            cout << arr2[n][m] <<"  ";

        }
        cout<<endl;
    }

}