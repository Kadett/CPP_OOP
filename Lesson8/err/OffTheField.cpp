#include "OffTheField.h"

const char *OffTheField::what() const noexcept {
    return error.c_str();
}

OffTheField::OffTheField(const std::string& lastCommand, const int x, const int y) {
    std::stringstream ss;
    ss << "Exception: OffTheField;\n";
    ss << "Last command: " << lastCommand << ";\n";
    ss << "Coordinate X: " << x << ";\n";
    ss << "Coordinate Y: " << y << ";\n";
    error = ss.str();
}
