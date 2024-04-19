# include<stdio.h>
# include<math.h>
//Conditional operations

int main() {
    int age;
    printf("enter age :");
    scanf("%d", &age);
    
    if(age >= 18) {
        printf("they are adult\n");
        printf("they will be elligble for voting\n");
    }
    else if(age<18 && age>14)
     printf("teenager"); 
     return 0;
}