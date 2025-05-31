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

// auto addWithCounter(int a, int b) {
//     static auto counter = 0;
//     static int* result; 
//     result = new int();  
//     *result = a + b + counter; 
//     counter++;   
//     cout << "First counter address: " << &counter << endl;
//     cout << "Address stored in result: " << result << endl;
//     cout << "Address of result: " << &result << endl;
//     return result;                  
// }

// auto inbetween(int a, int b) {
//     return addWithCounter(a, b);
// }

// int main() {
//     int* x = addWithCounter(1, 2);
//     cout << "First result: " << *x << endl;
//     int* y = inbetween(1, 2);
//     int* z = addWithCounter(1, 2);

//     cout << "First result: " << *x << endl;
//     cout << "Second result: " << *y << endl;
//     cout << "Third result: " << *z << endl;

//     cout << "First result address: " << x << endl;
//     cout << "Second result address: " << y << endl;
//     cout << "Third result address: " << z << endl;

//     delete x;
//     delete y;
//     delete z;

//     return 0;
// }
