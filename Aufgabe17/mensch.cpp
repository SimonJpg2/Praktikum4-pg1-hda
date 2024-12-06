#include "mensch.h"

#include <iostream>

Mensch::Mensch(Herzschrittmacher& herzschrittmacher)
    : herz(Herz()), herzschrittmacher(herzschrittmacher), pSmartWatch(nullptr)  {}

void Mensch::setObject(SmartWatch* pSmartWatch) { this->pSmartWatch = pSmartWatch; }

void Mensch::gibLaut() const
{
    std::cout << this->herz.gibLaut() << std::endl;
    std::cout << this->herzschrittmacher.gibLaut() << std::endl;

    if (this->pSmartWatch != nullptr)
        std::cout << this->pSmartWatch->gibLaut() << std::endl;
}
