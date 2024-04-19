//POINTER IN STRUCTURE 

#include<stdio.h>

struct abc {
    int ax;
    int ay;
    int az;
};

int main() {

struct abc std = {0,1,0};
struct abc *ptr = &std;
scanf("%d", &(ptr->ax));


printf("1st output %d %d\n", (*ptr).ax, (*ptr).ay);
printf("2nd output %d %d %d\n ", ptr->ax,ptr->ay, ptr->az);
printf("3rd output %d %d \n",std.ax, std.ay );
printf(" 4th output %d %d \n", ptr, &std);
}