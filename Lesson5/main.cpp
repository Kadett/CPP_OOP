#include <iostream>
#include "src/Pair1.h"
#include "src/Pair.h"

int main() {
    // Task 1
    {
        Pair1<int> p1(6, 9);
        std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

        const Pair1<double> p2(3.4, 7.8);
        std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
    }
    // Task 2
    {
        Pair<int, double> p1(6, 7.8);
        std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

        const Pair<double, int> p2(3.4, 5);
        std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
    }


    return 0;
}

