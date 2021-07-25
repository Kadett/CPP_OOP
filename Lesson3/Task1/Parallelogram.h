#pragma once
#include "Figure.h"
class Parallelogram : public Figure{
public:
    double side_a, side_b;

    Parallelogram(double side_a, double side_b);

    explicit Parallelogram(double side_a);

    double area() override = 0;
};
