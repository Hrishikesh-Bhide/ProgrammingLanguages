#include <iostream>
using namespace std;

int addWithCounter(int a, int b) {
    int counter = 0;         
    int result = 0;  
    result = a + b + counter; 
    counter++;                      
    return result;                  
}

int main() {
    int x = addWithCounter(1, 2);
    int y = addWithCounter(1, 2);
    int z = addWithCounter(1, 2);

    cout << "First result: " << x << endl;
    cout << "Second result: " << y << endl;
    cout << "Third result: " << z << endl;

    return 0;
}
