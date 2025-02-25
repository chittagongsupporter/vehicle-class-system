#pragma once

#include <string>

class Vehicle
{
public:
    Vehicle();
    Vehicle(std::string brand);

    virtual const std::string& getDescription() const;

    void setModel(const std::string& model);

    virtual ~Vehicle() {}
protected:
    std::string brand;
    std::string model;
};