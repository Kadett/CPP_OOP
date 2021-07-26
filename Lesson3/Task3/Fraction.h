#pragma once

#include <iostream>
#include <sstream>

class Fraction {
    int numerator, denominator;

    int gcd(int, int); //нахождение НОД

    int lcm(int, int); //нахождение НОК

    void reduce(); //сокращение дроби

public:

    int getNumerator() const;

    int getDenominator() const;

    std::string toString() const;

    explicit Fraction(int numerator, int denomerator = 1);

    Fraction operator+(const Fraction &f) const;

    Fraction operator-(const Fraction &f) const;

    Fraction operator*(const Fraction &f) const;

    Fraction operator/(const Fraction &f) const;

    Fraction operator-() const;

    friend bool operator==(const Fraction &f1, const Fraction &f2);

    friend bool operator!=(const Fraction &f1, const Fraction &f2);

    friend bool operator<(const Fraction &f1, const Fraction &f2);

    friend bool operator>=(const Fraction &f1, const Fraction &f2);

    friend bool operator>(const Fraction &f1, const Fraction &f2);

    friend bool operator<=(const Fraction &f1, const Fraction &f2);
};