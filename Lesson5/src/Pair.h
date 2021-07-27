#pragma once

template<typename T1, typename T2>
class Pair {
    T1 _first;
    T2 _second;
public:
    Pair(T1 first, T2 second) : _first(first), _second(second) {}

    T1 first() const { return _first; }
    T2 second() const { return _second; }
};
