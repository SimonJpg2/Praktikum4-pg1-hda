#pragma once

class Fraction {
    int numerator;
    int denominator;

public:
    // Konstruktoren
    Fraction(int n = 0, int d = 1);
    Fraction(const Fraction& f);

    // Destruktoren
    ~Fraction();

    // Operatoren überladen
    Fraction& operator = (const Fraction& f); // Operator "=" überladen

    // Methoden
    Fraction add(const Fraction& f);
    Fraction subtract(const Fraction& f);
    Fraction multiply(const Fraction& f);
    Fraction divide(const Fraction& f);

    void read();
    void print() const;

    // Getter
    int getNumerator() const;
    int getDenominator() const;

    // Setter
    void setNumerator(int numerator);
    void setDenominator(int denominator);

private:
    int gcd(int p, int q);
    void cancel();
    void format();
};

