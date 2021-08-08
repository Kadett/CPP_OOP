#include <iostream>
#include "Bar.h"
#include "Robot.h"
#include "err/DivisionByZero.h"
// Task 1
template<typename T>
void div(T numerator, T denominator){
    if (denominator == 0) throw DivisionByZero();
    std::cout << numerator << "/" << denominator << " = " << static_cast<double>(numerator)/denominator << std::endl;
}

int main(){
    // Task 1

    try {
        div<int>(10, 3);
        div<int>(5, 0);
    } catch (DivisionByZero &e) {
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
        std::cerr << e.what() << std::endl;
        std::cout << std::endl;
    }
    std::cout << "Goodbye :)";

    // Task 3
    try {
        Robot r{};
        r.getStep();
    } catch (OffTheField &e) {
        std::cerr << e.what();
    } catch (IllegalCommand &e) {
        std::cerr << e.what();
    }
    return 0;
}