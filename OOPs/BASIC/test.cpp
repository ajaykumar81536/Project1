#include <iostream>

class MyConstant;

class MyClass {
public:
    int value;

public:
    MyClass(int val) : value(val) {
        std::cout << "Constructor called with value: " << value << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called for value: " << value << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << "MyClass Object: " << obj.value;
        return os;
    }

    MyClass operator+(const MyClass& other) const {
        return MyClass(this->value + other.value);
    }

    MyClass& operator+=(const MyConstant& constant);
};

class MyConstant {
private:
    int constant;

public:
    MyConstant(int val) : constant(val) {}

    int getConstant() const {
        return constant;
    }

    friend MyClass operator+(const MyClass& obj, const MyConstant& constant);
    friend MyClass& MyClass::operator+=(const MyConstant& constant);
};

MyClass operator+(const MyClass& obj, const MyConstant& constant) {
    return MyClass(obj.value + constant.getConstant());
}

MyClass& MyClass::operator+=(const MyConstant& constant) {
    this->value += constant.getConstant();
    return *this;
}

int main() {
    MyClass obj1(5);
    MyClass obj2(10);

    std::cout << "obj1: " << obj1 << std::endl;
    std::cout << "obj2: " << obj2 << std::endl;

    MyClass resultAdd = obj1 + obj2;
    std::cout << "Result of obj1 + obj2: " << resultAdd << std::endl;

    MyConstant constant(7);
    MyClass resultAddConstant = obj1 + constant;
    std::cout << "Result of obj1 + constant: " << resultAddConstant << std::endl;

    obj1 += constant;
    std::cout << "Result of obj1 += constant: " << obj1 << std::endl;

    return 0;
}

