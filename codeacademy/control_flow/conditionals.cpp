#include <iostream>
// <string>

int main() {
    // if else
    int time = 10;
    std::string greeting;
    if (time < 12) {
        greeting = "Good morning";
    }
    else {
        greeting = "Good afternoon";
    }

    // shorthand if-else
    greeting = (time < 12) ? "Good morning" : "Good afternoon";

    // single conditional statements
    int number = 7;
    if (number == 7) {
        std::cout << "Lucky!\n";
    }
}