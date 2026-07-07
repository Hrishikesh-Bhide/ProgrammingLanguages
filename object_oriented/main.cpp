#include "Person.cpp"

int main() {

    Person p1;
    Person p2("Alice", 25, 12345);

    p1.display();
    p2.display();
    //p2.age = -10;

    p1.getName();

    return 0;
}