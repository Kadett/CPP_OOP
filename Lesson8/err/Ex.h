#pragma once
#include <iostream>
#include <sstream>
class Ex : public std::exception {
    double _x{};
    std::string _error{};
public:
    Ex(double i_x);
    const char * what() const noexcept override;
};




