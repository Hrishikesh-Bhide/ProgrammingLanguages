#include <iostream>
using namespace std;

int* getStaticPointer() {
    static int* ptr = new int(0); // Allocated only once

    // Increment the value pointed to by ptr
    (*ptr) += 1;
    cout << "Value in function after increment: " << *ptr << endl;

    return ptr;
}

int main() {
    // Both p and q will point to the same static memory
    int* p = getStaticPointer();
    int* q = getStaticPointer();

    // Add 10 to the value pointed by p
    *p += 10;
    cout << "Value in main after adding 10: " << *p << endl;

    // Output values after second call
    cout << "Value of p in main: " << *p << endl;
    cout << "Value of q in main: " << *q << endl;

    // No delete needed — memory is managed by static storage duration
    return 0;
}
