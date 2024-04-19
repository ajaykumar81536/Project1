# include<stdio.h>
 int main() {
   int a, b, c;
   printf("enter a");
   scanf("%d", &a);

   printf("enter b");
   scanf("%d", &b);

   printf("enter c");
   scanf("%d", &c);

   int product = a*b*c;
   printf("Total Product of a.b.c : %d", product);
       return 0;    
    
     }