// Write a program that prints out the letters a, ..., z and the digits 0, ..., 9, and their integer values.
// Do the same for other printable characters.
// Do the same again, but use hexidecimal notation.

#include <iostream>
using std::dec;
using std::hex;

// array to constant chars, can switch order of char and const
const char char_table[] = "abcdefghijklmnopqrstuvwxyz0123456789-*&@. \~";

int main() {
  // decimal representation of each character (dec is optional since decimal is default for int(...))
  // iterate until one less than char_table string length to exclude terminal char
  for (int k = 0; k < sizeof(char_table) - 1; ++k) {
    std::cout << char_table[k] << '\t' << dec << int(char_table[k]) << std::endl;
  }

  // hexidecmal representation
  for (int k = 0; k < sizeof(char_table) - 1; ++k) {
    std::cout << char_table[k] << '\t' << hex << int(char_table[k]) << std::endl;
  }
}