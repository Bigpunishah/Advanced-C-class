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
    ifstream infile("food.txt");

    if(!infile){
        cerr<<"Error opening file.";
        exit(EXIT_FAILURE);
    }

    string line_read;
    // while(getline(infile, line_read)){
    //     string name;
    //     string measurement;
    //     int qty;
    //     int calories;

    // }


    foodItem temp;

    //open the file
    // infile.open(filename);
    // if(!infile){
    //     cerr<< "Unable to open: Program terminates!!!" << endl;
    //     exit(EXIT_FAILURE);
    // }

    int i = 0;

    while(getline(infile, line_read)){
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
        else {
            cerr<<"Error try again later";
        }
    }
   
    infile.close();
    return list;
}