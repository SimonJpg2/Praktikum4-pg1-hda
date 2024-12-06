#pragma once

#include <string>

class Herzschrittmacher {
    std::string name;
public:
    Herzschrittmacher(std::string name = "PochPoch");

    std::string gibLaut() const;
};
