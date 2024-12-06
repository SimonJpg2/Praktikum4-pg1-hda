#include "fraction.h"

#include <iostream>

// Konstruktoren

// Standardkonstruktor
Fraction::Fraction(int n, int d) : numerator(n), denominator(d)
{
    std::cout << "Konstruktor aufgerufen" << std::endl;
}

// Kopierkonstruktor
Fraction::Fraction(const Fraction& f) : numerator(f.getNumerator()), denominator(f.getDenominator())
{
    std::cout << "Kopierkonstruktor aufgerufen" << std::endl;
}

// Destruktoren

// Standard Destruktor
Fraction::~Fraction()
{
    std::cout << "Destruktor aufgerufen" << std::endl;
}

// Operatoren überladen
Fraction& Fraction::operator=(const Fraction& f)
{
    std::cout << "Zuweisungsoperator aufgerufen" << std::endl;
    this->numerator = f.getNumerator();
    this->denominator = f.getDenominator();
    return *this;
}

// Zusatzaufgabe
Fraction Fraction::operator+(const Fraction& f) { return add(f); }
Fraction Fraction::operator-(const Fraction& f) { return subtract(f); }
Fraction Fraction::operator*(const Fraction& f) { return multiply(f); }
Fraction Fraction::operator/(const Fraction& f) { return divide(f); }

// Methoden
Fraction Fraction::add(const Fraction& f)
{
    Fraction result;
    result.setNumerator(this->numerator * f.getDenominator() + f.getNumerator() * this->denominator);
    result.setDenominator(this->denominator * f.getDenominator());

    result.format();
    return result;
}

Fraction Fraction::subtract(const Fraction& f)
{
    Fraction result;
    result.setNumerator(this->numerator * f.denominator - f.getNumerator() * this->denominator);
    result.setDenominator(this->denominator * f.getDenominator());

    result.format();
    return result;
}

Fraction Fraction::multiply(const Fraction& f)
{
    Fraction result;
    result.setNumerator(this->numerator * f.getNumerator());
    result.setDenominator(this->denominator * f.getDenominator());

    result.format();
    return result;
}

Fraction Fraction::divide(const Fraction& f)
{
    Fraction result;

    if(f.getDenominator() == 0) {
        std::cout << "Der Nenner darf nicht 0 sein!" << std::endl;
        return result;
    }

    result.setNumerator(this->numerator * f.getDenominator());
    result.setDenominator(this->denominator * f.getNumerator());

    result.format();
    return result;
}

void Fraction::read()
{
    std::cout << "Zaehler: ";
    std::cin >> this->numerator;

    do {
        std::cout << "Nenner: ";
        std::cin >> this->denominator;
    } while (this->denominator == 0);
    format();
}

void Fraction::print() const
{
    std::cout << this->numerator << "/" << this->denominator << std::endl;
}

// Getter
int Fraction::getNumerator() const
{
    return this->numerator;
}

int Fraction::getDenominator() const
{
    return this->denominator;
}

// Setter
void Fraction::setNumerator(int numerator)
{
    this->numerator = numerator;
}

void Fraction::setDenominator(int denominator)
{
    this->denominator = denominator;
}

// Private Methoden

/*
* Die Implementierung wurde aus dem Praktikum 3 übernommen und die Referenz durch this ersetzt.
*/

int Fraction::gcd(int p, int q)
{
    while (q != 0)
    {
        int r = p % q;
        p = q;
        q = r;
    }
    return p;
}

void Fraction::cancel()
{
    int gcdNumDenom = gcd(this->numerator, this->denominator);
    this->numerator /= gcdNumDenom;
    this->denominator /= gcdNumDenom;
}

void Fraction::format()
{
    cancel();
    if (this->denominator < 0) {
        this->numerator = -this->numerator;
        this->denominator = -this->denominator;
    } else if (this->denominator == 0) {
        std::cout << "Nenner darf nicht Null sein!" << std::endl;
    }
}
