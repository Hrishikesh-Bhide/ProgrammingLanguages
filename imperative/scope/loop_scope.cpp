#include <iostream>

void f() {
    for (int i = 0; i < 10; i++) {
        std::cout << "i (in loop body): " << i << "\n";
    }
    // Uncommenting the line below will cause a compilation error
    // because 'i' is scoped inside the for loop.
    // std::cout << "i (outside loop body): " << i << "\n";
}

int main() {
    f();
    return 0;
}
