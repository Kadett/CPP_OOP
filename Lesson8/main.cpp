#include <iostream>
#include "Bar.h"
// Task 1
template<typename T>
void div(T numerator, T denominator){
    if (denominator == 0) throw std::runtime_error("Division by zero");
    std::cout << numerator << "/" << denominator << " = " << static_cast<double>(numerator)/denominator << std::endl;
}

int main(){
    // Task 1
    try {
        div<int>(10, 3);
        div<int>(5, 0);
    } catch (std::runtime_error &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }


    // Task 2
    Bar b;
    int n;
    try {
        while (true){
            std::cout << "Enter 0 for exit.\n";
            std::cout << "Enter any number:\n";
            std::cin >> n;
            if (n == 0) break;
            b.set(n);
        }

    } catch (Ex &e) {

        std::cerr << "Exception:\n";
        std::cerr << "result = " << e.getX() << std::endl;
        std::cout << std::endl;
    }
    std::cout << "Goodbye :)";

    
    return 0;
}