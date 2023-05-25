// Define an array of strings where the strings contain the names of the months.
// Print those strings.
// Pass the array to a function that prints those strings.

#include <iostream>
#include <string>
#include <algorithm>

using std::copy;
using std::cout;
using std::string;
using std::ostream_iterator;

int const n_months = 12;
char const *month_names1[n_months] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
string month_names2[n_months] = {string("Jan"), string("Feb"), string("Mar"), string("Apr"), string("May"), string("Jun"), string("Jul"), 
                                  string("Aug"), string("Sep"), string("Oct"), string("Nov"), string("Dec")};


int main() {
  for (int k = 0; k != n_months; ++k) {
    std::cout << month_names1[k] << std::endl;
  }

  copy(&month_names2[0], &month_names2[0] + n_months, 
        ostream_iterator<string>(cout, "\n"));

  return 0;
}