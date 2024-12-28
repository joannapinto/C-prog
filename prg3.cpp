//3. Write a C++ program to demonstrate hybrid inheritance.

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

// Derived class from Animal
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks on land." << endl;
    }
};

// Derived class from Animal
class Bird : public Animal {
public:
    void fly() {
        cout << "Bird flies in the sky." << endl;
    }
};

// Derived class from both Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    void sound() {
        cout << "Bat makes sound." << endl;
    }
};

int main() {
    Bat bat;
    // Accessing methods from the base and derived classes
    bat.Mammal::eat();  // Call eat() from Animal via Mammal
    bat.walk();         // From Mammal
    bat.Bird::fly();    // Call fly() from Animal via Bird
    bat.sound();        // From Bat

    return 0;
}

