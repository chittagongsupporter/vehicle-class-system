#pragma once

#include "Vehicle.hpp"

class Bike
{
public:
    // Constructors
    Bike();
    Bike(const std::string& brand, bool hasGears);
private:
    bool gears;
}