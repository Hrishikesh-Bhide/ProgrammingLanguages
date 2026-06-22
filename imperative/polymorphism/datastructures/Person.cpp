#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person() {
        name = "";
        age = 0;
    }

    Person(string n, int a) {
        name = n;
        age = a;
    }

    bool operator<(const Person& other) const {
        return name < other.name;
    }
};