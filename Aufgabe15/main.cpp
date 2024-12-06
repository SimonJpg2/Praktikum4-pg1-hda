#include "fraction.h"
#include <iostream>

int main() {
    // Local Variables!
    Fraction f1; // Standardkonstruktor mit vorbelegten Werden
    Fraction f2; // siehe oben
    Fraction result;

    f1.read();
    f2.read();

    std::cout << std::endl << "Erster Bruch: ";
    f1.print();
    std::cout << std::endl << "Zweiter Bruch: ";
    f2.print();

    std::cout << std::endl << "Addition: " << std::endl;
    result = f1.add(f2);
    result.print();

    std::cout << std::endl << "Subtraktion: " << std::endl;
    result = f1.subtract(f2);
    result.print();

    std::cout << std::endl << "Multiplikation: " << std::endl;
    result = f1.multiply(f2);
    result.print();

    std::cout << std::endl << "Division: " << std::endl;
    result = f1.divide(f2);
    result.print();

    Fraction f3 = result;       // Kopierkonstruktor
    f3.print();
    f3 = f1;                    // Zuweisungsoperator
    f3.print();

    return 0;
}
