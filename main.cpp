#include <iostream>
#include "Vehicle.hpp"
#include "Car.hpp"

void testVehicleObject()
{
    Vehicle vehicle1;
    Vehicle vehicle2("Toyota"); 

    std::cout << vehicle1.getDescription() << std::endl;
    std::cout << vehicle2.getDescription() << std::endl;

}

void testCarObject()
{
    Car car1;
    std::cout << car1.getDescription() << std::endl; 
    Car car2("Honda", 2);
    std::cout << "Car2 doors: " << car2.getDoors() << std::endl; // Should print 2 doors   
}

int main()
{
    std::cout << "Testing vehicle object" << std::endl;
    testVehicleObject();
    std::cout << "\nTesting car object" << std::endl;
    testCarObject();
    std::cout << "Test" << std::endl;
    return 0;
}