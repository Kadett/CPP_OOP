#include "Rhombus.h"

Rhombus::Rhombus(double side, double height) : Parallelogram(side), height(height) {}

double Rhombus::area() {
    return side_a * height;
}
