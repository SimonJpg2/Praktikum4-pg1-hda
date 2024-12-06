#pragma once

#include "lebensmittel.h"

class Fleisch : public Lebensmittel {
public:
    Fleisch(const std::string name);
    ~Fleisch();

    void zubereiten() const;
};
