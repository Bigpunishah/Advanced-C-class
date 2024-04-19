#include <iostream>
#include <fstream>
#include <sstream>
#include "foodItem.h"

using namespace std;

foodItemSystem loadFoodItems();
void checkFood();


int main(){
    foodItemSystem foodItemList = loadFoodItems(); 
    foodItemList.sortFoodItems();
    foodItemList.displayList();


    
    return 0;
}

foodItemSystem loadFoodItems(){
    foodItemSystem list;
    string filename = "food.txt";
    ifstream infile(filename);

    if(!infile){
        cerr<<"Error opening file.";
        exit(EXIT_FAILURE);
    }

    foodItem temp;
    string line_read;
    int i = 0;

    //while loop to read the file & parse the lines into foodItem objects
    while(infile){
        getline(infile, line_read);
        stringstream ss(line_read);

        string name;
        string measurement;
        int qty;
        int calories;

        if(ss >> name >> qty >> measurement >> calories){
            foodItem temp;
            temp.setFoodInfo(name, qty, measurement, calories);
            list.insertAt(temp, i);
        }
        i++;
        
    }
   
    infile.close();
    return list;
}


//Allows user to check the calorie count for the food selected
void checkFood(foodItemSystem& items){

}