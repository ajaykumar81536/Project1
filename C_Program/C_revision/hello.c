# include<stdio.h>
#include<math.h>

int main(){
    
    int a;
    printf("enter the value of a : ");
    scanf("%d", &a);

    int b;
    printf("enter the value of b : ");
    scanf("%d", &b);

    int power = pow(a,b);
    printf("power is : %d \n", power);

    int product = a*b;
   printf("product of a and b is : %d \n", product);

   double divide = a/b;
   printf("divide of a and b is : %f \n", divide);


}