#include "Vehicle.hpp"

Vehicle::Vehicle() : brand("Unknown Brand") {}

Vehicle::Vehicle(std::string brand)
{
    this->brand = brand;
}