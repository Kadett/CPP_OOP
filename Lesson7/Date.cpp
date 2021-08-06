#include "Date.h"

void Date::setDay(uint16_t i_day) {
    _day = i_day;
}

void Date::setMonth(uint16_t i_month) {
    _month = i_month;
}

void Date::serYear(uint16_t i_year) {
    _year = i_year;
}

std::ostream &operator<<(std::ostream &out, const Date &date) {
    out << "Date: ";
    if (date._day < 10) out << 0;
    out << date._day << ".";
    if (date._month < 10) out << 0;
    out << date._month << "." << date._year << std::endl;
    return out;
}
