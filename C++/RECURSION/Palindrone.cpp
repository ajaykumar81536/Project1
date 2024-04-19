# include <iostream>
using namespace std;

bool checkPalindrome(string name, int i, int j) {

    //base case
    if(i>j){
        return true;
    }

    if(name[i] != name[j]) {
        return false;

    } else {
        return checkPalindrome(name, i+1, j-1);
    }
}

int main(){

    string name ="aabbccbbaa";

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

    if(isPalindrome){
        cout<<"Its a Palindrome "<<endl;
    } else {
        cout<<"Its not a Palindrome"<<endl;
    }
}
