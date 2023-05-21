#include <iostream>

int main() {
    int grade = 11;
    
    switch (grade) {
        case 9:
            std::cout << "Freshman\n";
            break;
        case 10:
            std::cout << "Sophomore\n";
            break;
        case 11:
            std::cout << "Junior\n";
            break; // watch out for fallthrough for ommitted break statements!
        case 12:
            std::cout << "Senior\n";
            break;
        default: // run if none of the cases are true
            std::cout << "Invalid\n";
            break;
    }

    return 0;
}