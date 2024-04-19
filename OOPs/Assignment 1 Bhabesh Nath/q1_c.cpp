#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

class CustomString {
private:
    char *data;  // Pointer to character array to store the string

public:
    // Constructor to initialize the object with an empty string
    CustomString() {
        data = new char[1];
        data[0] = '\0';
    }

    // Constructor to initialize the object with a given string
    CustomString(const char *str) {
        data = new char[strlen(str) + 1];
        sanitizeAndCopy(str);
    }

    // Copy constructor
    CustomString(const CustomString &other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    // Destructor to release memory
    ~CustomString() {
        delete[] data;
    }

    // Function to get the length of the stored string
    int length() const {
        return strlen(data);
    }

    // Function to concatenate two CustomString objects
    CustomString operator+(const CustomString &other) const {
        CustomString result;
        result.data = new char[length() + other.length() + 1];
        strcpy(result.data, data);
        strcat(result.data, other.data);
        return result;
    }

    // Function to concatenate and store the result in the calling object
    CustomString &operator+=(const CustomString &other) {
        char *temp = new char[length() + other.length() + 1];
        strcpy(temp, data);
        strcat(temp, other.data);
        delete[] data;
        data = temp;
        return *this;
    }

    // Overloaded assignment operator
    CustomString &operator=(const CustomString &other) {
        if (this != &other) {
            delete[] data;
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        }
        return *this;
    }

    // Overloaded << operator for output
    friend std::ostream &operator<<(std::ostream &out, const CustomString &str) {
        out << str.data;
        return out;
    }

    // Overloaded >> operator for input
    friend std::istream &operator>>(std::istream &in, CustomString &str) {
        char buffer[256];  // Assuming a maximum input length of 255 characters
        in.getline(buffer, sizeof(buffer));
        str.sanitizeAndCopy(buffer);
        return in;
    }

    // Function to check if two CustomString objects are equal
    bool operator==(const CustomString &other) const {
        return strcmp(data, other.data) == 0;
    }

    // Function to check if one CustomString is smaller than the other
    bool operator<(const CustomString &other) const {
        return strcmp(data, other.data) < 0;
    }

private:
    // // Helper function to sanitize and copy the input string
    // void sanitizeAndCopy(const char *str) {
    //     char *temp = new char[strlen(str) + 1];
    //     int j = 0;
    //     bool previousSpecialSymbol = false;
    //     for (size_t i = 0; i < strlen(str); i++) {
    //         if (islower(str[i]) || str[i] == ',' || str[i] == ';' ||
    //             str[i] == '\'' || str[i] == '.' || str[i] == '!' ||
    //             str[i] == '?' || str[i] == ' ') {
    //             temp[j++] = str[i];
    //             previousSpecialSymbol = false;
    //         } else if (!previousSpecialSymbol) {
    //             temp[j++] = str[i];
    //             previousSpecialSymbol = true;
    //         }
    //     }
    //     temp[j] = '\0';
    //     delete[] data;
    //     data = temp;
    // }
    string validateAndClean(const string& input) {
        string result;
        bool prevSpecial = false;

        for (char c : input) {
            if (islower(c) || c == ',' || c == ';' || c == '\'' || c == '.' || c == '!' || c == '?' || c == ' ') {
                if (!(prevSpecial && (c == ',' || c == ';' || c == '\'' || c == '.' || c == '!' || c == '?'))) {
                    result += c;
                    prevSpecial = (c == ',' || c == ';' || c == '\'' || c == '.' || c == '!' || c == '?');
                }
            }
        }

        return result;
    }
};

int main() {
    CustomString s1, s2, s3;
    std::cout << "Enter string 1: ";
    std::cin >> s1;
    std::cout << "Enter string 2: ";
    std::cin >> s2;

    s3 = s1 + s2;
    std::cout << "Concatenation using + operator: " << s3 << std::endl;

    s1 += s2;
    std::cout << "Concatenation using += operator (result in s1): " << s1 << std::endl;

    std::cout << "Length of s1: " << s1.length() << std::endl;
    std::cout << "Length of s2: " << s2.length() << std::endl;

    if (s1 == s2) {
        std::cout << "s1 and s2 are equal." << std::endl;
    } else {
        std::cout << "s1 and s2 are not equal." << std::endl;
    }

    if (s1 < s2) {
        std::cout << "s1 is smaller than s2." << std::endl;
    } else {
        std::cout << "s1 is not smaller than s2." << std::endl;
    }

    return 0;
}
