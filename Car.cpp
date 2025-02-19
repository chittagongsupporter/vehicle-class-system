#include "Car.hpp"
#include <iostream>

// Default constructor
Car::Car() : Vehicle(), doors(4) 
{
}

// Parameterized constructor
Car::Car(const std::string& brand, int doors) : Vehicle(brand), doors(doors)
{
}

// Getter for doors
int Car::getDoors() const
{
    return doors;
}

// Override the getDescription method from Vehicle
const std::string& Car::getDescription() const
{
    std::cout << "Car brand: " << brand << ", Doors: " << doors << std::endl;
    return brand;
}
