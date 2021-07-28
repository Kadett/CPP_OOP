#pragma once


template<typename T1, typename T2>
class Pair {
    T1 _first;
    T2 _second;
public:
    Pair(const T1& first, const T2& second) : _first(first), _second(second) {}

    const T1& first() const { return _first; }

    const T2& second() const { return _second; }
};

