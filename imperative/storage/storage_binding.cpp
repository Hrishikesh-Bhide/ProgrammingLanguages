#include <iostream>
using namespace std;

auto addWithCounter(int a, int b) {

    static auto counter = 0;

    // A single int is allocated on the heap when this declaration is executed
    // for the first time. Since result is static, it continues pointing to the
    // same heap object across all function calls.
    static int* result = new int();

    // Instead, if we had written:
    //
    // static int* result;
    // result = new int();
    //
    // then a new heap allocation would occur every time the function is called.
    // Unless those allocations were explicitly deleted, this would create a
    // memory leak.

    int salt = 10;

    *result = a + b + counter + salt;

    // counter has static storage duration, so its value survives across
    // function calls.
    counter++;

    // This changes the local variable salt, but the updated value is lost when
    // the function returns because salt has automatic storage duration.
    salt++;

    // Return the address stored in result.
    return result;
}

int* inbetween(int a, int b) {

    int x = 0;
    int y = 0;

    return addWithCounter(a, b);
}

int main() {

    int* x = addWithCounter(1, 2);

    cout << *x << endl;
    cout << x << endl;

    delete x;
    // deleteing x is BAD!!
    // x and the static pointer result both point to the same heap object.
    // After delete x, that heap object no longer exists, but result still
    // stores its address. As a result, result becomes a dangling pointer.
    //
    // Any future attempt to read from or write through result will cause
    // undefined behavior.

    int* z = new int(100);

    // Since the previous heap block was freed, the heap allocator may decide
    // to reuse that same memory location for z. Whether this happens is
    // implementation-dependent.

    int* y = inbetween(1, 2);

    // This eventually calls addWithCounter again.
    //
    // Inside addWithCounter, the statement:
    //
    //     *result = ...
    //
    // writes through a dangling pointer. This is undefined behavior because
    // result no longer points to a valid heap object.
    //
    // If the allocator happened to reuse the freed memory for z, this write
    // may overwrite z's value. However, because the program has already
    // entered undefined behavior, any outcome is possible.

    cout << *y << endl;
    cout << y << endl;

    cout << *z << endl;

    // In one possible execution, this could print 14 instead of 100 if the
    // memory used by z was overwritten through the dangling pointer result.
    // However, since the program is exhibiting undefined behavior, no
    // particular output is guaranteed.

    cout << z << endl;

    // delete x;   // Wrong: x has already been deleted above.
    // delete y;   // Wrong: x and y point to the same heap object, so this
                   // would attempt to delete the same memory twice.

    return 0;
}