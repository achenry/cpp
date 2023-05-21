#include <iostream>

int main() {
    // break
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        std::cout << i;
    }

    // break in switch statements
    char symbol;
    std::cout << "Enter symbol: ";
    std::cin >> symbol;
    switch (symbol) {
        case 'F':
            std::cout << "Fahrenheit";
            break;
        case 'C':
            std::cout << "Celcius";
            break;
    }

    // continue
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        std::cout << i << "\n";
    }

    return 0;
}