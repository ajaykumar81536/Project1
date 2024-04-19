#include<iostream>
using namespace std;

class complex {
private:
    int a, b;

public:
    void setnumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void Print() {
        cout << a << " + " << b << "i" << endl;
    }

    friend complex sum(complex p, complex q);
};

complex sum(complex p, complex q) {
    complex r;
    r.setnumber((p.a + q.a), (p.b + q.b));
    return r;
}

int main() {
    complex c1, c2, result;
    c1.setnumber(2, 5);
    c1.Print();

    c2.setnumber(3, 6);
    c2.Print();

    result = sum(c1, c2);
    result.Print();

    return 0;
}
