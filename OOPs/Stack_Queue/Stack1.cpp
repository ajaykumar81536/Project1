#include<iostream>
using namespace std;

#define n 10

class stack{
    int *arr;
    int top;
    public:

    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        
        if(top == n-1){
            cout<<"stack is overflow "<<endl;
            return;
        } else {
            top++;
            arr[top] = x;
        }
    }

    void pop(){
        if(top == -1){
            cout<<"There is no elements to pop from stack "<<endl;
            return;
        } else {
            top--;
        }
    }

    void Top(){
        cout<<arr[top]<<endl;
    }

    void empty(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
        } else {
            cout<<"Stack is not empty"<<endl;
        }
    }
};

int main(){
    
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.Top();
    st.pop();
    st.Top();
    st.empty();
    st.pop();
    st.pop();
    st.pop();
    st.empty();
}