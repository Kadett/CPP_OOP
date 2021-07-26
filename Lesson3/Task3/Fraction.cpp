#include "Fraction.h"

Fraction::Fraction(int numerator, int denomerator) : numerator(numerator), denominator(denomerator) {
    try {
        if (denomerator == 0) throw "Division by zero!";
    } catch (const char *exception) {
        std::cerr << "Error: " << exception << '\n';
        exit(-1);
    }


}


int Fraction::gcd(int a, int b) {
    if (a < b) {
        std::swap(a, b);
    }
    while (a % b != 0) {
        a = a % b;
        std::swap(a, b);
    }
    return b;
}

int Fraction::lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

void Fraction::reduce() {
    int g = gcd(abs(numerator), denominator);

    if (g != 1) {
        this->numerator = this->numerator / g;
        this->denominator = this->denominator / g;
    }
}

Fraction Fraction::operator+(const Fraction &f) const {
    if (denominator == f.denominator) {
        Fraction res(numerator + f.numerator, denominator);
        res.reduce();
        return res;
    } else {
        int num = numerator * f.denominator + f.numerator * denominator;
        int den = denominator * f.denominator;
        Fraction res(num, den);
        res.reduce();
        return res;
    }
}

Fraction Fraction::operator-(const Fraction &f) const {
    if (denominator == f.denominator) {
        Fraction res(numerator - f.numerator, denominator);
        res.reduce();
        return res;
    } else {
        int num = numerator * f.denominator - f.numerator * denominator;
        int den = denominator * f.denominator;
        Fraction res(num, den);
        res.reduce();
        return res;
    }
}

Fraction Fraction::operator*(const Fraction &f) const {
    Fraction res(numerator * f.numerator, denominator * f.denominator);
    res.reduce();
    return res;
}

Fraction Fraction::operator/(const Fraction &f) const {
    Fraction res = Fraction::operator*(Fraction(f.denominator, f.numerator));
    return res;
}

Fraction Fraction::operator-() const {
    return Fraction(-numerator, denominator);
}

bool operator==(const Fraction &f1, const Fraction &f2) {
    return (double) f1.numerator / f1.denominator == (double) f2.numerator / f2.denominator;
}

bool operator!=(const Fraction &f1, const Fraction &f2) {
    return !(f1 == f2);
}

bool operator<(const Fraction &f1, const Fraction &f2) {
    return (double) f1.numerator / f1.denominator < (double) f2.numerator / f2.denominator;
}

bool operator>=(const Fraction &f1, const Fraction &f2) {
    return !(f1 < f2);
}

bool operator>(const Fraction &f1, const Fraction &f2) {
    return (double) f1.numerator / f1.denominator > (double) f2.numerator / f2.denominator;
}

bool operator<=(const Fraction &f1, const Fraction &f2) {
    return !(f1 > f2);
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

std::string Fraction::toString() const {
    std::stringstream res;
    res << numerator << "/" << denominator;
    return res.str();
}

