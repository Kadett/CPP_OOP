#include "Bus.h"

Bus::Bus() {
    std::cout << "Bus::Bus()" << std::endl;
}

void Bus::setCompany(std::string i_company) {
    company = i_company;
}

void Bus::setModel(std::string i_model) {
    model = i_model;
}
