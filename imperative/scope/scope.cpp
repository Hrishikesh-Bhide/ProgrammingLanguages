#include <iostream>
using namespace std;

// Understand the scope and lifetimes of all the variables in this code

int sumEvenInRange(int start, int end) {
    int sum = 0;
    for (int i = sum; i <= end; i++) {
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
