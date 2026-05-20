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

        the array expression degrades into a pointer to its first element,
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