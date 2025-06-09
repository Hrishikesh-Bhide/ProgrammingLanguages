#include <iostream>
#include <typeinfo>
#include <any>

// Function overloading example demonstrating ad-hoc polymorphism

// Adds two integers but note: returns subtraction (intentionally to show ad-hoc polymorphism)
int add(int i, int j) {
  std::cout << "add of two integers!\n";
  return i - j;  // NOT addition here to illustrate changing semantics
}

// Adds three integers (overloaded with different number of parameters)
int add(int i, int j, int k) {
  std::cout << "add of three integers!\n";
  return i + j + k;  // normal addition
}

// Adds int and double - returns 0.0 (demonstrating arbitrary different behavior)
int add(int i, double j) {
  return 0.0;
}

// Adds two doubles normally
double add(double i, double j) {
  std::cout << "add of two doubles!\n";
  return i + j;
}

// Adds a double and an int but returns subtraction (different semantics)
double add(double i, int j) {
  std::cout << "add of double/integer!\n";
  return i - j;
}

// Concatenates two strings (demonstrating add overloaded for string type)
std::string add(std::string i, std::string j) {
  std::cout << "add of two strings!\n";
  return i + j;
}

int main() {
  // Call add with two ints -> calls int add(int, int)
  std::cout << "auto i = add(5, 4);\n";
  auto i = add(5, 4);

  // Call add with two doubles -> calls double add(double, double)
  std::cout << "auto j = add(5.0, 4.0);\n";
  auto j = add(5.0, 4.0);

  // Call add with double and int -> calls double add(double, int)
  std::cout << "auto k = add(5.0, 4);\n";
  auto k = add(5.0, 4);

  // Call add with two string literals -> calls std::string add(std::string, std::string)
  // Note: string literals convert to std::string automatically here
  std::cout << "auto l = add('hello', ', world.');\n";
  auto l = add("hello", ", world.");

  // Print the types of the returned values using typeid
  std::cout << "i ( add(5, 4); ) is a " << typeid(i).name() << "\n";
  std::cout << "j ( add(5.0, 4.0); ) is a " << typeid(j).name() << "\n";
  std::cout << "l ( add('hello', ', world')) is a " << typeid(l).name() << "\n";

  return 0;
}
