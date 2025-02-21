#include "Bike.hpp"
#include <iostream>
#include <stdexcept>

// Default constructor
Bike::Bike() : Vehicle(), gears(false) {}

// Constructor with brand and gears
Bike::Bike(const std::string& brand, bool hasGears) : Vehicle(brand), gears(hasGears) {}

// Getter for gears
bool Bike::hasGears() const {
    return gears;
}

// Getter for brakeType
const std::string& Bike::getBrakeType() const {
    return brakeType;
}

// Setters
void Bike::setGears(bool hasGears) {
    gears = hasGears;
}

void Bike::setBrakeType(const std::string& brakeType) {
    if (brakeType.empty()) {
        throw std::invalid_argument("Brake type cannot be empty");
    }
    this->brakeType = brakeType;
}


// Override getDescription to provide bike-specific details
const std::string& Bike::getDescription() const {
    std::cout << "Bike brand" << std::endl;
    return brand;
}