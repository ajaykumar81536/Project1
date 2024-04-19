#include<stdio.h>
#include<math.h>

int main(){

  
    float numerator;
    float denominator;
     int terms;

    scanf("%f%f", &numerator, &denominator);
   

    float num = numerator/denominator;
    float commonRto = num;
    float SeriesSum ;

    if((num > -1) && (num < 1)) {
        SeriesSum = 1/(1-commonRto);
        printf("Sum of This GP series is : %f", SeriesSum);

    }  else if ((num>1) || (num<-1)) {
       
        scanf("%d", &terms);
        SeriesSum = (1- pow(commonRto, terms))/(1-commonRto);
        printf("Sum of This GP series is : %f", SeriesSum);
    }
    return 0;
}