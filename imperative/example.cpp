// A simple imperative program demonstrating the five major
// characteristics of the imperative paradigm:
//
// 1. State, expressions, and assignment statements
// 2. Variables (name, value, type, address, scope, and lifetime)
// 3. Loops
// 4. Conditionals
// 5. Procedural abstraction

#include <iostream>
using namespace std;

int sumEvenInRange(int start, int end) {
    int sum = 0;

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int result = 0;
    result = sumEvenInRange(1, 10);

    cout << "Sum of even numbers: " << result << endl;

    return 0;
}