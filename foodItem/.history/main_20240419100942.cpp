#include <iostream>
#include <fstream>
#include <sstream>
#include "foodItem.h"

using namespace std;

foodItemSystem loadFoodItems();


int main(){
    foodItemSystem foodItemList = loadFoodItems();
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

    string line_read;
    while(getline(infile, line_read)){
        string name;
        string measurement;
        int qty;
        int calories;

        
    }


    foodItem temp;

    //open the file
    infile.open(filename);
    if(!infile){
        cerr<< "Unable to open: Program terminates!!!" << endl;
        exit(EXIT_FAILURE);
    }

   
    infile.close();
    return list;
}