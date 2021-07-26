#pragma once
#include "Figure.h"
#include <cmath>

class Circle : public Figure {
    double radius;
public:
    explicit Circle(double radius);
    double area() override;
};
