#include "myArray.h"
#include <iostream>

//Initialize the dynamic value to nullptr
myArray::myArray(){
    array = nullptr;
    arraySize = 0;
    index = 0;
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
    index = 0;
    
}

myArray::myArray(int index, int size){
    //Ensure size is valid
    if(size > 0 && size > index){
        //Check if index is negative
        if(index < 0){

            //Set array size to the total size of disatance between values.
            arraySize = -(index) + size;

            //Delete current array
            delete[] array;

            //Create new array
            array = new int[arraySize];

            
            //else the index is above 0
        } else {
            //array size is the distance of size to index
            //ex: index = 2 size = 10 ---- the arraySize would be 8 since we start at 8.
            arraySize = size - index;

            delete[] array;

            array = new int[arraySize];
        }
    }
}



//Delete array when out of scope
myArray::~myArray(){
    delete[] array;
}

//getter
int myArray::get(int accessIndex){
    
    int validIndex;
    if(index < 0){
        validIndex = -(index) + accessIndex;
        return array[validIndex];
    } else {
        //Access the value at the location but minus the index spot
        //ex: index = 2 size = 8 --- arraySize = 6 ---- to access index 0 you need to do accessIndex - whatever the start is.
        validIndex = accessIndex - index;
        return array[accessIndex];
    }
}

//setter
void myArray::set(int accessIndex, int value){
    int validIndex;
    if(index < 0){
        validIndex = -(index) + accessIndex;
        array[validIndex] = value;    

    //Ensure access is within size
    } else if(accessIndex <= arraySize && accessIndex > index) {
        validIndex = accessIndex - index;
        array[accessIndex] = value;
    }

}

//Create the array after object been created
void myArray::creatArray(int index, int size){
    

}