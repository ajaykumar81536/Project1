#include<iostream>
#include<fstream>

using namespace std;

int main() {

    //connecting our program with file with output "pipe"
    ofstream output("sample1.txt");

    // input name
    cout<<"Enter your name :";
    string name;
    cin>>name;

    // writting this name into the file
    //name--> into the sample1 file
    output<<"My name is " + name;
    

    // read from the file
    ifstream input("sample1.txt");
    string s1;
    input>>s1;
    getline(input, s1);

}