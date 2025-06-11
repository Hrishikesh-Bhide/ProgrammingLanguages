#include <iostream>
using namespace std;

int val = 2;

int f() {
    val += 1;
    return val;
}

int main() {
    int x = f() + f() * f();
    cout << x << endl;
    return 0;
}
