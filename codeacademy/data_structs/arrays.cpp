#include <iostream>

int main() {
  // declare an array
  // char grade[5]; // can contain up to 5 char values

  // declare and initialize an array
  // char grade[5] = {'A', 'B', 'C', 'D', 'F'};
  char grade[] = {'A', 'B', 'C', 'D', 'F'}; // can omit size if initializing with declaration

  // accessing elements
  std::cout << grade[0];

  grade[0] = 'S';
  std::cout << grade[0];

  // multi-dim arrays
  int table[3][5] = {
    {0, 1, 2, 3, 4} ,      /* initializers for first row */
    {5, 6, 7, 8, 9} ,      /* initializers for second row */
    {10, 11, 12, 13, 14}   /* initializers for third row */
  };

  std::cout << table[2][1];

  // int 3d_table[3][5][2];

  // iterating through an array
  int fibonacci[5] = {0, 1, 1, 2, 3};
  for (int i = 0; i < 5; i++) {
    std::cout << fibonacci[i];
  }

  for (int num: fibonacci) {
    std::cout << num;
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      std::cout << table[i][j];
    }
    std::cout << "\n";
  }

  

}