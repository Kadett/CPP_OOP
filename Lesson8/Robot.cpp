
#include "Robot.h"
#include <conio.h>


Robot::Robot(int startX, int startY) : _x(startX), _y(startY) {
    if (startX >= SizeX || startX < 0 || startY >= SizeY || startY < 0) {
        throw OffTheField("init start positions", _x, _y);
    }
}

void Robot::move(Robot::Move m) {
    std::string lastCommand{};
    switch (m) {
        case Move::UP:
            --_y;
            lastCommand = "UP";
            break;
        case Move::DOWN:
            ++_y;
            lastCommand = "DOWN";
            break;
        case Move::RIGHT:
            ++_x;
            lastCommand = "RIGHT";
            break;
        case Move::LEFT:
            --_x;
            lastCommand = "LEFT";
            break;
    }
    if (_y > SizeY || _y < 0 || _x > SizeX || _x < 0) {

        throw OffTheField(lastCommand, _x, _y);
    }
}

void Robot::printField() const {

    std::cout << " ";
    for (int k = 0; k < SizeX; ++k) {
        std::cout << "  " << k;
    }
    std::cout << std::endl;
    for (int i = 0; i < SizeY; ++i) {
        std::cout << i;
        for (int j = 0; j < SizeX; ++j) {
            if (i == _y && j == _x) {
                std::cout << std::setw(3) << "X";
                continue;
            }
            std::cout << std::setw(3) << "-";
        }
        std::cout << std::endl;
    }
}

void Robot::getStep() {

    int val;
    while (true) {
        std::cout << "What do you want to use?" << std::endl;
        std::cout << "1 - Arrows." << std::endl;
        std::cout << "2 - Enter coordinates X Y" << std::endl;
        std::cout << "0 - Exit" << std::endl;
        std::cout << "Input value: ";
        val = getch();
        std::cout << std::endl;
        if (val == '0') return;
        if (val < '0' || val > '2') {
            /*system("cls");
            std::cerr << std::endl << "Incorrect value!!!" << std::endl;
            continue;*/
            char comm = static_cast<char>(val);
            std::string s{comm};
            throw IllegalCommand(s);
        } else {
            break;
        }
    }

    if (val == '1') moveArrows();
    else moveTo_X_Y();

}

void Robot::moveArrows() {
    int val;
    const int UP{72}, DOWN{80}, RIGHT{77}, LEFT{75};
    while (true) {
        system("cls");
        std::cout << "Use arrows" << std::endl;
        printField();
        std::cout << "press 0 to exit" << std::endl;
        val = getch();
        if (val == '0') return;
        if (val == 224) {
            int tmp = getch();
            switch (tmp) {
                case UP:
                    move(Move::UP);
                    break;
                case DOWN:
                    move(Move::DOWN);
                    break;
                case RIGHT:
                    move(Move::RIGHT);
                    break;
                case LEFT:
                    move(Move::LEFT);
                    break;
            }
        } else throw IllegalCommand("Not an arrow");

    }
}

void Robot::moveTo_X_Y() {
    int x, y;
    while (true) {
        system("cls");
        printField();
        std::cout << "Enter -1 to exit" << std::endl;
        std::cout << "Enter coordinate X: ";
        x = getInt();
        if (x == -1) return;
        std::cout << std::endl;
        std::cout << "Enter coordinate Y: ";
        y = getInt();
        if (y == -1) return;
        while (x != _x || y != _y) {
            if (y > _y) {
                move(Move::DOWN);
                system("cls");
                printField();
                Sleep(500);
            }
            if (y < _y) {
                move(Move::UP);
                system("cls");
                printField();
                Sleep(500);
            }
            if (x > _x) {
                move(Move::RIGHT);
                system("cls");
                printField();
                Sleep(500);
            }
            if (x < _x) {
                move(Move::LEFT);
                system("cls");
                printField();
                Sleep(500);
            }
        }
    }
}

int Robot::getInt() {
    int num;

    std::cin >> num;
    if (std::cin.fail()) {
        throw IllegalCommand("not a number");
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (std::cin.gcount() > 1) {
        throw IllegalCommand("not a number");
    }
    return num;
}


