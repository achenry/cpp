#include <vector>
#include <iostream>

int main() {

  // creating a vector
  // std::vector<char> alphabet;
  std::vector<char> alphabet = {'a', 'b', 'c'};

  // adding an element
  std::vector<int> weights;
  weights.push_back(25);
  weights.push_back(45);

  // removing an element
  weights.pop_back(); // no return value

  // accessing vector elements
  std::cout << alphabet[2];
  std::cout << alphabet.front();
  std::cout << alphabet.back();

  // size of a vector
  std::vector<std::string> colors = {"Red", "Green", "Blue"};
  std::cout << colors.size();

  // is empty
  std::cout << colors.empty();
  colors.pop_back();
  colors.pop_back();
  colors.pop_back();
  std::cout << colors.empty();

  // iterating through a vector
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  for (int i = 0; i < vowels.size(); i++) {
    std::cout << vowels[i] << " ";
  }

  for (char letter: vowels) {
    std::cout << letter << " ";
  }

  return 0;
}