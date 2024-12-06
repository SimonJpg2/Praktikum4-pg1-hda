#pragma once

#include "lebensmittel.h"

class Obst : public Lebensmittel {
public:
    Obst(const std::string name);
    ~Obst();

    void zubereiten() const;
};
