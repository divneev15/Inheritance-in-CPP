# INHERITANCE IN C++

**Aim:**
To study and implement different types of inheritance in C++.

**Tools Used:**
VS Code or Online C++ Compiler

---

## Theory

Inheritance is one of the fundamental features of **Object-Oriented Programming (OOP)** in C++. It allows a class (called **derived class**) to inherit attributes and methods from another class (called **base class**).

This helps in:

* **Code reusability** (no need to rewrite same features).
* **Reduced redundancy** (common features are defined once in base).
* **Clearer relationships** (helps represent *is-a* relationships).
* **Extensibility** (easy to extend features).
* **Polymorphism support** (base class pointer/reference can access derived).

---

## Types of Inheritance in C++

1. **Single Inheritance**

   * A class inherits from only one base class.
   * Example: `Car` inherits from `Vehicle`.

2. **Multiple Inheritance**

   * A class inherits from more than one base class.
   * Example: `SmartCar` inherits from both `Vehicle` and `Device`.

3. **Multilevel Inheritance**

   * A chain of inheritance: Class C → derived from Class B → derived from Class A.
   * Example: `Dog → Mammal → Animal`.

4. **Hierarchical Inheritance**

   * Several derived classes inherit from the same base.
   * Example: `Dog` and `Cat` inherit from `Animal`.

5. **Hybrid Inheritance**

   * Combination of two or more types of inheritance.
   * Example: Hierarchical + Multiple used together.

---

## Effect of Access Specifiers in Inheritance

1. **Public Inheritance**

   * Public remains public, Protected remains protected, Private not inherited.

2. **Protected Inheritance**

   * Public & Protected of base become Protected in derived.

3. **Private Inheritance**

   * Public & Protected of base become Private in derived.

4. **Private Members**

   * Not directly inherited. Only accessible through base class methods.

---

# Implementation with Algorithm, Code & Output

---

Perfect! You’ve now uploaded all the codes. I can create **stepwise algorithms** for each of them, based on the inheritance type and code structure. Here’s a structured list:

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
