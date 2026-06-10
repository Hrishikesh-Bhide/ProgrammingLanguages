#include <iostream>

int alternatingProduct(int n) {
    if (n == 0) {
        return 1;
    }

    static int evenFactor = 1;

    int result = alternatingProduct(n - 1);

    if (n % 2 == 0) {
        evenFactor = 2;
    } else {
        evenFactor = 1;
    }

    return evenFactor * result;
}

int main() {
    std::cout << alternatingProduct(7) << std::endl;
    return 0;
}