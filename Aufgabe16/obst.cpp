#include "obst.h"

#include <iostream>

Obst::Obst(const std::string name) : Lebensmittel(name) { std::cout << "Konstruktor Obst" << std::endl; }
Obst::~Obst() { std::cout << "Destruktor Obst" << std::endl; }

void Obst::zubereiten() const { std::cout << this->name << " schaelen" << std::endl; }
