#include <iostream>
#include <memory>
#include "Date.h"

int main(){
    // Task 1
    auto today = std::make_unique<Date>();
    auto date = std::make_unique<Date>();

    today->setDay(6);
    today->setMonth(8);
    today->serYear(2021);
    std::cout << *today << std::endl;
    std::cout << "today is " << (static_cast<bool>(today) ? "not null\n" : "null\n");
    std::cout << "date is " << (static_cast<bool>(date) ? "not null\n" : "null\n");
    std::cout << std::endl;
    date = std::move(today);
    std::cout << "today is " << (static_cast<bool>(today) ? "not null\n" : "null\n");
    std::cout << "date is " << (static_cast<bool>(date) ? "not null\n" : "null\n");




    return 0;
}