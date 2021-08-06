#pragma once

#include <iostream>


class Date {
    uint16_t _day{}, _month{}, _year{};
public:
    void setDay(uint16_t i_day);

    void setMonth(uint16_t i_month);

    void serYear(uint16_t i_year);

    friend std::ostream &operator<<(std::ostream &out, const Date &date);
};




