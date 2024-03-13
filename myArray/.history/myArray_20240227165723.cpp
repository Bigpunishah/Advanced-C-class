#include "myArray.h"
#include <iostream>

//Initialize the dynamic value to nullptr
myArray::myArray(){
    array = nullptr;
    arraySize = 0;
}

myArray::myArray(int size){
    if(size <= 0){
        std::cout<<"Size not valid."<<std::endl;
        return;
    }

    //We need to delete the current version of array
    delete[] array;

    array = new int[size];
    
}



//Delete array when out of scope
myArray::~myArray(){
    delete[] array;
}


void myArray::creatArray(int index, int size){
    

}