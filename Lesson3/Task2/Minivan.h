#pragma once

#include "Bus.h"
#include "PassengerCar.h"

class Minivan : public PassengerCar, public Bus {
public:
    Minivan();

    void setCompany(std::string) override;

    void setModel(std::string) override;
};




