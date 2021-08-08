#pragma once

#include <iostream>
#include <sstream>

class OffTheField : public std::exception {
    std::string error{};
public:
    OffTheField(const std::string& lastCommand, int x, int y);
    const char * what() const noexcept override;
};




