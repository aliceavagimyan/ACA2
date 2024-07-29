#include <iostream>

class Complex {
private:
    double real;  // Действительная часть
    double imag;  // Мнимая часть

public:
    // Конструктор по умолчанию
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Перегрузка оператора +
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Перегрузка оператора -
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Перегрузка оператора *
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Перегрузка оператора /
    Complex operator/(const Complex& other) const {
        double denominator = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denominator,
                       (imag * other.real - real * other.imag) / denominator);
    }

    // Перегрузка оператора ==
    bool operator==(const Complex& other) const {
        return real == other.real && imag == other.imag;
    }

    // Перегрузка оператора !=
    bool operator!=(const Complex& other) const {
        return !(*this == other);
    }

    // Перегрузка оператора вывода <<
    friend std::ostream& operator<<(std::ostream& out, const Complex& c) {
        out << "(" << c.real << ", " << c.imag << "i)";
        return out;
    }

    // Перегрузка оператора ввода >>
    friend std::istream& operator>>(std::istream& in, Complex& c) {
        in >> c.real >> c.imag;
        return in;
    }

    // Метод для отображения значения комплексного числа
    void display() const {
        std::cout << "(" << real << ", " << imag << "i)" << std::endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2;

    std::cout << "c1: " << c1 << std::endl;

    std::cout << "Enter a complex number (format: real imag): ";
    std::cin >> c2;

    std::cout << "c2: " << c2 << std::endl;

    Complex c3 = c1 + c2;
    std::cout << "c1 + c2: " << c3 << std::endl;

    Complex c4 = c1 - c2;
    std::cout << "c1 - c2: " << c4 << std::endl;

    Complex c5 = c1 * c2;
    std::cout << "c1 * c2: " << c5 << std::endl;

    Complex c6 = c1 / c2;
    std::cout << "c1 / c2: " << c6 << std::endl;

    bool equal = c1 == c2;
    std::cout << "c1 == c2: " << (equal ? "true" : "false") << std::endl;

    bool notEqual = c1 != c2;
    std::cout << "c1 != c2: " << (notEqual ? "true" : "false") << std::endl;

    return 0;
}
/*#include <iostream>

class Complex {
private:
    double real;  // Действительная часть
    double imag;  // Мнимая часть

public:
    // Конструктор по умолчанию
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Перегрузка унарного оператора +
    Complex operator+() const {
        return *this;  // Возвращает копию объекта
    }

    // Перегрузка унарного оператора -
    Complex operator-() const {
        return Complex(-real, -imag);
    }

    // Перегрузка оператора инкремента (префиксный ++)
    Complex& operator++() {
        ++real;
        ++imag;
        return *this;
    }

    // Перегрузка оператора инкремента (постфиксный ++)
    Complex operator++(int) {
        Complex temp = *this;
        ++(*this);
        return temp;
    }

    // Перегрузка оператора декремента (префиксный --)
    Complex& operator--() {
        --real;
        --imag;
        return *this;
    }

    // Перегрузка оператора декремента (постфиксный --)
    Complex operator--(int) {
        Complex temp = *this;
        --(*this);
        return temp;
    }

    // Метод для отображения значения комплексного числа
    void display() const {
        std::cout << "(" << real << ", " << imag << "i)" << std::endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);

    std::cout << "Initial complex number: ";
    c1.display();

    std::cout << "Unary +: ";
    Complex c2 = +c1;
    c2.display();

    std::cout << "Unary -: ";
    Complex c3 = -c1;
    c3.display();

    std::cout << "Prefix ++: ";
    ++c1;
    c1.display();

    std::cout << "Postfix ++: ";
    c1++;
    c1.display();

    std::cout << "Prefix --: ";
    --c1;
    c1.display();

    std::cout << "Postfix --: ";
    c1--;
    c1.display();

    return 0;
}*/