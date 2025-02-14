#pragma once

#include <string>

class Vehicle
{
public:
    Vehicle();
    Vehicle(std::string brand);

    const std::string& getDescription() const;
private:
    std::string brand;
};