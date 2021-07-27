#pragma once

template<typename T>
class Pair1 {
    T _first, _second;
public:
    Pair1(const T &first, const T &second) : _first(first), _second(second) {}

    T first() const { return _first; }

    T second() const { return _second; }
};