// Name: Divneev Singh
// PRN: 24070123043
// Branch: EnTC A2

#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Animal {
public:
    void showType() const {
        cout << "This is an animal." << endl;
    }
};

// Base class 2
class Pet {
public:
    void showRole() const {
        cout << "This is a pet." << endl;
    }
};

// Derived class with multiple inheritance
class Dog : public Animal, public Pet {
public:
    void showDetails() const {
        showType();   // from Animal
        showRole();   // from Pet
        cout << "This is a dog." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.showDetails();
    return 0;
}

/*
SAMPLE OUTPUT ::

This is an animal.
This is a pet.
This is a dog.
*/
