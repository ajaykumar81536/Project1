# include<iostream>
using namespace std;

   void print(int arrr[], int n) {

    cout << endl << sizeof(arrr) <<endl;

    for(int i=0; i<n; i++){
        cout<<arrr[i];
    }
   
   }

int main() {
    // Difference b/w int array and character arrays : 

   /* int arr[5] = {1,2,3,4,5};
    char ch[6] = {'a','b','c','d','e'};

    int *ptr = &arr[0];
    cout<< ptr <<endl;
    cout << *ptr <<endl;
    
    char *c = &ch[0];
    cout<< c <<endl;
    cout << *c <<endl;
     */



   int arrr[6] = {1,2,3,4,5,6};
   char ch2[6] = {"abcde"}; //or we can put '' type ;


   cout<< "first : " << endl;
   print(arrr, 6);
   cout<<endl;
   cout<<"second : "<<endl;
   print(arrr+3, 3);
   cout<<endl;

   cout<<"third :" <<endl;
   print(arrr+0, 6);
   cout <<endl;

   

return 0;

}