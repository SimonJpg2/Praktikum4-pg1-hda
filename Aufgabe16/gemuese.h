#pragma once

#include "lebensmittel.h"

class Gemuese : public Lebensmittel {
public:
    Gemuese(const std::string name);
    ~Gemuese();

    void zubereiten() const;
};
