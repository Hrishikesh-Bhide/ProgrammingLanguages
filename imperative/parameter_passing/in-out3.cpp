#include <iostream>
using namespace std;

int* getStaticPointer() {
    static int* ptr;
    ptr = new int(0); 
    // Allocates new memory on each call and overwrites 'ptr'
    // If the previous pointer value is not saved by the caller,
    // the previously allocated memory will never be deallocated,
    // causing a memory leak.

    (*ptr) += 1;
    cout << "Value in function after increment: " << *ptr << endl;

    return ptr;
}

int main() {
    // Each call creates a new allocation and overwrites the static pointer
    int* p = getStaticPointer();
    int* q = getStaticPointer();

    // Add 10 to the value pointed by p (still valid in main, but getStaticPointer() overwrote 'ptr')
    *p += 10;
    cout << "Value in main after adding 10: " << *p << endl;

    // p and q point to different memory blocks, so values differ
    cout << "Value of p in main: " << *p << endl;
    cout << "Value of q in main: " << *q << endl;

    // r points to the same location as p
    int* r = p;
    cout << "Value of r in main: " << *r << endl;

    delete p;
    delete q;
    // Do not delete r because it points to the same memory as p, which is already deleted

    // The following call would cause a memory leak because
    // the memory allocated by this call would become unreachable 
    // when getStaticPointer() is called again.

    // getStaticPointer()

    return 0;
}
