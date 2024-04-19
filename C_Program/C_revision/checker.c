#include <stdio.h>

int main(){

    int a, b, c;
    printf("Enter the values : ");
    scanf("%d%d%d", &a,&b,&c);
    int D, d;
    d = D*D;
     d = b*b-4*a*c ;
    if(D >= 0) {
        printf("x1 : %d \n", (-b+D)/2*a);
        printf("x2 : %d \n", (-b-D)/2*a);
    }
    else {
        printf("%f",D);
    }
}