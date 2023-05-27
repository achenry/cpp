// Write a function that counts the number of occurrences of a pair of letters in a string
// and another that does the same in a zero-terminated array of char

#include <string>
using std::string;

size_t count_charpair(string const &, char, char);
size_t count_charpair(char const *, char, char);

size_t count_charpair(string const &s, char a, char b) {
    size_t num_pairs = 0;
    string::iterator p = s.begin();
    while (p != s.end())
        if (*p++ == a) // if char located at iterator p is the first character in the pair, then increment the iterator
            if (p != s.end() && *p == b) // if we have not reached the end of the string and the value at the iterator is the second char in the par
                ++num_pairs;
    return num_pairs;
}

size_t count_charpair(char const *s, char a, char b) {
    size_t num_pairs = 0;
    while (*s) // while not at the null character
        if (*s++ == a) // if the current char equals a, then increment iterator
            if (*s == b) // if the next char equals b, don't need to check again for end because then it will just be null char
                ++num_pairs;
    return num_pairs;
}