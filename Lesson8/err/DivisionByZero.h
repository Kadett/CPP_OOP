#pragma once
#include <iostream>
class DivisionByZero : public std::exception{
    std::string _error{};
public:
    DivisionByZero();
    const char * what() const noexcept override;
};




