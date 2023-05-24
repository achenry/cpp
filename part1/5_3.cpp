// Use typedef to define the types:

int main() {
    // unsigned char
    typedef unsigned char UnsignedChar;

    // const unsigned char
    typedef const unsigned char ConstUnsignedChar;
    
    // pointer to integer
    typedef int* IntegerPointer;
    
    // pointer to pointer to char
    typedef char** PointerPointerChar;
    
    // pointer to arrays of char
    typedef char* PointerArrayChar;

    // array of 7 pointers to int
    typedef IntegerPointer Array7IntegerPointers[7];

    // pointer to an array of 7 pointers to int
    typedef Array7IntegerPointers* PointerArray7IntegerPointers;

    // array of 8 arrays of 7 pointers to int
    typedef IntegerPointer Array8Array7IntegerPointers[8][7];

    return 0;
}