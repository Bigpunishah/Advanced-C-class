#include "foodItem.h"
#include <iostream>
#include <string>

using namespace std;

//set foodItems variables
void foodItem::setFoodInfo(string name, int qty, string measurement, int calories){
    this->name = name;
    this->qty = qty;
    this->measurement = measurement;
    this->calories = calories;
}

void foodItem::print(){
    cout<<name <<" "<<qty<<" "<<measurement<<" "<<calories<<endl;
}

foodItemSystem::foodItemSystem() {
    length = 0; // Initialize length to 0 in the constructor
}

//insert the foodItem at the location
void foodItemSystem::insertAt(const foodItem& food_item, int length){
    if(length < MAX_ITEMS){
        list[length] = food_item;
        this->length++;
    }
    else{
        cerr<<"No more room!";
    }
}

//display the items in the list
void foodItemSystem::displayList(){
    for(int i = 0; i < length; i++){
        list[i].print();
    }
}