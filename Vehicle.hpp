#pragma once

#include <string>

class Vehicle
{
public:
    Vehicle();
    Vehicle(std::string brand);
private:
    std::string brand;
};