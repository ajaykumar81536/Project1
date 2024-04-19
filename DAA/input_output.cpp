#include<iostream>
#include<fstream>  //header file for i/o and read the file


using namespace std;

int main() {

    string s1 = "hello, I am Ajay ";
    string new_s1;
   // opening file using constructor and writing it
    ofstream out("sample1.txt"); //write operation
    out<<s1;


    // opening file using constructor and reading from a file
    ifstream in("sample2.txt");
    //in>>new_s1;  // this line read(i/p) 1st line without space
    
    getline(in, new_s1);  // read whole 1 st line
    //getline(in, new_s1);   // read whole 2nd line
    
    cout<<new_s1<<endl;
    //cout<<new_s1;
    return 0;

}