#include <iostream>
using namespace std;

class MyNumber {
public:
    int value;


    MyNumber(int val) : value(val) {}

   
    MyNumber operator+(const MyNumber& other) { // Overloading the + operator
        return MyNumber(value + other.value);
    }

   
    MyNumber& operator+=(const MyNumber& other) { // Overloading the += operator
        value += other.value;
        return *this;
    }

   
    friend std::istream& operator>>(std::istream& in, MyNumber& num) {
        in >> num.value;     // Overloading the >> operator (input stream)
        return in;
    }

    
    friend std::ostream& operator<<(std::ostream& out, const MyNumber& num) { 
        out << num.value;      // Overloading the << operator (output stream)
        return out;
    }

  
    MyNumber operator-(const MyNumber& other) {  // Overloading the - operator
        return MyNumber(value - other.value);
    }

   
    bool operator>=(const MyNumber& other) {  // Overloading the >= operator
        return value >= other.value;
    }
};

int main() {
    using namespace std;

    MyNumber num1(0);
    MyNumber num2(0);

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    MyNumber sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    num1 += num2;
    cout << "Updated num1: " << num1 << endl;

    MyNumber difference = num1 - num2;
    cout << "Difference: " << difference << endl;

    cout << "num1 is greater than or equal to num2: " << (num1 >= num2) << endl;

    return 0;
}
