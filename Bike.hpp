#pragma once

#include "Vehicle.hpp"

class Bike : public Vehicle
{
public:
    // Constructors
    Bike();
    Bike(const std::string& brand, bool hasGears);

    // Getters
    bool hasGears() const;
    const std::string& getBrakeType() const;

    // Setters
    void setGears(bool hasGears);
    void setBrakeType(const std::string& brakeType);

    // Override getDescription() of parent class
    const std::string& getDescription() const override;

    ~Bike() {}
private:
    bool gears;
    std::string brakeType;
};