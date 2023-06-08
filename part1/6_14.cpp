// Write a function rev() that takes a sting argument and reverses the characters in it.
// That is, after rev(p) the last character of p will be the first etc.

#include <cstring>
#include <iostream>
#include <string>

void rev1(char *src) {
    for (char *dest = src + std::strlen(src) - 1; src < dest; ++src, --dest) {
        char tmp = *src;
        *src = *dest;
        *dest = tmp;
    }
}

void rev2(char *src) { std::reverse(src, src + std::strlen(src) - 1); }

void rev3(std::string &src) { std::reverse(src.begin(), src.end(); ) }

int main() {
    char s[6] = {"Aoife"};
    std::cout << s << std::endl;
    rev1(s);
    std::cout << s << std::endl;


}