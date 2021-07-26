#pragma once
#include "Car.h"
class Bus : virtual public Car{
public:
    Bus();
    void setCompany(std::string) override;
    void setModel(std::string) override;
};
