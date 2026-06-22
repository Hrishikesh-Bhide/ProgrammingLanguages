#include "LinkedList.cpp"
#include "BST.cpp"
#include "Person.cpp"

int main() {

    Person* p1 = new Person("Alice", 5);
    Person* p2 = new Person("Bob", 10);

    /*
        Since Person overloads the < operator, the following comparison:

            *p1 < *p2

        is equivalent to:

            p1->operator<(*p2);

        Here:
        - p1 is the object on which the operator is invoked
        - *p2 is the object passed as the parameter

        Since the comparison logic in Person compares names,
        this will compare "Alice" and "Bob".
    */

    if (*p1 < *p2) {
        cout << p1->name << " comes before "
             << p2->name << " alphabetically." << endl;
    }

    // Equivalent explicit method call
    if (p1->operator<(*p2)) {
        cout << "Same comparison using operator< method." << endl;
    }

    /*
        --------------------------------------------------------
        Be careful when using pointers with generics/templates.
        --------------------------------------------------------

        The BST below stores Person* objects, not Person objects.

        Therefore, the values being compared inside the BST are:

            Person*   vs   Person*

        which means the < operator is applied to memory addresses.

        As a result, the custom comparison logic inside Person:

            bool operator<(const Person& other) const

        will NOT be used.

        Instead, the BST will compare the addresses stored in p1
        and p2, which is usually not what we want.

        To use the Person comparison logic, we would either:

        1. Store Person objects directly:

               BST<Person> tree;

        or

        2. Modify the BST to accept custom comparison logic
           (a topic we will revisit later when discussing
           object-oriented design and generic libraries).
    */

    BST<Person*> tree;
    tree.add(p1);
    tree.add(p2);

    return 0;
}