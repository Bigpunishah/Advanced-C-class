#include "foodItem.h"
#include <string>

using namespace std;

//set foodItems variables
void foodItem::setFoodInfo(string name, int qty, string measurement, int calories){
    this->name = name;
    this->qty = qty;
    this->measurment = measurement;
    this->calories = calories;
}

//insert the foodItem at the location
void foodItemSystem::insertAt(const foodItem& food_item, int length){
    list[length] = food_item;
    if(length == this->length)
        length++;
}

//display the items in the list
void foodItemSystem::displayList(foodItem list[500]){
    
}