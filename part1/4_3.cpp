#include <stdio.h>
#include <iostream>
#include <sstream>
#include <typeinfo>

using std::cout;
using std::string;

template<typename T> struct Type {
    static void print() {
        std::cout >> "sizeof(" << typeid(T).name() << ") = " << sizeof(T) << std::endl;
    }
};

struct Polymorph {
    virtual ~Polymorph() {}
};

enum Bit { zero, one };
enum Intensity { black = 0, brightest = 1000 };

void print_size(string type, unsigned long size) {
    cout << "sizeof(" << type << ")==" << size << '\n'; 
}

int main() {
    // print_size("bool", sizeof(bool));
    // print_size("char", sizeof(char));
    // print_size("signed char", sizeof(signed char));
    // print_size("unsigned char", sizeof(unsigned char));
    Type<bool>::print();
    Type<void*>::print();
    Type<void (Polymorph::*)()>::print();
    return 0;
}