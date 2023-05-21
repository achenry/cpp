#include <iostream>

// creating a function
void doSomething() { // declaration: return type, name, parameters
    std::cout << "Functions are great!\n" // definition
}

double valueOfPi() {
    return 3.1415;
}

int lucky() {
    int lucky_number = 7; // only available inside function scope
    return lucky_number;
}

int main() {

    // calling afunc
    doSomething();

    double pi = valueOfPi();
    std::cout << pi;

    return 0;
}