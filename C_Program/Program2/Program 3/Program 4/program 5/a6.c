# include<stdio.h>
# include<math.h>

typedef struct BankAccountdetails{
char name[100];
int acc;
int ifsc;

}BA ;

 int main() {
    BA acc1 = {"Ajay", 123, 23};
    BA acc2 = {"Munni", 124, 23};
    BA acc3 = {"Shoshila", 125, 23};

    printf("account details 1 : %s, %d, %d\n", acc1.name, acc1.acc, acc1.ifsc);
    printf("account details 2 : %s, %d, %d\n", acc2.name, acc2.acc, acc2.ifsc);
    printf("account details 3 : %s, %d, %d\n", acc3.name, acc3.acc, acc3.ifsc);


 return 0;
 }
