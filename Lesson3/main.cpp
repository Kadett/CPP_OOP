#include "main.h"

int main(){
    // Task 1
    std::cout << "Task 1:" << std::endl;
    Circle circle(15);
    Rhombus rhombus(13, 5);
    Square square(25);
    Rectangle rectangle(10, 8);
    std::cout << "The area of the circle = " << circle.area() << std::endl;
    std::cout << "The area of the rhombus = " << rhombus.area() << std::endl;
    std::cout << "The area of the square = " << square.area() << std::endl;
    std::cout << "The area of the rectangle = " << rectangle.area() << std::endl;
    std::cout << "\n\n";

    return 0;
}