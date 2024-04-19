#include<stdio.h>

int main () {

    int terms;
    int nxt;
    int i =3;
    scanf("Enter the terms : %d", &terms);
     
    int num1 =0, num2 = 1;
    printf("fibonacci series is :%d%d /n",num1,num2);

       while(i<=terms){

        nxt = num1 + num2 ;
        num1 = num2;
        num2 = nxt;
        i++;
         //printf("fibonacci series is :%d \n",nxt);
       } 
                printf("fibonacci series is :%d \n",nxt);
      return 0;
    }
