#pragma once
#include "Parallelogram.h"
class Rhombus : public Parallelogram {
    double height;
public:
    Rhombus(double side, double height);
    double area() override;
};
