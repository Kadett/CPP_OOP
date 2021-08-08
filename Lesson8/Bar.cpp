#include "Bar.h"

void Bar::set(double a) {
    if (_y + a > 100) throw Ex(a * _y);
    _y = a;

}
