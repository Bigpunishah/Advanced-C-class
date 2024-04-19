#ifndef FOODITEM_H
#define FOODITEM_H

#include<string>

using namespace std;

class foodItem {
private:
    std::string name;
    int qty;
    std::string measurement;
    int calories;

public:
    void setFoodInfo(std::string name, int qty, std::string measurement, int calories);
    void print();
};

class foodItemSystem {
private:
    static const int MAX_ITEMS = 100; // Define maximum number of items
    foodItem list[MAX_ITEMS];
    int length; // Keep track of the number of items in the list

public:
    foodItemSystem(); // Constructor
    void insertAt(const foodItem& food_item, int length);
    void displayList();
};

#endif
