#include <unordered_set>
#include <set>
#include <iostream>

int main() {
  // cannot contain duplicate elements, keys are immutable, accessible by key values

  // creating a set
  // std::unordered_set<int> primes;
  std::unordered_set<int> primes({2, 3, 5, 7});

  // adding an element
  primes.insert(2);
  primes.insert(3);
  primes.insert(3); // duplicate value not inserted

  // removing an element
  primes.erase(2); // returns 1 if successfully removed, else 0

  // checking for element
  if (primes.count(4)) {
    std::cout << "4 is a prime";
  }
  else {
    std::cout << "4 is not a prime";
  }

  // size of set
  std::unordered_set<char> symbols({'x', 'y', 'z'});
  std::cout << symbols.size();

  // is empty
  std::cout << symbols.empty();
  symbols.erase('x');
  symbols.erase('y');
  symbols.erase('z');
  std::cout << symbols.empty();

  // unordered_set is faster for searching, inserting, deleting

  // set has order and can be iterated over
  std::unordered_set<int> unordered({4, 2, 7, 1, 3});
  std::cout << "unordered_set: ";
  for(int n: unordered) {
    std::cout << n << " ";
  }

  std::cout << "\n";

  std::set<int> ordered({4, 2, 7, 1, 3});
  std::cout << "set: ";
  for(int n: ordered) {
    std::cout << n << " "; // sorted in ascending order
  }
}
