#include <iostream>

class Complex {
public:
    int real, imag;

    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator + (const Complex &obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        std::cout << real << " + i" << imag << std::endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
