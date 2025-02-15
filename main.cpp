#include <iostream>
#include "Vehicle.hpp"

void testVehicleObject()
{
    Vehicle vehicle1;
    Vehicle vehicle2("Toyota"); 

    std::cout << vehicle1.getDescription() << std::endl;
    std::cout << vehicle2.getDescription() << std::endl;

}

void testCarObject()
{
    
}

int main()
{
    testVehicleObject();
    std::cout << "Test" << std::endl;
    return 0;
}