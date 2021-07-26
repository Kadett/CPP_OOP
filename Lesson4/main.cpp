#include <iostream>
#include "Task1/ArrayInt.h"
#include <vector>
#include <set>
#include <ctime>


void initVectorRandom(std::vector<int> &v, uint32_t max_number, size_t size) {
    srand(time(0));
    v.clear();
    v.reserve(size);
    for (int i = 0; i < size; ++i) {
        v.push_back(rand() % max_number);
    }
}

int countUniqueNumbers(std::vector<int> &vector){
    std::set<int> s;
    for(auto &i : vector){
        s.insert(i);
    }
    return s.size();
}



int main(){
    // Task 1
    ArrayInt arr{6, 2, 7, 1, 23, 3, 8, 13, 2, 6, 1, 12, 1, 3, 8, 8};
    arr.print();
    std::cout << std::endl;
    arr.pop_back();
    arr.print();
    std::cout << std::endl;
    arr.pop_front();
    arr.print();
    std::cout << std::endl;
    arr.sort();
    arr.print();

    





    return 0;
}