#include "DivisionByZero.h"


const char *DivisionByZero::what() const noexcept {

    return _error.c_str();
}

DivisionByZero::DivisionByZero() {
    _error = "Division By Zero";
}
