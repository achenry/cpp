// Write a function cat() that takes two C-style string arguments and returns a string that is the concatenation of the arguments
// Use new to find storage for the result

#include <cstring>
#include <iostream>

using std::strlen;
using std::strcpy;

char* cat(char const *a, char const *b) {
    std::size_t len_a = strlen(a);
    std::size_t len_b = strlen(b);
    char* new_str = new char[len_a + len_b + 1];
    strcpy(new_str, a);
    strcpy(new_str + len_a, b);
    return new_str;
}

int main() {
    char a[5] = {"abcd"};
    char b[4] = {"eft"};
    char* new_str = cat(a, b);
    std::cout << new_str << std::endl;

    // std::cout << strlen(a);
    return 0;
}