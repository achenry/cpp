// Write a function itoa(int i, char b[]) 
// that creates a string representation of i in b and returns b

#include <cstdio>

namespace {
    char const digit[] = "0123456789";
}

char* itoa(int i, char b[]) {
    char *p = b;
    if (i < 0) {
        *p++ = '-';
        i = -i;
    }
    int shifter = i;

    // move to where integer representation ends
    do {
        ++p; // advance char address
        shifter /= 10;
    } while (shifter);
    *p = '\0'; // set final null char

    // move backwards through integer representation
    do {
        *--p = digit[i % 10];
        i /= 10;
    } while(i);

    return b;
}

char * itoa2(int i, char b[]) {
    std::sprintf(b, "%d", i);
    return b;
}