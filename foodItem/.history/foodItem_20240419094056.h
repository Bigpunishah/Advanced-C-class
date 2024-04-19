#ifndef FOODITEM_H
#define FOODITEM_H

#include<string>

using namespace std;

class foodItem{
public:
    void setFoodInfo(string, int, string, int);




private:
    string name, measurment;
    int qty, calories;    
};

class foodItemSystem{
public:
    void insertAt(const foodItem&, int);
    void displayList(foodItem list[]);

private:
    foodItem list[500];
    int length;
};

#endif
