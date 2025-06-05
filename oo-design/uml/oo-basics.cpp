/*
    Classes are the blueprint for creating objects
    An object is an instance of a class
 */

 // Example: Shopping Cart in C++

#include <iostream>
#include <map>
using namespace std;

class ShoppingCart {
private:
    int total;
    map<string, int> items;

public:
    ShoppingCart(){
        total = 0;
    }

    void add_item(string name, int quantity, int price){
        total += quantity * price;
        items[name] += quantity;
    }

    void remove_item(string name, int quantity, int price){
        total -= quantity * price;
        items[name] -= quantity;
        if(items[name] <= 0) items.erase(name);
    }

    void checkout(int cash_paid){
        if (cash_paid < total) {
            cout << "You paid " << cash_paid << " but cart amount is " << total << endl;
        } else {
            cout << "Exchange amount: " << cash_paid - total << endl;
        }
    }

    void show_cart() {
        cout << "Total cart amount: " << total << endl;
        cout << "Cart items:\n";
        for (auto &pair : items) {
            cout << pair.first << ": " << pair.second << endl;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 
    ENCAPSULATION
        This is done by hiding the data (making it private) and giving access through public methods
*/

class Product {
private:
    int maxPrice;

public:
    Product() {
        maxPrice = 900;
    }

    void sell() {
        cout << "Selling Price: " << maxPrice << endl;
    }

    void setMaxPrice(int price) {
        maxPrice = price;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 
    ABSTRACTION
        Show only important details, hide the rest.
*/

// This is an abstract class (it has interface-like behavior)
class Animal {
protected:
    string name;

public:
    Animal(string n): name(n) {}
    void breathe(){
        cout << name << " is breathing..." << endl;
    }
    virtual void makeSound() = 0;
};

// Dog inherits from Animal
class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}

    void makeSound() override {
        cout << name << " says Woof!" << endl;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    INHERITANCE
*/
class Person {
protected:
    string name;

public:
    Person(string n) : name(n) {}

    string getName() {
        return name;
    }

    virtual bool isEmployee() {
        return false;
    }
};

class Employee : public Person {
public:
    Employee(string n) : Person(n) {}

    bool isEmployee() override {
        return true;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* POLYMORPHISM
Same function name behaves differently for different classes.
*/
class Piece {
public:
    virtual void move() = 0;
};

class Bishop : public Piece {
public:
    void move() override {
        cout << "Bishops move diagonally" << endl;
    }
};

class Knight : public Piece {
public:
    void move() override {
        cout << "Knights move in an L shape" << endl;
    }
};

void moveTest(Piece &piece) {
    piece.move();
}

