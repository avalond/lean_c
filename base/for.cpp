#include <iostream>

//
// Created by kevin on 2016/10/12.
//
void forclass() {
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i;
        std::cout << "sum of 1 to 10 inclusive is"
                  << sum << std::endl;
    }
}

