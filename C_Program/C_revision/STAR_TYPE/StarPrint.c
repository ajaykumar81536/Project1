#include<stdio.h>

int main () {

    int n;
    scanf("%d",&n);

    int row=1;
    while(row<=n){

        int col =1;
        while(col<=row) {
            printf("%c  ", '*');
            col++;
        }
        printf("\n");
        row++;
    }
}