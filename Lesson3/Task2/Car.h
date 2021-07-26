#pragma once
#include <iostream>
class Car {
protected:
    std::string company, model;
public:
    Car();
    virtual void setCompany(std::string) = 0;

    virtual void setModel(std::string) = 0;
};
