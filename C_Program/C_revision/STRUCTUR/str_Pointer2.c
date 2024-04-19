#include<stdio.h>
#include<string.h>


struct student 
{
 int Roll_no;
 char subject;
 float marks_obtained;
 char Grade;

} std[5];

int main() {
     
     int i;
     struct student *ptr = &std[5];

    for(i=0; i<3; i++){
        ptr = &std[i];

    printf("student no : %d", i+1);
    printf("\n Enter the roll no : ");
    scanf("%d", &(ptr->Roll_no));
    printf("\n Enter the subject ");
    scanf("%s", &(ptr->subject));
    printf("\n Enter marks obtained ");
    scanf("%f",&(ptr->marks_obtained) );
    printf("\n Enter grade ");
    scanf("%c ", &(ptr->Grade));

printf("\n roll no %d", ptr->Roll_no);
printf("\n subject %s", ptr->subject);
printf("\n marks obtained %f", ptr->marks_obtained);
printf("\n grade %c", ptr->Grade);


    }
    return 0;
}
