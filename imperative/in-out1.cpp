#include <iostream>
using namespace std;

// Increments the value pointed to by the given pointer
void operateOnIntegers(int* p) {
    (*p) += 1;
}

int main() {
    int* r = new int(0);
    cout << "Value of r before: " << *r << endl;

    operateOnIntegers(r);
    cout << "Value of r after: " << *r << endl;

    delete r;
    return 0;
}
