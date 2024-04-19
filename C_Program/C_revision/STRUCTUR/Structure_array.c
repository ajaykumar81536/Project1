#include<stdio.h>

struct Student {
    int roll_no;
    int age;
    float weight;
    char blood_grp;

};

int main() {
int i, j;
struct Student std[5];
for(i=0; i<2; i++) {

    printf("\n");

    printf("\n Enter the roll no student %d ", i+1);
    scanf("%d", &std[i].roll_no);
    printf("\nEnter the age of student %d ", i+1);
    scanf("%d", &std[i].age);
    printf("\nEnter the Weight of student %d ", i+1);
    scanf("%f", &std[i].weight);
    printf("\nEnter the Blood Group of student %d ", i+1);
    scanf("%s ", &std[i].blood_grp);
    printf("\n");

    printf("student :%d", i+1);
    printf("\n student's roll no : %d", std[i].roll_no);
    printf("\nStudent's age : %d", std[i].age);
    printf("\nStudent's weight : %f", std[i].weight);
    printf("\nStudent's Blood Group : %c ", std[i].blood_grp);

}
return 0;
}