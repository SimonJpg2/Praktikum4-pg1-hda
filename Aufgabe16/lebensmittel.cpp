#include "lebensmittel.h"
#include <iostream>

// Konstruktor
Lebensmittel::Lebensmittel(const std::string name) : name(name)
{
    std::cout << "Konstruktor Lebensmittel" << std::endl;
}

// Destruktor
Lebensmittel::~Lebensmittel() { std::cout << "Destruktor Lebensmittel" << std::endl; }

// Methoden
void Lebensmittel::zubereiten() const { std::cout << this->name << " zubereiten" << std::endl; }
