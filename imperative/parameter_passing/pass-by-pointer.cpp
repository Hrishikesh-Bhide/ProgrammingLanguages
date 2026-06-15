#include <iostream>

void increment(int* x) {
    (*x)++;
}

int main() {
    int* value = new int(0);

    increment(value);

    std::cout << *value << std::endl;
}