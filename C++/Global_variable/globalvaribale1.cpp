# include <iostream>
using namespace std;

# define pi 3.22

int main() {

    int a = 5;
    int h = 10;

    double area = pi * a * a;
    cout<< area <<endl;

    double cylinderArea = pi * a * a * h;
    cout<< cylinderArea <<endl;

    return 0;
}