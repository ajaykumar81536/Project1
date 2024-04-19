#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class VALID_Stringg {
private:
    char* String_data;
    int Length_str;

public:

    VALID_Stringg() {    // Constructor to initialize an empty ValidString
        String_data = NULL;
        Length_str = 0;
    }

 
    VALID_Stringg(const char* input_str) {   // Constructor with a C-style string parameter
        Clean_nd_Validate(input_str);
    }


    ~VALID_Stringg() {    // Destructor
        delete[] String_data;
    }

 
    int getLength() const {   // Function to get the Length_str of the currently stored string
        return Length_str;
    }

    VALID_Stringg& operator=(const VALID_Stringg& other) {
        if (this == &other) {
            return *this;
        }
        delete[] String_data;
        Length_str = other.Length_str;
        String_data = new char[Length_str + 1];

        for (int i = 0; i < Length_str; ++i) {
            String_data[i] = other.String_data[i];
        }
        String_data[Length_str] = '\0'; // Null-terminate the string

        return *this;
    }

   
    friend std::ostream& operator<<(std::ostream& os, const VALID_Stringg& str) {  // Overloaded << operator (for output)
        os << str.String_data;
        return os;
    }

 
    friend std::istream& operator>>(std::istream& is, VALID_Stringg& str) {   // Overloaded >> operator (for input_str)
        char input_str[1024];
        is.getline(input_str, sizeof(input_str));
        str.Clean_nd_Validate(input_str);
        return is;
    }

  
    VALID_Stringg operator+(const VALID_Stringg& other) const {  // Overloaded + operator to join two VALID_Stringg
        int Total_len = Length_str + other.Length_str;
        char* joinString = new char[Total_len + 1];

        for (int i = 0; i < Length_str; ++i) {
            joinString[i] = String_data[i];
        }

        for (int i = 0; i < other.Length_str; ++i) {
            joinString[Length_str + i] = other.String_data[i];
        }

        joinString[Total_len] = '\0';

        VALID_Stringg result(joinString);
        delete[] joinString;
        return result;
    }

 
    VALID_Stringg& operator+=(const VALID_Stringg& other) {   // Overloaded += operator to concatenate and update the current VALID_Stringg
        *this = *this + other;
        return *this;
    }

  
    void Clean_nd_Validate(const char* input_str) {  // Helper function to clean and validate the input_str string
        int Position = 0;  // Position in the cleaned string
        char Prev_char = '\0';  // To track the previous character

    
        int inp_Len = 0;     
        while (input_str[inp_Len] != '\0') {
            inp_Len++;
        }

     
        String_data = new char[inp_Len + 1];

        for (int i = 0; i < inp_Len; i++) {
            char Current_char = input_str[i];

        
            if ((isdigit(Current_char)) || Current_char == '+' || Current_char == '-' ||
             Current_char == '*' || Current_char == '/' || Current_char == '%' || Current_char == '.' ||
                Current_char == ' ') {    // Check if the current character is valid

              
                if (Prev_char == '.' && !isdigit(Current_char)) {  // Check for a digit after a full stop
                  
                    continue;  // Skip this character
                }

          
                if (Current_char == Prev_char) {      // Replace multiple occurrences of the same special symbol with one occurrence
                    continue;
                }

                String_data[Position++] = Current_char;
                Prev_char = Current_char;
            }
        }

        String_data[Position] = '\0';
        Length_str = Position;
    }

 
    bool operator==(const VALID_Stringg& other) const {   // Overload the == operator for equality check
        if (Length_str != other.Length_str) {
            return false;
        }

        for (int i = 0; i < Length_str; i++) {
            if (String_data[i] != other.String_data[i]) {
                return false;
            }
        }

        return true;
    }

    bool operator>(const VALID_Stringg& other) const {   // Overloaded > operator to check if this string is greater than another
        for (int i = 0; i < Length_str && i < other.Length_str; ++i) {
            if (String_data[i] > other.String_data[i]) {
                return true;
            } else if (String_data[i] < other.String_data[i]) {
                return false;
            }
        }
        return Length_str > other.Length_str;
    }

    bool operator<=(const VALID_Stringg& other) const {   // Overloaded <= operator to check if this string is smaller or equal to another
        return !(*this > other);
    }
};

int main() {
    VALID_Stringg s1, s2, s3;

    std::cout << "Enter the string s1: ";
    std::cin >> s1;

    std::cout << "Enter the string s2: ";
    std::cin>> s2;

    std::cout << "s1:  " << s1 << std::endl;
    std::cout << "s2:  " << s2 << std::endl;
    std::cout << "s1 length :  " << s1.getLength() << std::endl;
    std::cout << "s2 length :  " << s2.getLength() << std::endl;

     s3 = s1 + s2;
    std::cout << "s3 = s1 + s2 :  " << s3 << std::endl;

   if (s1 > s2) {
        std::cout << "s1 is Greater than s2." << std::endl;
    } else {
        std::cout << "s1 is not Greater than s2." << std::endl;
    }

    if (s1 <= s2) {
        std::cout << "s1 is Smaller or equal to s2." << std::endl;
    } else {
        std::cout << "s1 is not Smaller or equal to s2." << std::endl;
    }

    s1 += s2;
    std::cout << "s1 after Joining--> s1 += s2 :  " << s1 << std::endl;
    
    return 0;
}
