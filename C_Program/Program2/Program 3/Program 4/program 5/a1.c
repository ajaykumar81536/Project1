# include<stdio.h>
 
 int main() {
//     int age = 22;
//     int *ptr = &age;
   
//    printf("ptr1 = %u", ptr);
//    ptr++;
//    printf("ptr value2= %u", ptr--);
//    printf("ptr valur =%u", ptr);

float price = 100.00;
float *ptr = &price;
printf("value 1 ptr++= %u", ptr++);
 
 printf("price value1 =%u \n", ptr);
 ptr++;
 printf("price value2 =%u \n", ptr);
 ptr++;
 printf("price value1 =%u \n", ptr);
 ptr--;
 printf("value original =%u\n", ptr);

    return 0;
 }