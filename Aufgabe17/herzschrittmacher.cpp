#include "herzschrittmacher.h"

Herzschrittmacher::Herzschrittmacher(std::string name) : name(name) {}
std::string Herzschrittmacher::gibLaut() const { return this->name; }
