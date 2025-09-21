// Name: Divneev Singh
// PRN: 24070123043
// Branch: EnTC A2

#include <iostream>
using namespace std; 

// Base class 
class Vehicle {
  private:
    int cost = 10000;

  public:
    string brand = "Ford";
    void color() {
        cout << "wao red " << endl;
    }
    void showCost() {
        cout << "Cost: " << cost << endl;
    }

  protected:
    void displayInfo() {
        cout << "Brand: " << brand << endl;
    }
};

// Derived class - public inheritance
class car: public Vehicle {
  public:
    string model = "Mustang";
    void speed() {
        cout << "Max speed is 200km/h" << endl;
        displayInfo(); 
    }
};

// Derived class - protected inheritance
class twowheeler: protected Vehicle {
  public:
    string type = "Jawa";
    void speed() {
        cout << "Max speed is 100km/h" << endl;
        displayInfo(); 
    }
};

int main() {
    Vehicle myVehicle;
    myVehicle.color();

    car myCar;
    myCar.color();
    myCar.speed();    

    // twowheeler myTwo;
    // myTwo.color();   //  not accessible (becomes protected in twowheeler)
    // myTwo.speed();   // would work if called here since it's public in twowheeler

    return 0;
}

/*
SAMPLE OUTPUT ::

wao red 
wao red 
Max speed is 200km/h
Brand: Ford
*/
