#include <iostream>
#include <fstream>
#include "foodItem.h"

using namespace std;

void loadFoodItems();

int main(){
    
    return 0;
}

void loadFoodItems(){
    string filename = "food.txt";
    ifstream infile;

    string foodName;
    int qty;
    string measurment;
    int calories;

    foodItem temp;

    //open the file
    infile.open(filename);
    if(!infile){
        cout << "Input file does not exists. "
			 << "Program terminates!!!" << endl;
        return;
    }

    //current count for the list
    int i = 0;
    
    //assigning all variables to be saved
    infile>>foodName>>qty>>measurment>>calories;

    while(infile){
        temp.setFoodInfo(foodName, qty, measurment, calories);
    }
}