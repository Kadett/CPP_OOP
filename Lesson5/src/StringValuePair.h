#pragma once
#include <iostream>
#include "Pair.h"

template<typename T>
class StringValuePair : public Pair<std::string, T>{
public:
    StringValuePair(const std::string& str, const T& val): Pair<std::string, T>(str, val) {}
};