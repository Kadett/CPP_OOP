#include "Rectangle.h"

Rectangle::Rectangle(double side_a, double side_b) : Parallelogram(side_a, side_b) {

}

double Rectangle::area() {
    return side_a * side_b;
}
