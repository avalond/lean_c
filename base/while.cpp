#include <iostream>

void whileMain() {
    int sum = 0, val = 1;
    while (val <= 10) {
        sum += val;
        ++val;
    }
    std::cout << "sum of 1to 10 inclusive is "
              << sum << std::endl;
}