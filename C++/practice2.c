# include<stdio.h>
# include<math.h>

int isInteger(int num, char ch) {
    if(num*2/2 == num) {
        return 1;
    } else {
        return 0;
    }

}

int main() {

    int a;
    char b;

    printf("enter the Integer or Character : ");
    scanf("%d, &a");
    scanf("%c, &b");
     
     isInteger(a, b);
    
    printf("%d, isInteger ");
}