#pragma once

#include <string>

class Vehicle
{
public:
    Vehicle();
    Vehicle(std::string brand);

    virtual const std::string& getDescription() const;

    Vehicle::~Vehicle() {}
protected:
    std::string brand;
};