#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class SymbolString {
private:
    char* data; // Dynamic array to store the string of valid symbols
    int length; // Length of the stored string

    // Function to check if a character is a valid symbol
    bool isValidSymbol(char c) {
        const char validSymbols[] = "0123456789+-*/%. ";
        for (int i = 0; validSymbols[i] != '\0'; i++) {
            if (c == validSymbols[i]) {
                return true;
            }
        }
        return false;
    }

    // Function to convert the input string to a valid form
    char* convertToValidForm(const char* input) {
        char* validForm = new char[strlen(input) + 1];
        int j = 0; // Index for validForm

        for (int i = 0; input[i] != '\0'; i++) {
            if (isValidSymbol(input[i])) {
                // Remove multiple occurrences of the same special symbol
                if (i > 0 && input[i] == input[i - 1]) {
                    continue;
                }
                validForm[j++] = input[i];
            }
        }
        validForm[j] = '\0';

        return validForm;
    }

public:
    // Constructor to initialize with a valid symbol string
    SymbolString(const char* input) {
        data = convertToValidForm(input);
        length = strlen(data);
    }

    // Destructor to release dynamically allocated memory
    ~SymbolString() {
        delete[] data;
    }

    // Function to get the length of the stored string
    int getLength() const {
        return length;
    }

    // Overloaded assignment operator
    SymbolString& operator=(const SymbolString& other) {
        if (this == &other) {
            return *this;
        }

        delete[] data;
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
        length = other.length;

        return *this;
    }

    // Overloaded << operator to display the string
    friend std::ostream& operator<<(std::ostream& out, const SymbolString& s) {
        out << s.data;
        return out;
    }

    // Overloaded >> operator to input a string
    friend std::istream& operator>>(std::istream& in, SymbolString& s) {
        char input[1000]; // Assuming a maximum input length of 1000 characters
        in >> input;
        s = SymbolString(input);
        return in;
    }

    // Overloaded + operator to join two SymbolStrings
    SymbolString operator+(const SymbolString& other) const {
        char* combinedData = new char[length + other.length + 1];
        strcpy(combinedData, data);
        strcat(combinedData, other.data);
        SymbolString result(combinedData);
        delete[] combinedData;
        return result;
    }

    // Overloaded += operator to append another SymbolString
    SymbolString& operator+=(const SymbolString& other) {
        char* combinedData = new char[length + other.length + 1];
        strcpy(combinedData, data);
        strcat(combinedData, other.data);
        delete[] data;
        data = combinedData;
        length += other.length;
        return *this;
    }

    // Function to check if two SymbolStrings are equal
    bool operator==(const SymbolString& other) const {
        return strcmp(data, other.data) == 0;
    }

    // Function to check if the current SymbolString is smaller than another
    bool operator<(const SymbolString& other) const {
        return strcmp(data, other.data) < 0;
    }
};

int main() {
    SymbolString s1("1+2*3");
    SymbolString s2("4-5.6/7 8%");
    SymbolString s3 = s1 + s2;

    std::cout << "s1: " << s1 << ", Length: " << s1.getLength() << std::endl;
    std::cout << "s2: " << s2 << ", Length: " << s2.getLength() << std::endl;
    std::cout << "s3: " << s3 << ", Length: " << s3.getLength() << std::endl;

    s1 += s2;
    std::cout << "s1 after += s2: " << s1 << ", Length: " << s1.getLength() << std::endl;

    if (s1 == s2) {
        std::cout << "s1 is equal to s2." << std::endl;
    } else {
        std::cout << "s1 is not equal to s2." << std::endl;
    }

    if (s1 < s3) {
        std::cout << "s1 is smaller than s3." << std::endl;
    } else {
        std::cout << "s1 is not smaller than s3." << std::endl;
    }

    return 0;
}
