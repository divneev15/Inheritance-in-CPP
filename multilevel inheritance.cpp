// Name: Divneev Singh
// PRN: 24070123043
// Branch: EnTC A2

#include <iostream>
#include <string>
using namespace std;

// Base class 
class LivingBeing {
public:
    void showType() const {
        cout << "This is a living being." << endl;
    }
};

// Derived class from LivingBeing
class Plant : public LivingBeing {
public:
    void showCategory() const {
        cout << "This is a plant." << endl;
    }
};

// Derived class from Plant
class Flower : public Plant {
public:
    void showDetails() const {
        showType();       // from LivingBeing
        showCategory();   // from Plant
        cout << "This is a flower." << endl;
    }
};

int main() {
    Flower myFlower;
    myFlower.showDetails();
    return 0;
}

/*
SAMPLE OUTPUT ::

This is a living being.
This is a plant.
This is a flower.
*/
