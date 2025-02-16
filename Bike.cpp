#include "Bike.hpp"
#include <iostream>

// Default constructor
Bike::Bike() : Vehicle(), gears(false) {}

// Constructor with brand and gears
Bike::Bike(const std::string& brand, bool hasGears) : Vehicle(brand), gears(hasGears) {}

// Getter for gears
bool Bike::hasGears() const {
    return gears;
}

// Override getDescription to provide bike-specific details
const std::string& Bike::getDescription() const {
    std::cout << "Bike brand" << std::endl;
    return brand;
}