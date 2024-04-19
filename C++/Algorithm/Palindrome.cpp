# include <iostream>
using namespace std;

bool checkpalindrome(char ch[], int n) {
    int s = 0;
    int e = n-1;
    while(s <= e){
        if(ch[s] != ch[e]) {
          return 0;
        } else
        {
            s++;
            e--;
        }   
    }
    return 1;
}

int getlength(char ch[]) {
    int count = 0;
    for(int i=0; ch[i] != '\0'; i++) {
         count++;
    }
    return count;
}

int main() {

    char ch[100];
    cout<<"Enter Your Name : ";
    cin>>ch;
    cout<<endl;

    int len=getlength(ch);
    cout<<len<<endl;
    checkpalindrome(ch, len);
    cout<<checkpalindrome(ch,len)<<endl;
}