#include <iostream>
#include "Task1/ArrayInt.h"


int main(){
    // Task 1
    ArrayInt arr{6, 2, 7, 1, 23, 3, 8, 13, 2, 6, 1, 12, 1, 3, 8, 8};
    arr.print();
    std::cout << std::endl;
    arr.pop_back();
    arr.print();
    std::cout << std::endl;
    arr.pop_front();
    arr.print();
    std::cout << std::endl;
    arr.sort();
    arr.print();

    





    return 0;
}