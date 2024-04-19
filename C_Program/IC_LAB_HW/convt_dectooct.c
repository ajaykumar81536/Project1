// CONVERT DECIMAL TO OCTAL

#include<stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    int ans=0;
    int base = 1; 

    while(num!=0)
    {
    int rem = num%8;
    num= num/8;
    ans = ans + rem*base;
    base= base*10;
     
}
printf("%d", ans);
return 0;

 }
