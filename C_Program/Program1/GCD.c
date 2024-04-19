#include<stdio.h>

int main() {
    //find GCD of two numbers
    int a,b;
    int rem;
    scanf("%d%d", &a, &b);

do 
 {
    rem = a%b;
    a=b;
    b= rem;
    
} 
while(b!=0);
printf("%d", a);


return 0;
}