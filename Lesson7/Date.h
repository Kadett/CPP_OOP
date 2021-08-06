#pragma once

#include <iostream>


class Date {
    uint16_t _day{}, _month{}, _year{};
public:
    Date() = default;

    ~Date() = default;

    void setDay(uint16_t i_day);

    void setMonth(uint16_t i_month);

    void setYear(uint16_t i_year);

    uint16_t getDay();

    uint16_t getMonth();

    uint16_t getYear();

    friend std::ostream &operator<<(std::ostream &out, const Date &date);
};




