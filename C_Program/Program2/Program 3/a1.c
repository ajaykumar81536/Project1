# include<stdio.h>
# include<math.h>
// write a program to check if students are passed or failed..

int main() {
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);

   if(marks > 0 && marks <30) {
    printf("FAILED \n");}
    else if(marks >= 30 && marks <= 100) {
        printf("PASSED \n");
    }
    else if(marks > 100) {
        printf("wrong marks\n");}
     

marks >=30 ? printf("Passed") : printf("failed");
return 0;}