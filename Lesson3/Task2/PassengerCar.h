#pragma once
#include "Car.h"
class PassengerCar : virtual public Car{
public:
    PassengerCar();
    void setCompany(std::string) override ;
    void setModel(std::string) override ;
};




