// Name:Divneev Singh
// PRN: 24070123043
// Branch: EnTC A2

#include <iostream>
using namespace std;

// Base class
class Animal {
    public:
        string species = "Dog";
        void sound() {
            cout << "Sound: Woof Woof" << endl;
        }
};

// Derived class
class Dog : public Animal {
    public:
        string breed = "Labrador";
        void activity() {
            cout << "Activity: Loves to play fetch" << endl;
        }
};

int main() {
    Dog myDog;
    myDog.sound();  // inherited from Animal
    cout << "Species: " << myDog.species << endl;
    cout << "Breed: " << myDog.breed << endl;
    myDog.activity();  // defined in Dog

    return 0;
}

/*
SAMPLE OUTPUT ::

Sound: Woof Woof
Species: Dog
Breed: Labrador
Activity: Loves to play fetch
*/
