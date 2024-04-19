#include<iostream>
using namespace std;

struct student {
    int rollno;
    char name[20];
    
};

int main() {

struct student s1 = {60,"Ajay"};

struct student *ptr = &s1; // creating a pointer (ptr) name , store address of s1

cout<<"s1 ka roll no , s1.rollno  "<<s1.rollno<<endl;  // directly accessing roll no of student s1
cout<<"s1 ka roll no ptr -> rollno  "<< ptr -> rollno <<endl; // accessing roll no of s1 by pointer ptr
cout<<"s1 ka name  "<< ptr->name<<endl;
}