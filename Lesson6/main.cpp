#include <iostream>
#include <limits>

// Task 1
void getInt(){
    int num;
    while (true){
        std::cout << "Enter a number:" << std::endl;
        std::cin >> num;
        if (std::cin.fail()){
            std::cout << "Error: not a number!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (std::cin.gcount() > 1) {
            std::cout << "Error: not a number!" << std::endl;
            continue;
        }
        break;
    }
}

int main(){
    // Task 1
    getInt();

    return 0;
}