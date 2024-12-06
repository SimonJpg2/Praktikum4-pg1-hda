#include "herz.h"

Herz::Herz(std::string name) : name(name) {}
std::string Herz::gibLaut() const { return this->name; }
