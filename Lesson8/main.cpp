#include <iostream>
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

    return 0;
}