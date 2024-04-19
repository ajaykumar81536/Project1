#include <iostream>
using namespace std;

class SymbolString {
private:
    string symbols;

public:
    SymbolString() {
        symbols = "";
    }

    SymbolString(const std::string& input) {
        symbols = validateAndClean(input);
    }

    SymbolString& operator=(const SymbolString& other) {
        if (this != &other) {
            symbols = other.symbols;
        }
        return *this;
    }

    friend ostream& operator<<(ostream& os, const SymbolString& obj) {
        os << obj.symbols;
        return os;
    }

    friend istream& operator>>(istream& is, SymbolString& obj) {
        string input;
        is >> input;
        obj.symbols = obj.validateAndClean(input);
        return is;
    }

    int size() const {
        return symbols.length();
    }

    int length() const {
        return symbols.length();
    }

    SymbolString operator+(const SymbolString& other) const {
        return SymbolString(symbols + other.symbols);
    }

    SymbolString& operator+=(const SymbolString& other) {
        symbols += other.symbols;
        return *this;
    }

    bool operator==(const SymbolString& other) const {
        return symbols == other.symbols;
    }

    bool operator<(const SymbolString& other) const {
        return symbols < other.symbols;
    }

private:
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
    SymbolString S1, S2, S3;

    cout << "Enter a valid symbol string for S1: ";
    cin >> S1;

    cout << "Enter a valid symbol string for S2: ";
    cin >> S2;

    S3 = S1 + S2;
    S1 += S2;

    cout << "S1: " << S1 << std::endl;
    cout << "S2: " << S2 << std::endl;
    cout << "S3: " << S3 << std::endl;

    cout << "Size of S1: " << S1.size() << std::endl;
    cout << "Length of S1: " << S1.length() << std::endl;

    if (S1 == S2) {
        cout << "S1 and S2 are equal." << std::endl;
    } else {
        cout << "S1 and S2 are not equal." << std::endl;
    }

    if (S1 < S2) {
        cout << "S1 is smaller than S2." << std::endl;
    } else {
        cout << "S1 is not smaller than S2." << std::endl;
    }

    return 0;
}
