#pragma once

#include <string>

class Lebensmittel{
protected:
    std::string name;

public:
    Lebensmittel(const std::string name);
    ~Lebensmittel();

    void zubereiten() const;
};

