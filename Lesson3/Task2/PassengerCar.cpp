#include "PassengerCar.h"

PassengerCar::PassengerCar() {
    std::cout << "PassengerCar::PassengerCar()" << std::endl;
}

void PassengerCar::setCompany(std::string i_company)  {
    company = i_company;
}

void PassengerCar::setModel(std::string i_model) {
    model = i_model;
}
