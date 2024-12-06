#pragma once

#include <string>

class SmartWatch {
    std::string name;
public:
    SmartWatch(std::string name = "TickTick");

    std::string gibLaut() const;
};
