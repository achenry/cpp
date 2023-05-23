// Write declarations for the following:
#include <string>

int main() {
  //  a pointer to a character
  char *var1 = 0;

  //  an array of 10 integers
  int var2[10] = {0,1,2,3,4,5,6,7,8,9};

  //  a reference to an array of 10 integers
  int (&var3)[10] = var2;

  //  a pointer to an array of character strings
  std::string (*var4)[5] = 0;

  // a pointer to a pointer to a character
  char **var5 = &var1;

  // a constant integer
  int const var6 = 5;

  // a pointer to a constant integer
  int const *var7 = &var6;

  // constant pointer to an integer
  int *const var8 = var2 + 3;

  return 0;
}