// Name: Divneev Singh
// PRN: 24070123043
// Branch: EnTC A2

#include <iostream>
using namespace std;

// Base class
class Electronics {
public:
    void power() {
        cout << "This electronic device needs power." << endl;
    }
};

// Derived class from Electronics
class Mobile : public Electronics {
public:
    void call() {
        cout << "This mobile can make calls." << endl;
    }
};

// Derived class from Mobile
class AndroidPhone : public Mobile {
public:
    void os() {
        cout << "This mobile runs on Android OS." << endl;
    }
};

// Derived class from Mobile
class iPhone : public Mobile {
public:
    void os() {
        cout << "This mobile runs on iOS." << endl;
    }
};

int main() {
    AndroidPhone samsung;
    iPhone apple;

    cout << "Android Phone actions:" << endl;
    samsung.power();
    samsung.call();
    samsung.os();

    cout << "\nIPhone actions:" << endl;
    apple.power();
    apple.call();
    apple.os();

    return 0;
}

/*
SAMPLE OUTPUT ::

Android Phone actions:
This electronic device needs power.
This mobile can make calls.
This mobile runs on Android OS.

IPhone actions:
This electronic device needs power.
This mobile can make calls.
This mobile runs on iOS.
*/
