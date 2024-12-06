#include "smartwatch.h"

SmartWatch::SmartWatch(std::string name) : name(name) {}
std::string SmartWatch::gibLaut() const { return this->name; }
