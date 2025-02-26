#include "Vehicle.hpp"
#include <iostream>

Vehicle::Vehicle() : brand("Unknown Brand") {}

Vehicle::Vehicle(std::string brand)
{
    this->brand = brand;
}

void Vehicle::setBrand(const std::string& brand) {
    this->brand = brand;
}

const std::string& Vehicle::getDescription() const
{
    std::cout << "Vehicle brand:" << std::endl;
    return brand;
}

void Vehicle::setModel(const std::string& model)
{
    this->model = model;
}