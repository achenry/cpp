// hash map - stores a collection of elements formed by a combination of a key value and a mapped value. Cannot contain duplicate keys.

#include <unordered_map>
#include <map>
#include <iostream>

int main() {
  // declare a hash map with string keys and integer values
  // std::unordered_map<std::string, int> country_codes;

  // declare and initialize with initializer list - each element is ussed to initalize a std::pair object
  std::unordered_map<std::string, int> country_codes(
    {
      {"India", 91},
      {"Italy", 39}
    }
  );

  // adding an element
  country_codes.insert({"Thailand", 66});
  country_codes.insert({"Peru", 66});
  country_codes.insert({"Peru", 9}); // duplicate key not inserted

  country_codes["Ireland"] = 353;
  country_codes["USA"] = 1;

  // removing an element
  country_codes.erase("Thailand"); // returns 1 if successful, else 0

  // checking for element
  if (country_codes.count("Ireland")) {
    std::cout << "There is a code for Ireland";
  }
  else {
    std::cout << "There isn't a code for Ireland";
  }

  // accessing elements
  std::cout << country_codes["USA"];
  std::cout << country_codes.at("Pakistan"); // prevents new element insertion, produces error

  // size
  std::cout << country_codes.size();

  // is empty
  std::cout << country_codes.empty();
  country_codes.erase("Ireland");
  country_codes.erase("USA");
  country_codes.erase("Peru");
  country_codes.erase("Thailand");
  std::count << country_codes.empty();

  // iterating through
  // for-each, counter variable is hash map element, of type std::pair, which has two member variables: .first for key value and .second for mapped value
  for (auto it: country_codes) {
    std::cout << it.first << " " << it.second << "\n";
  }

  // ordered vs. unordered maps
  std::unordered_map<int, char> unordered({{2, 'b'}, {1, 'a'}, {3, 'c'}});
  for (auto it: unordered) {
    std::cout << it.first << " " << it.second << "\n";
  }

  std::cout << "\n";

  std::map<int, char> ordered({{2, 'b'}, {1, 'a'}, {3, 'c'}});
  for (auto it: ordered) {
    std::cout << it.first << " " << it.second << "\n"; // sorted in ascending ordre
  }

}