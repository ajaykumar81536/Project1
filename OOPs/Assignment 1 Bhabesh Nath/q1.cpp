#include <iostream>
#include <stdio.h>
#include <stdlib.h>


class ValidString {
private:
    char* stringg; // Dynamic character array to store the valid string
    int length; // Length of the valid string

public:
    // Constructor to initialize an empty ValidString
    ValidString() {
        stringg = nullptr;
        length = 0;
    }

    // Constructor to initialize ValidString with a given string
    ValidString(const char* inputStr) {
        // Allocate memory for the valid string
        stringg = nullptr;
        length = 0;

        // Process and store the valid symbols
        for (int i = 0; inputStr[i] != '\0'; i++) {
            if (isValidSymbol(inputStr[i])) {
                // Check if the symbol has already been added
                if (length == 0 || stringg[length - 1] != inputStr[i]) {
                    appendCharacter(inputStr[i]);
                }
            }
        }
    }

    // Destructor to free memory
    ~ValidString() {
        delete[] stringg;
    }

    // Function to get the length of the valid string
    int getLength() const {
        return length;
    }

    // Overload the assignment operator
    ValidString& operator=(const ValidString& other) {
        if (this == &other) {
            return *this;
        }
        
        // Delete the current string
        delete[] stringg;

        // Allocate memory for the new string
        stringg = nullptr;

        length = 0;

        // Copy and append the characters from the other object
        for (int i = 0; i < other.length; i++) {
            appendCharacter(other.stringg[i]);
        }

        return *this;
    }

    // Overload the << operator for output
    friend std::ostream& operator<<(std::ostream& os, const ValidString& validStr) {
        os << validStr.stringg;
        return os;
    }

    // Overload the >> operator for input
    friend std::istream& operator>>(std::istream& is, ValidString& validStr) {
        char input[256];
        is.getline(input, sizeof(input));
        validStr = ValidString(input);
        return is;
    }

    // Overload the + operator for concatenation
    ValidString operator+(const ValidString& other) const {
        ValidString result = *this;
        for (int i = 0; i < other.length; i++) {
            result.appendCharacter(other.stringg[i]);
        }
        return result;
    }

    // Overload the += operator for concatenation
    ValidString& operator+=(const ValidString& other) {
        *this = *this + other;
        return *this;
    }

 // Overload the == operator for equality check
    bool operator==(const ValidString& other) const {
        if (length != other.length) {
            return false;
        }

        for (int i = 0; i < length; i++) {
            if (stringg[i] != other.stringg[i]) {
                return false;
            }
        }

        return true;
    }

    bool operator<(const ValidString& other) const {
        return stringg < other.stringg;
    }

    // // Function to check if a character is a valid symbol
    // bool isValidSymbol(char ch) const {
    //     const char validSymbols[] = "abcdefghijklmnopqrstuvwxyz,;'.!? ";
    //     return strchr(validSymbols, ch) != nullptr;
    // }


    bool isValidSymbol(char ch) const {
     const char validSymbols[] = "abcdefghijklmnopqrstuvwxyz,;'.!? ";

      for (const char* ptr = validSymbols; *ptr != '\0'; ptr++) {
            if (*ptr == ch) {
             return true;
         }
     }

      return false;
    }

 // Function to append a character to the valid string
    void appendCharacter(char ch) {
     char* newStr = new char[length + 2];
    
    // Copy existing string (if any)
      if (stringg != nullptr) {
         for (size_t i = 0; i < length; i++) {
             newStr[i] = stringg[i];
         }
         delete[] stringg;
     }

    newStr[length] = ch;
    newStr[length + 1] = '\0'; // Null-terminate the new string
    stringg = newStr;
    length++;
}


    int compareStrings(const char* str1, const char* str2) const {
        while (*str1 && (*str1 == *str2)) {
            str1++;
            str2++;
        }

        return *str1 - *str2;
    }

    // Function to compare two ValidString objects
    bool isSmaller(const ValidString& other) const {
        return compareStrings(stringg, other.stringg) < 0;
    }
};

int main() {
    ValidString s1, s2, s3;

    // Input strings
    std::cout << "Enter string s1: ";
    std::cin >> s1;

    std::cout << "Enter string s2: ";
    std::cin >> s2;

    // Test various operations
    s3 = s1 + s2; // Joining two strings
    std::cout << "s3 = s1 + s2: " << s3 << std::endl;

    s1 += s2; // Joining and modifying s1
    std::cout << "s1 += s2: " << s1 << std::endl;
    
    std::cout << "Length of s1: " << s1.getLength() << std::endl;
    std::cout << "Length of s2: " << s2.getLength() << std::endl;

    std::cout << "Is s1 equal to s2? " << (s1 == s2 ? "Yes" : "No") << std::endl;
    std::cout << "Is s1 smaller than s2? " << (s1 < s2 ? "Yes" : "No") << std::endl;


   

    return 0;
}
