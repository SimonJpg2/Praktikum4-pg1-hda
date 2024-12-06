#pragma once

#include <string>

class Herz {
    std::string name;
public:
    Herz(std::string name = "BummBumm");

    std::string gibLaut() const;
};
