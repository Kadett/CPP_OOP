#include "Ex.h"

Ex::Ex(double i_x) : _x(i_x) {
    std::stringstream ss;
    ss << "result = " << _x;
    _error = std::move(ss.str());
}

const char *Ex::what() const noexcept {
    return _error.c_str();
}
