// Define functions f(char), g(char&), and h(const char&) and call them with the arguments 'a', 49, 3, 300, c, uc, and sc.
// Which calls are legal?
// Which calls cause the compiler to introduce a temporary variable?

void f(char);
void g(char&);
void h(const char&);

int main() {
    char c = 'c';
    unsigned char uc = 'u';
    signed char sc = 's';
    
    // calls to f(char)
    f('a'); // ok
    f(49); // ok
    f(3); // ok
    f(300); // not ok, can't cast to char ?
    f(c); // ok
    f(uc); // ok
    f(sc); // ok

    return 0;
}