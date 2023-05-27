// Run some tests to see if your compiler really generates equivalent code for iteration using pointers and iteration using indexing.
// If different degrees of optimization can be requested, see if and how thataffects the quality of the generated code.

#include <iostream>
#include <time.h> // for clock()
#include <stddef.h> // for size_t
#include <string.h> // for memcpy()

void copy_with_pointers(char const *src, char *dst, size_t n) {
    for (size_t k = 0; k != n; ++k) {
        *dst++ = *src++;
    }
}

void copy_with_indices(char const *src, char *dst, size_t n) {
    for (size_t k = 0; k != n; ++k) {
        dst[k] = src[k];
    }
}

int main() {
    int const n_bytes = 100000;
    int const n_calls = 100;

    char *src = new char[n_bytes];
    char *dst = new char[n_bytes];

    // reduce paging effects by accessing all bytes
    memcpy(dst, src, n_bytes);
    clock_t start, end, reftime;

    // Test 1 (reference time)
    start = clock();
    for (int k = 0; k != n_calls; ++k) {
        memcpy(dst, stc, n_bytes);
    }
    end = clock();
    reftime = end - start;

    // Test 2 (pointers)
    start = clock();
    for (int k = 0; k != n_calls; ++k)
        copy_with_pointers(src, dst, n_bytes);
    end = clock();
    cout << "With pointers: "
         << static_cast<double>(end - start) / reftime
         << " times slower than memcpy.\n";

    // Test 3 (indices)
    start = clock();
    for (int k = 0; k != n_calls; ++k)
        copy_with_indices(src, dst, n_bytes);
    end = clock();
    cout << "With indices: "
         << static_cast<double>(end - start) / reftime
         << " times slower than memcpy.\n";

    // Clean up
    delete[] src;
    delete[] dst;
    
    return 0;
}