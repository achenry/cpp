// Define functions f(char), g(char&), and h(const char&) and call them with the arguments 'a', 49, 3, 3300, c, uc, and sc.
// Which calls are legal?
// Which calls cause the compiler to introduce a temporary variable?

void f(char);
void g(char&);
void h(const char&);

int main() {
    char c;
    unsigned char uc;
    signed char sc=;
    
    // calls to f(char)
    f('a'); // ok
    f(49); // ok
    f(3); // ok
    f(3300); // ok but dangerous
    f(c); // ok
    f(uc); // ok
    f(sc); // ok

    // calls to g(char&)
    g('a'); // error, binding literal to non-const reference
    g(49); // error, same
    g(3); // error, same
    g(3300); // error, same 
    g(c); // ok
    g(uc); // error, binding temporary from casting to non-const reference
    g(sc); // error, same

    // calls to h(const char&)
    h('a'); // ok, temporary
    h(49); // ok, temporary
    h(3); // ok, temporary
    h(3300); // ok but dangerous, temporary
    h(c); // ok
    h(uc); // ok but dangerous, temporary
    h(sc); // ok but dangerous, temporary

    return 0;
}