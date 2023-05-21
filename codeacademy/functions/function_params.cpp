#include <iostream>

// function parameters - defined in function declaration
int feetToInches(int ft) {
    return ft * 12;
}

// multiple parameters
double totalPrice(int items, double price, bool discount) {
    if (discount) {
        return 0.8 * items * price;
    }
    else {
        return items * price;
    }
}

// pass by reference - allow func to modify value of its argument variables using reference operator &
void swap(int &i, int &j) {
    int temp = i;
    i = j;
    j = temp;
}

// default parameters
void message(std::string language = "C++") {
    std::cout << "I like to code with " << language << "\n";
}

int main() {
    // function arguements - value passed to function when function is called
    std::cout << feetToInches(12);

    totalPrice(10, 4.99, true);

    // function call without argument - default paramter
    message();

    // function call with argument
    message("Java");

    int first = 10, second = 20;
    std::cout << "Before swap: " << first << " " << second << "\n";

    // call the function and swap the values of first and second
    swap(first, second);

    std::cout << "After swap: " <<first << " " << second << "\n";

    return 0;
}