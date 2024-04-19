#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

using namespace std;

class ValidString {
private:
  char *stringg;
  int size;

public:
  // Minimal data members
  char *getStr() { return stringg; }
  int getSize() { return size; }

  // Constructors
  ValidString() {
    stringg = new char[1];
    stringg[0] = '\0';
    size = 0;
  }
  ValidString(const char *str) {
    this->stringg = new char[strlen(str) + 1];
    strcpy(this->stringg, str);
    size = strlen(str);
  }

  // Overload operators
  ValidString &operator=(const ValidString &other) {
    if (this != &other) {
      delete[] stringg;
      stringg = new char[strlen(other.stringg) + 1];
      strcpy(stringg, other.stringg);
      size = other.size;
    }
    return *this;
  }

  friend ostream &operator<<(ostream &os, const ValidString &vs) {
    os << vs.stringg;
    return os;
  }

  friend istream &operator>>(istream &is, ValidString &vs) {
    char buf[1024];
    is.getline(buf, 1024);
    vs.stringg = new char[strlen(buf) + 1];
    strcpy(vs.stringg, buf);
    vs.size = strlen(buf);
    return is;
  }

  // User functions
  int length() { return size; }

  ValidString operator+(const ValidString &other) {
    ValidString newStr;
    newStr.size = size + other.size;
    newStr.stringg = new char[newStr.size + 1];
    strcpy(newStr.stringg, stringg);
    strcat(newStr.stringg, other.stringg);
    return newStr;
  }

  // void operator+=(const ValidString &other) {
  //   size += other.size;
  //   stringg = realloc(stringg, size + 1);
  //   strcat(stringg, other.stringg);
  // }
  ValidString& operator+=(const ValidString& other) {
        size += other.size;
        stringg += other.stringg;
        
        return *this;
    }


  bool operator==(const ValidString &other) {
    return size == other.size && strcmp(stringg, other.stringg) == 0;
  }

  bool operator<(const ValidString &other) {
    return strcmp(stringg, other.stringg) < 0;
  }

  // Input validation
  // void validateInput() {
  //   // Remove multiple occurrences of special symbols
  //   int i = 0;
  //   while (i < size) {
  //     if (stringg[i] == ',' || stringg[i] == ';' || stringg[i] == '\'' || stringg[i] == '.' ||
  //         stringg[i] == '!' || stringg[i] == '?') {
  //       int j = i + 1;
  //       while (j < size && stringg[j] == stringg[i]) {
  //         j++;
  //       }
  //       if (j - i > 1) {
  //         for (int k = i + 1; k < j; k++) {
  //           remove(stringg + i, stringg + i + 1, size - i - 1);
  //           size--;
  //         }
  //         i = j - 1;
  //       }
  //     }
  //     i++;
  //   }
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

// int main() {
//     ValidString s1, s2, s3;
//     std::cout << "Enter string 1: ";
//     std::cin >> s1;
//     std::cout << "Enter string 2: ";
//     std::cin >> s2;

//     s3 = s1 + s2;
//     std::cout << "Concatenation using + operator: " << s3 << std::endl;

//     s1 += s2;
//     std::cout << "Concatenation using += operator (result in s1): " << s1 << std::endl;

//     std::cout << "Length of s1: " << s1.length() << std::endl;
//     std::cout << "Length of s2: " << s2.length() << std::endl;

//     if (s1 == s2) {
//         std::cout << "s1 and s2 are equal." << std::endl;
//     } else {
//         std::cout << "s1 and s2 are not equal." << std::endl;
//     }

//     if (s1 < s2) {
//         std::cout << "s1 is smaller than s2." << std::endl;
//     } else {
//         std::cout << "s1 is not smaller than s2." << std::endl;
//     }

//     return 0;
// }

// 2nd main function 

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
    
    std::cout << "Length of s1: " << s1.length() << std::endl;
    std::cout << "Length of s2: " << s2.length() << std::endl;

    std::cout << "Is s1 equal to s2? " << (s1 == s2 ? "Yes" : "No") << std::endl;
    std::cout << "Is s1 smaller than s2? " << (s1 < s2 ? "Yes" : "No") << std::endl;

   

    return 0;
}

