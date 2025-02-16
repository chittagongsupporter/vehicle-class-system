#pragma once

#include <string>

class Vehicle
{
public:
    Vehicle();
    Vehicle(std::string brand);

    virtual const std::string& getDescription() const;

    virtual ~Vehicle() {}
protected:
    std::string brand;
};