#pragma once
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <windows.h>
#include "err/OffTheField.h"
#include "err/IllegalCommand.h"

class Robot {
    std::string error{};
    const int SizeX{10}, SizeY{10};
    int _x{}, _y{};
    void moveArrows();
    int getInt();
public:
    void moveTo_X_Y();
    enum class Move{
        UP = 1, DOWN, RIGHT, LEFT
    };
    Robot(int startX = 0, int startY = 0);
    void move(Move m);
    void printField() const;
    void getStep();


};




