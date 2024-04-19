# include<stdio.h>
# include<math.h>
 
 int main() {
    int x;
    printf("enter a number divisible by 2 : ");
    scanf("%d", &x);
    printf("%d \n", x%2 == 0);
    return 0;
 }