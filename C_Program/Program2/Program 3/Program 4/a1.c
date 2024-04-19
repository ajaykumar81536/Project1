# include<stdio.h>
# include<math.h>
// function key best example;
// use of all type of argument and parameters;

float rectangleArea (float a, float b);
float circleArea (float radius);
float squareArea (float side);
 
 int main() {
    float a = 2.0;
    float b = 5.0;
    float radius =5.0;
    float side = 5.0;
    printf("rectangle area is : %f \n", rectangleArea(a, b));
    printf("Area of circle is : %f \n", circleArea(radius));

    printf(" Area of Square is : %f \n", squareArea(side));

return 0;
 }
  float rectangleArea (float a, float b) {
    return a*b;
  } 
float circleArea (float radius) {
    return 3.14*radius*radius;
}
float squareArea (float side) {
    return side*side;
}