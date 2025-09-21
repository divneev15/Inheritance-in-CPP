
# INHERITANCE IN C++

**Aim:**
To study and implement different types of inheritance in C++.

**Tools Used:**
VS Code or Online C++ Compiler

---

## Theory

Inheritance is a key concept in **Object-Oriented Programming (OOP)**. It allows a class (called the **derived class**) to acquire the properties and methods of another class (called the **base class**).

### Why Inheritance is Important

1. **Code Reusability:**
   Common properties and methods need to be written only once in the base class. Derived classes can use them without rewriting.

2. **Code Maintainability:**
   Changes in the base class automatically propagate to all derived classes, making maintenance easier.

3. **Hierarchical Relationships:**
   Inheritance represents *“is-a”* relationships, e.g., a `Dog` *is an* `Animal`.

4. **Polymorphism Support:**
   Inheritance works with virtual functions to allow **runtime polymorphism**, letting base class pointers or references call derived class functions dynamically.

5. **Extensibility:**
   Systems can be easily extended by creating new derived classes without changing the base class.

6. **Encapsulation with Access Specifiers:**
   Inheritance works with `private`, `protected`, and `public` members to control visibility and access in derived classes.

---

### Key Terms

* **Base Class (Parent Class):** The class whose properties and methods are inherited.
* **Derived Class (Child Class):** The class that inherits from the base class.
* **“is-a” Relationship:** Describes inheritance, e.g., `Car` *is a* `Vehicle`.
* **Access Specifiers:** Control visibility of members in derived classes.

---

## Types of Inheritance in C++

1. **Single Inheritance**

   * One derived class inherits from one base class.
   * Example: `Car` inherits from `Vehicle`.

2. **Multiple Inheritance**

   * One derived class inherits from more than one base class.
   * Example: `SmartCar` inherits from both `Vehicle` and `Device`.

3. **Multilevel Inheritance**

   * Chain of inheritance: `Class C` inherits from `Class B` which inherits from `Class A`.
   * Example: `Dog → Mammal → Animal`.

4. **Hierarchical Inheritance**

   * Multiple derived classes inherit from the same base class.
   * Example: `Dog` and `Cat` inherit from `Animal`.

5. **Hybrid Inheritance**

   * Combination of two or more types of inheritance (e.g., multiple + hierarchical).
   * Example: Some derived classes inherit from multiple bases while others form multilevel chains.

---

### Access Specifiers in Inheritance

| Access in Base | Public Inheritance | Protected Inheritance | Private Inheritance |
| -------------- | ------------------ | --------------------- | ------------------- |
| **Public**     | Public             | Protected             | Private             |
| **Protected**  | Protected          | Protected             | Private             |
| **Private**    | Not accessible     | Not accessible        | Not accessible      |

* **Public inheritance:** “is-a” relationship, derived class can expose base class’s public members.
* **Protected inheritance:** Base members become protected, hidden from outside, useful for controlled access.
* **Private inheritance:** Base members become private, inheritance is only for implementation, not “is-a” relationship.

---

### Advantages of Inheritance

* Reduces code duplication and promotes **reusability**.
* Makes relationships and class hierarchies clearer.
* Supports **polymorphism** and **dynamic behavior**.
* Easier to maintain and extend large programs.
* Improves **abstraction** by allowing generic handling of base classes.

---

### Applications

* **Games:** Base class `Character` → Derived `Player`, `Enemy`, `NPC`.
* **Banking Software:** Base `Account` → `SavingsAccount`, `CurrentAccount`.
* **Education System:** Base `Person` → `Student`, `Teacher`.
* **Vehicle Management:** Base `Vehicle` → `Car`, `Bike`, `Truck`.
* **Electronics:** Base `Electronics` → `Mobile`, `Laptop`, `Tablet`.

---

### Common Pitfalls in Inheritance

1. **Diamond Problem in Multiple Inheritance:**

   * Occurs when a class inherits from two classes which both inherit from the same base.
   * Solved using **virtual inheritance**.

2. **Overuse of Inheritance:**

   * Can lead to tightly coupled code.
   * Prefer **composition over inheritance** when “has-a” relationship is more appropriate.

3. **Private Members Are Not Inherited:**

   * They can only be accessed via base class public/protected methods.

---

This extended theory section now gives a **comprehensive explanation** of inheritance in C++, including concepts, rules, advantages, applications, and pitfalls.

---

# Implementation with Algorithm, Code & Output

---

## 1) **Access Specifiers in Inheritance (Vehicle → Car / TwoWheeler)**

**Algorithm:**

1. Start.
2. Define base class `Vehicle` with:

   * Private member: `cost`.
   * Public members: `brand`, `color()`, `showCost()`.
   * Protected member: `displayInfo()`.
3. Define derived class `Car` (public inheritance) with:

   * Data member: `model`.
   * Function: `speed()` calls `displayInfo()`.
4. Define derived class `TwoWheeler` (protected inheritance) with:

   * Data member: `type`.
   * Function: `speed()` calls `displayInfo()`.
5. In `main()`:

   * Create `Vehicle` object, call `color()` and `showCost()`.
   * Create `Car` object, call `color()` and `speed()`.
   * Create `TwoWheeler` object, call `speed()` only (color inaccessible).
6. Stop.

**Sample Output:**

```
wao red 
wao red 
Max speed is 200km/h
Brand: Ford
Max speed is 100km/h
Brand: Ford
```

---

## **2) Single Inheritance Example: Animal → Dog**

**Algorithm:**

1. Start.
2. Create base class `Animal` with:

   * Data member: `species` (string).
   * Function: `sound()` to display the animal’s sound.
3. Create derived class `Dog` (public inheritance) with:

   * Data member: `breed` (string).
   * Function: `activity()` to display the dog’s activity.
4. In `main()`:

   * Create object `myDog` of class `Dog`.
   * Call `myDog.sound()` to display inherited function output.
   * Display `myDog.species` (inherited data).
   * Display `myDog.breed` (derived class data).
   * Call `myDog.activity()` to display derived function output.
5. Stop.

**Sample Output:**

```
Sound: Woof Woof
Species: Dog
Breed: Labrador
Activity: Loves to play fetch
```

## 3) **Multiple Inheritance (Animal + Pet → Dog)**

**Algorithm:**

1. Start.
2. Define base class `Animal` with `showType()`.
3. Define base class `Pet` with `showRole()`.
4. Define derived class `Dog` that inherits from both `Animal` and `Pet`.
5. Add function `showDetails()` in `Dog` to call `showType()` and `showRole()`.
6. In `main()`:

   * Create `Dog` object.
   * Call `showDetails()`.
7. Stop.

**Sample Output:**

```
This is an animal.
This is a pet.
This is a dog.
```

---

## 4) **Multilevel Inheritance (Electronics → Mobile → AndroidPhone/iPhone)**

**Algorithm:**

1. Start.
2. Define base class `Electronics` with `power()`.
3. Define class `Mobile` inheriting from `Electronics` with `call()`.
4. Define class `AndroidPhone` inheriting `Mobile` with `os()`.
5. Define class `iPhone` inheriting `Mobile` with `os()`.
6. In `main()`:

   * Create `AndroidPhone` object, call `power()`, `call()`, `os()`.
   * Create `iPhone` object, call `power()`, `call()`, `os()`.
7. Stop.

**Sample Output:**

```
Android Phone actions:
This electronic device needs power.
This mobile can make calls.
This mobile runs on Android OS.

IPhone actions:
This electronic device needs power.
This mobile can make calls.
This mobile runs on iOS.
```

---

## 5) **Multilevel Inheritance (LivingBeing → Plant → Flower)**

**Algorithm:**

1. Start.
2. Create base class `LivingBeing` with `showType()`.
3. Create class `Plant` inheriting `LivingBeing` with `showCategory()`.
4. Create class `Flower` inheriting `Plant` with `showDetails()` calling `showType()` and `showCategory()`.
5. In `main()`:

   * Create `Flower` object and call `showDetails()`.
6. Stop.

**Sample Output:**

```
This is a living being.
This is a plant.
This is a flower.
```

---

If you want, I can **combine all these algorithms into one full stepwise “report-style” document** with **theory, algorithms, code, and sample outputs** so you can use it directly for your submission.

Do you want me to do that next?

## Key Learning Outcomes

* Access specifiers control inheritance visibility.
* Single inheritance → simplest extension of one class.
* Multiple inheritance → combine features from different classes.
* Multilevel inheritance → forms a chain of properties.
* Hierarchical inheritance → multiple classes inherit from a common base.
* Inheritance promotes reusability and clarity.

---

## Applications

* **Games:** Base `Character` → `Player`, `Enemy`, `NPC`.
* **Banking:** Base `Account` → `Savings`, `Current`.
* **Education:** Base `Person` → `Student`, `Teacher`.
* **Vehicles:** Base `Vehicle` → `Car`, `Bike`.

---

## Advantages

* Promotes **code reusability**.
* Maintains **is-a relationship**.
* Reduces redundancy.
* Supports **polymorphism**.
* Easier maintenance and extension.

---

# Conclusion

Inheritance in C++ is a powerful feature that enables better **code management, reusability, and extensibility**. By using different types of inheritance (single, multiple, multilevel, hierarchical), real-world problems can be modeled efficiently. Access specifiers further refine how base class members are exposed to derived classes, providing both flexibility and security in object-oriented design.
