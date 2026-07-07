#include <iostream>
#include <string>

using namespace std;

class Person {
  private:
    string name;
    int age;
    int* accountNumber;

    public:
    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
        accountNumber = new int(0);
   }

    // Parameterized constructor
    Person(string n, int a, int acc) {
        name = n;
        age = a;
        accountNumber = new int(acc);
    }

    // Destructor
    ~Person() {
        delete accountNumber;
    }

    string getName() {
        return name;
    }

    void setName(string n){
        if (name == "Unknown") {
            name = n;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Account Number: " << *accountNumber << endl;
    }
};