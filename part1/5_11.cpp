// Read a sequence of words from input.
// Use Quit as a word that terminates the input.
// Print the words in the order they were entered.
// Don't print a word twice.
// Modify the program to sort the words before printing them.

#include <algorithm>
#include <iostream>
#include <string>

int main() {
  string word;
  string words[10]; // should be dynamic
  int words_idx = 0;
  while (1) {
    std::cin >> word;
    if string::strcmp(word, "Quit") {
      break;
    }
    // if word does not equal any of previously entered words
    words[words_idx] = word;
    words_idx += 1;
  }

  for (int k = 0; k < words.length(); ++k) {
    std::cout << word << std::endl;
  }
}