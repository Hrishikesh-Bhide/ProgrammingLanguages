#include <iostream>
using namespace std;

auto f() {
    static int counter = 0;
    static int* result;
    result = new int(5);
    counter = 0;
    counter++;
    (*result)++;

    cout << result << endl;
    //cout << *result << endl;
    //cout << result << endl;
}

int main() {
    f();
    f();
    f();
    return 0;
}