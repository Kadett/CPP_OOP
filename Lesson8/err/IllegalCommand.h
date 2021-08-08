#pragma once
#include <iostream>
#include <sstream>
class IllegalCommand : public std::exception {
    std::string error;
public:
    IllegalCommand(std::string command);
    const char * what() const noexcept override;
};




