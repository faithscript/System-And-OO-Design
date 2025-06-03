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
