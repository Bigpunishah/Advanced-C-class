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

    //Creating the new version of the array of type int
    array = new int[size];
    arraySize = size;
    
}

myArray::myArray(int index, int size){
    //Check if index is negative
    //Also if size is valid
    if(index < 0 && size > 0){

        //Set array size to the total size of disatance between values.
        arraySize = -(index) + size;

        //Delete current array
        delete[] array;

        //Create new array
        array = new int[arraySize];


    }


}



//Delete array when out of scope
myArray::~myArray(){
    delete[] array;
}

void myArray::accessFunction(int accessIndex){

}


void myArray::creatArray(int index, int size){
    

}