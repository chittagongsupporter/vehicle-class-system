#pragma once

#include "Vehicle.hpp"

class Car : public Vehicle
{
public:
    // Constructors
    Car();
    Car(const std::string& brand, int doors);

    // Getter
    int getDoors() const;

    // Override getDescription() of parent class
    const std::string& getDescription() const override;

private:
    int doors;
};