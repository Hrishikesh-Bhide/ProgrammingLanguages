#include <iostream>

int main(int argc, char const *argv[])
{
    /*
        This example demonstrates one way in which C++ is not fully orthogonal.

        Notice how printing primitive variables behaves differently from printing arrays.

        Primitive variables print their actual values:
            std::cout << z

        But when arrays are printed:
            std::cout << x

        the array expression decays into a pointer to its first element,
        so the memory address gets printed instead of the array contents.

        This behavior is somewhat inconsistent compared to primitive types
        and highlights how arrays in C++ behave differently from many other
        data structures and language constructs.

        Also notice the pointer arithmetic behavior below:

            x + 1

        moves forward by 4 bytes because the array expression degrades into
        a pointer to int.

        So:
            x + 1

        behaves similarly to:
            y + 1

        However:

            &x + 1

        behaves differently because &x is NOT of type int*.
        Its type is actually:

            int (*)[3]

        which means "pointer to an array of 3 integers."

        Therefore:
            &x + 1

        moves forward by the size of the entire array:
            3 * 4 = 12 bytes
        (assuming an int occupies 4 bytes).
    */

    int z = 0;

    int x[] = {1, 2, 3};

    int* y = new int[3]{1, 2, 3};

    // Some of the pointer arithmetic behavior is explained below.

    std::cout << "x                  : " << x << "\n";
    std::cout << "x + 1              : " << x + 1 << "\n";
    std::cout << "&x                 : " << &x << "\n";
    std::cout << "&x + 1             : " << &x + 1 << "\n\n";

    std::cout << "y                  : " << y << "\n";
    std::cout << "y + 1              : " << y + 1 << "\n";
    std::cout << "&y                 : " << &y << "\n";
    std::cout << "&y + 1             : " << &y + 1 << "\n\n";

    std::cout << "z                  : " << z << "\n";
    std::cout << "&z                 : " << &z << "\n";

    delete[] y;

    return 0;
}

/*
&x + 1 moves by 12 bytes because &x is a pointer to the entire array.
The type is int (*)[3], so +1 skips one whole array of 3 ints.

&x[0] + 1 moves by 4 bytes because &x[0] is a pointer to one int.
The type is int*, so +1 skips one int.

x + 1 moves by 4 bytes because in this expression, x decays to &x[0].
So it behaves like an int*.

y + 1 moves by 4 bytes because y is an int*.
So +1 skips one int.

&y + 1 moves by 8 bytes on a typical 64-bit machine because &y is a pointer to the pointer variable y.
The type is int**, so +1 skips one int* object, and an int* is usually 8 bytes on a 64-bit system.
*/
