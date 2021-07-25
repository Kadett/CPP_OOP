#pragma once
#include "Parallelogram.h"
class Square : public Parallelogram {
public:
    explicit Square(double side);
    double area() override;
};
