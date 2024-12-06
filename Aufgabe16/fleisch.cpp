#include "fleisch.h"
#include <iostream>

Fleisch::Fleisch(const std::string name) : Lebensmittel(name) { std::cout << "Konstruktor Fleisch" << std::endl; }
Fleisch::~Fleisch() { std::cout << "Destruktor Fleisch" << std::endl; }

void Fleisch::zubereiten() const { std::cout << this->name << " anbraten" << std::endl; }
