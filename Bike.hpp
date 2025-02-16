#pragma once

#include "Vehicle.hpp"

class Bike
{
public:
    // Constructors
    Bike();
    Bike(const std::string& brand, bool hasGears);

    // Override getDescription() of parent class
    const std::string& getDescription() const override;
    
private:
    bool gears;
}