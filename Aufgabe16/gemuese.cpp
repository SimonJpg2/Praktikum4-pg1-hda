#include "gemuese.h"

#include <iostream>

Gemuese::Gemuese(const std::string name) : Lebensmittel(name) { std::cout << "Konstruktor Gemuese" << std::endl; }
Gemuese::~Gemuese() { std::cout << "Destruktor Gemuese" << std::endl; }

void Gemuese::zubereiten() const { std::cout << this->name << " putzen" << std::endl; }
