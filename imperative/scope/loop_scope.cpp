/*
This program can be used to experiment with variable scope and lifetime.

Note: We modified this example several times during class, so the version shown
here may not exactly match the final version discussed.

Key observations:

1. Variables declared directly inside the function (a, i, j, and b) belong to
   the function scope. Their scope begins at their declaration and continues
   until the end of the function block.

2. In many implementations, storage for local variables is associated with the
   function activation when the function is called, even though the variables
   are not accessible until their declarations are encountered.

3. The for loop introduces a nested scope. Variables declared inside the loop
   (such as the loop variable i, j, and k) are visible only within the loop.

4. Variables in an inner scope may access variables from an enclosing scope.
   Therefore, the loop body can access a.

5. Variables in an outer scope cannot directly access variables declared in an
   inner scope. For example, k cannot be accessed after the loop ends.

6. The variables i and j declared inside the loop hide (shadow) the variables
   with the same names declared outside the loop.
*/

#include <iostream>

void f()
{
    int a = 10;
    int i = 5;
    char j = 'a';

    for (int i = 0; i < 10; i++)
    {
        int j = 0;
        int k = 0;

        std::cout << "i (inside loop): " << i << "\n"; // Uses the loop variable i
        std::cout << j << std::endl;                   // Uses the loop variable j
        std::cout << a << std::endl;                   // Uses a from the enclosing scope
    }

    int b = 20;

    std::cout << a << std::endl; // Function-scope variable a
    std::cout << i << std::endl; // Function-scope variable i
    std::cout << j << std::endl; // Function-scope variable j

    // std::cout << k << std::endl;
    // Error: k belongs to the loop scope and is not visible here.
}

int main()
{
    f();
    return 0;
}
