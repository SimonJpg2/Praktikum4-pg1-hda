#pragma once

#include "herz.h"
#include "herzschrittmacher.h"
#include "smartwatch.h"

class Mensch {
    Herz herz; // Komposition
    Herzschrittmacher& herzschrittmacher; // Aggregation
    SmartWatch* pSmartWatch; // Assoziation
public:
    Mensch(Herzschrittmacher& herzschrittmacher);

    void setObject(SmartWatch* pSmartwatch);
    void gibLaut() const;
};
