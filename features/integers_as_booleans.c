#include <stdio.h>

int main()
{
    /*
        This example demonstrates how C historically uses integers
        to represent boolean truth values.

        In C, the integer value 0 is treated as false,
        while any non-zero integer value is treated as true.

        The logical NOT operator (!) converts:
            true  -> 0
            false -> 1

        Therefore, applying !! effectively converts any value
        into its boolean interpretation:

            !!0      -> 0
            !!nonzero -> 1

        This behavior existed in C long before the language
        introduced the _Bool type and the stdbool.h library.
    */

    printf("%d\n", !!3);    // prints 1
    printf("%d\n", !!-3);   // prints 1
    printf("%d\n", !!0);    // prints 0

    return 0;
}