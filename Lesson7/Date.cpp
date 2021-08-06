#include "Date.h"

void Date::setDay(uint16_t i_day) {
    _day = i_day;
}

void Date::setMonth(uint16_t i_month) {
    _month = i_month;
}

void Date::setYear(uint16_t i_year) {
    _year = i_year;
}

std::ostream &operator<<(std::ostream &out, const Date &date) {
    if (date._day < 10) out << 0;
    out << date._day << ".";
    if (date._month < 10) out << 0;
    out << date._month << "." << date._year;
    return out;
}

uint16_t Date::getDay() {
    return _day;
}

uint16_t Date::getMonth() {
    return _month;
}

uint16_t Date::getYear() {
    return _year;
}
