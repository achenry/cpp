#include <iostream> // preprocessor directive
/*
multi
line
comment 
*/
int main(){
    std::cout << "Hello, world!\n";
    std::cout << "Codeacademy is " << 10 << " years old."; // insertion operator 
    std::cout << "C++ is fun!\n";
    std::cout << "Hello World again!" << std::endl;

    int x;
    std::cin >> x; // extraction operator

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You are " << age << " years old.";

    int x, y;
    std::cin >> x >> y; // make sure to separate each input value with a space.
    std::cout << "You entered " << x << " and " << y;

    return 0;
}