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
    string description;
    int qty;
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
    infile>>foodName>>description>>qty>>calories;

    while(infile){

    }
}