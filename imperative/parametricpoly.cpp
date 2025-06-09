#include <iostream>
#include <string>
#include <typeinfo>
#include <cxxabi.h>

// Returns the minimum of two values of type T
// Works for any type that supports the <= operator
template <typename T>
T minimum(T a, T b) {
    std::cout << "Comparing two values of type: " << typeid(T).name() << "\n";
    return (a <= b) ? a : b;
}

// Adds two values of type T
// Works for any type that supports the + operator
template <typename T>
T add(T a, T b) {
    std::cout << "Adding two values of type: " << typeid(T).name() << "\n";
    return a + b;
}

// Computes the modulus of two values of type T
// Only works for integral types that support the % operator
// Will cause a compile-time error for types like std::string or floating-point numbers
template <typename T>
T modulus(T a, T b) {
    std::cout << "Modulusing two values of type: " << typeid(T).name() << "\n";
    return a % b;
}

int main() {
    std::cout << "auto i = minimum(5, 4);\n";
    auto i = minimum(5, 4);

    std::cout << "auto j = minimum(5.0, 4.0);\n";
    auto j = minimum(5.0, 4.0);

    std::cout << "auto k = add(std::string(\"Hello \"), std::string(\"World\"));\n";
    auto k = add(std::string("Hello "), std::string("World"));

    std::cout << "auto l = minimum(std::string(\"Hello \"), std::string(\"World\"));\n";
    auto l = minimum(std::string("Hello "), std::string("World"));

    // This will fail at compile-time as the modulus operator (%) is not defined for std::string
    std::cout << "auto m = modulus(std::string(\"Hello \"), std::string(\"World\"));\n";
    // auto m = modulus(std::string("Hello "), std::string("World")); // Uncommenting this will cause a compilation error

    std::cout << i << " (i) - is of type: " << typeid(i).name() << "\n";
    std::cout << j << " (j) - is of type: " << typeid(j).name() << "\n";
    std::cout << k << " (k) - is of type: " << typeid(k).name() << "\n";
    std::cout << l << " (l) - is of type: " << typeid(l).name() << "\n";

    return 0;
}
