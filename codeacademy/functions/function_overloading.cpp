#include <iostream>

// function overloading to enable functions to handle different types/numbers of parameters (overload differentiation)
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    
    // overload resolution matches the function call to the correct overload based on the type and number of arguments passed in the function call
    std::cout << add(3, 2);
    std::cout << "\n";
    std::cout << add(5.3, 1.4);

    return 0;
}