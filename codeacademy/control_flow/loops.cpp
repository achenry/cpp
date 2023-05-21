#include <iostream>

int main() {

    // while loops
    int count = 1;
    while (count <= 5) {
        count++; // counter variable / iterator
    }

    // infinite loop
    int alarm = 9;
    while (alarm > 8) {
        std::cout << "ding\n";
        break;
    }

    // do-while loops
    int price = 300;
    do {
        std::cout << "Too expensive!";
    } while (price > 500); // need semicolon!

    // for loop
    for (int i = 1; i <= 5; i++) {
        std::cout << i;
    }

    // for-each loops
    int fibonacci[5] = {0, 1, 1, 2, 3};
    for (int number : fibonacci) {
        std::cout << number;
    }

    // auto
    for (auto number : fibonacci) { // deduce the type of variable based on type of list
        std::cout << number;
    }
}