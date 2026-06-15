#include <iostream>
using namespace std;

// x is just an integer and should be used as a regular integer inside
// the function.
//
// The only difference between this signature and:
//
//     void increment(int x)
//
// is that in the above version, a copy of the argument is
// stored in the stack frame of this function. In the current version,
// x is a reference to the original integer that was passed, so any
// changes made through x directly modify the original object.
//
// Because of this, the reference parameter must bind to an existing
// object in memory rather than a temporary value.

void increment(int& x) {
    x++;
}

int main() {
    int value = 10;
    int* val = new int(10);
    // This call is okay because *val refers to an integer object that
    // already exists in memory, so the reference parameter x can bind to it.
    increment(*val);

    cout << *val << endl;
}