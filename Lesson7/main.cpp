#include <iostream>
#include <memory>
#include <sstream>
#include <ctime>
#include "Date.h"

std::string compareDate(const std::unique_ptr<Date> &d1, const std::unique_ptr<Date> &d2) {
    std::stringstream str;
    struct tm t1{};
    struct tm t2{};
    t1.tm_year = d1->getYear() - 1900;
    t1.tm_mon = d1->getMonth();
    t1.tm_mday = d1->getDay();
    t2.tm_year = d2->getYear() - 1900;
    t2.tm_mon = d2->getMonth();
    t2.tm_mday = d2->getDay();
    time_t a1 = mktime(&t1);
    time_t a2 = mktime(&t2);
    a1 >= a2 ? str << *d1 : str << *d2;
    return str.str();
}

template<class T>
void swap(T &x, T &y) {
    T tmp{std::move(x)};
    x = std::move(y);
    y = std::move(tmp);
}

int main() {
    // Task 1

    std::cout << "Task 1:" << std::endl;
    auto today = std::make_shared<Date>();
    auto date = std::make_shared<Date>();

    today->setDay(6);
    today->setMonth(8);
    today->setYear(2021);
    std::cout << *today << std::endl;
    std::cout << "today is " << (static_cast<bool>(today) ? "not null\n" : "null\n");
    std::cout << "date is " << (static_cast<bool>(date) ? "not null\n" : "null\n");
    std::cout << std::endl;
    date = std::move(today);
    std::cout << "today is " << (static_cast<bool>(today) ? "not null\n" : "null\n");
    std::cout << "date is " << (static_cast<bool>(date) ? "not null\n" : "null\n");

    std::cout << "\n\n";
    std::cout << "Task 2:" << std::endl;
    std::unique_ptr<Date> date1 = std::make_unique<Date>();
    std::unique_ptr<Date> date2 = std::make_unique<Date>();
    date1->setDay(10);
    date1->setMonth(10);
    date1->setYear(2021);
    date2->setDay(3);
    date2->setMonth(2);
    date2->setYear(2020);

    std::cout << compareDate(date1, date2);

    std::cout << std::endl;

    std::cout << "date1 = " << *date1 << std::endl;
    std::cout << "date2 = " << *date2 << std::endl;

    swap(*date1, *date2);

    std::cout << "date1 = " << *date1 << std::endl;
    std::cout << "date2 = " << *date2 << std::endl;
    return 0;
}