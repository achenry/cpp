// Read a sequence of words from input.
// Use Quit as a word that terminates the input.
// Print the words in the order they were entered.
// Don't print a word twice.
// Modify the program to sort the words before printing them.

#include <algorithm>
#include <iostream>
#include <string>
#include <list>
#include <set>

using std::copy;
using std::cout;
using std::cin;
using std::ostream_iterator;
using std::pair;
using std::string;

typedef std::set<string> WordSet;
typedef WordSet::iterator WordIter;
typedef std::list<WordIter> Index;


int main() {
  WordSet words;
  Index input_order;

  // input the words uniquely
  for (string new_word; cin >> new_word, new_word != "Quit";) {
    pair<WordIter, bool> &trace = words.insert(new_word);
    if (trace.second) 
      input_order.push_back(trace.first)
  }

  // output unique words in order of input
  copy(input_order.begin(), input_order.end(), ostream_iterator<string>(cout, "\n"));

  // output unique words in default set<string> order
  copy(words.begin(), words.end(), ostream_iterator<string>(cout, "\n"));

  return 0;
}