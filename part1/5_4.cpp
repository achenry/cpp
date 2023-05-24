// Write a function that swaps (exchanges the values of) two integers using int* as the argument type.
// Write another swap function using int& as the argument type.

void swap1(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap2(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    return 0;
}