#include <stdio.h>
#include <iostream>
#include <sstream>

using std::cout;
using std::string;

struct Polymorph {
    virtual ~Polymorph() {}
};

enum Bit { zero, one };
enum Intensity { black = 0, brightest = 1000 };

void print_size(string type, unsigned long size) {
    cout << "sizeof(" << type << ")==" << size << '\n'; 
}

int main() {
    print_size("bool", sizeof(bool));
    return 0;
}