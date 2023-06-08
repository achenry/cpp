// Write a function atoi(const char*) that takes a string containing digits and returns the corresponding int.
// For example, atoi("123") is 123.
// Modify atoi() to handle C++ octal and hexadecimal notation in addition to plain decimal numbers.
// Modify atoi() to handle the C++ character constant notation.

#include <stdexcept>
#include <string>
#include <limits>

using std::domain_error;
using std::range_error;
using std::string;

namespace {
    inline int digit(char c, int base) {
        // convert single character c to number
        int value;
        switch (c) {
            case '0': value = 0; break;
            case '1': value = 1; break;
            case '2': value = 2; break;
            case '3': value = 3; break;
            case '4': value = 4; break;
            case '5': value = 5; break;
            case '6': value = 6; break;
            case '7': value = 7; break;
            case '8': value = 8; break;
            case '9': value = 9; break;
            case 'a': case 'A': value = 10; break;
            case 'b': case 'B': value = 11; break;
            case 'c': case 'C': value = 12; break;
            case 'd': case 'D': value = 13; break;
            case 'e': case 'E': value = 14; break;
            case 'f': case 'F': value = 15; break;
            default:
                throw domain_error(string("invalid digit"));
        }
        if (value >= base)
            throw domain_error(string("invalid digit"));
        return value;
    }

    inline char next_char(char const *&p) {
        // take a reference to a pointer to a constant char, so that we can change the address stored by the pointer
        if (*p != '\\') // check that there is no escape sequence
            return *p++;
        else {
            // fetch digit value of next three octal digits after escape backslash
            int char_value = digit(p[1], 8) * std::pow(8, 2)
                             + digit(p[2], 8) * std::pow(8, 1)
                             + digit(p[3], 8) * std::pow(8, 0);
            if (char_value > std::numeric_limits<char>::max() 
            or char_value < std::numeric_limits<char>::min())
                throw domain_error(string("not a char"));
            
            p += 4; // increment string address forward by backslash and 3 digits
            return char_value;
        }
        // what about hexidecimal escape chars, why should an escape char be a digit,
    }

    void load_first_digit(char const *&s, int &value, bool &is_negative, int &base) {
        char c1 = next_char(s);
        is_negative = c1 == '-';

        if (c1 == '-' || c1 == '+')
            c1 = next_char(s);
        
        if (c1 == '\0') {
            // '0', '-', '+' are illegal
            throw domain_error(string("invalid input"));
        } else if (c1 != '0') {
            // not octal (0) or hexidecimal (0x), must be decimal
            base = 10;
        } else {
            // either octal or hexidecimal
            char const *p = s;
            // starts with 0, so get next char
            char c2 = next_char(p); // increment p
            if (c2 == 'x' || c2 == 'X') {
                // check if hexidecimal
                base = 16;
                s = p; // set string to incremented p (after x)
                c1 = next_char(s); // get next char after x
            } else {
                // if octal
                base = 8; // no need to get next char, 0 counts as an octal
            }
        }
        value = digit(c1, base);
    }
} // end unnamed namespace of helper functions ? why namespace, why inline funcs?

int atoi(char const *s) {
    int value, base;
    bool is_negative;
    load_first_digit(s, value, is_negative, base);
    while(char c = next_char(s)) {
        // about to multiply by base, so check that this is okay
        if (value > std::numeric_limits<int>::max() / base)
            throw range_error(string("out-of-range"));
        value *= base;
        int d = digit(c, base);
        // about to add d, so check that this is okay
        if (value > std::numeric_limits<int>::max() - d)
            throw range_error(string("out-of-range"));
        value += d;
    }
    return is_negative ? -value : value;
}