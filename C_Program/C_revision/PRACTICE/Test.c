#include<stdio.h>

void exchange(int*a , int *b) {

    int tem;
    tem= *a;
    *a=*b;
    *b=tem;
}

int main() {

    int a = 5, b=15;
    exchange(&a, &b);
    printf("After exchange value is : %d \n %d", a,b);
}