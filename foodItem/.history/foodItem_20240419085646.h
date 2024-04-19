#ifndef FOODITEM_H
#define FOODITEM_H

#include<string>

using namespace std;

class foodItem{
public:




private:
    string name, measurment;
    int qty, calories;    
};

class foodItemSystem{
public:
    void insertAt(const foodItem&, int);

private:
    foodItem list[500];
    int length;
};

#endif
