#pragma once

#include "Vehicle.hpp"

class Bike : public Vehicle
{
public:
    // Constructors
    Bike();
    Bike(const std::string& brand, bool hasGears);

    // Getter
    bool hasGears() const;

    // Override getDescription() of parent class
    const std::string& getDescription() const override;

private:
    bool gears;
}