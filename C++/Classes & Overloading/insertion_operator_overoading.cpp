#include<bits/stdc++.h>
using namespace std;

class Complex {
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }
    friend ostream& operator<<(ostream &o, Complex &c);
};

ostream & operator<<(ostream &o, Complex &c) {
    o << c.real << "+i" << c.img << endl;
    return o;
}

int main() {
    Complex c1(10, 7);
    cout << c1;
    operator<<(cout, c1);
    return 0;
}