#include <iostream>
using namespace std;

// This code is similar to the previous example.
//
// x is a reference to a pointer to an integer.
// Inside the function, x behaves like the original pointer that was passed.
// So x must be used as a pointer to an integer.

void increment(int*& x) {
    (*x)++;
}

int main() {
    int value = 0;
    int* ptr = &value;

    // Directly passing &value would result in an error:
    //
    //     increment(&value);
    //
    // because &value is a temporary pointer value. The parameter x is a
    // reference to a pointer, so it must bind to an existing pointer object.
    //
    // Once the address is stored in ptr, ptr becomes a pointer object that
    // x can bind to.
    //
    // x and ptr refer to the same pointer object. In this example,
    // incrementing (*x) changes value, not ptr itself.

    increment(ptr);

    cout << value << endl;
}