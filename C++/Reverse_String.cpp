# include<iostream>
using namespace std;

void reverseName(char name[], int ln) {
    int s=0;
    int e=ln-1;
    while(s<e) {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int getLength(char name[]) {
       int count = 0;
    for(int i=0; name[i] !='\0'; i++) {
       count++;
    }
    return count;
}

int main() {
     
    char name[20];
    cout<<"Enter Your Name : "<<endl;
    cin>>name;

    cout<<"Your Name is  "<< name <<endl;

    int ln = getLength(name);
    cout<<"Length of name is : " << ln <<endl;

    reverseName(name, ln);
    cout<<"Your Reverse Name is : " << name;

return 0;
}