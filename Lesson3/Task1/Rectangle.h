#pragma once
#include "Parallelogram.h"
class Rectangle : public Parallelogram {
public:
    Rectangle(double side_a, double side_b);
    double area() override;
};

