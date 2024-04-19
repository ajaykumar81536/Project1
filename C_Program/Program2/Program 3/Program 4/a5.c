# include<stdio.h>

int main() {
    int age = 23;
    int *ptr = &age;
    int age2 = *ptr;

 printf("%u \n", &age);
 printf("%u \n", ptr);
 printf("%u \n", *ptr);
 printf("%u \n", *&age);
printf("%u", &ptr);
    return 0;
}