#include "Square.h"

Square::Square(double side) : Parallelogram(side) {}

double Square::area() {
    return side_a * side_a;
}
