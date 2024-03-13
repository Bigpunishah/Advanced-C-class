#include "myArray.h"
#include <iostream>

template<class T> //Must include the template everywhere it is used
int main(){
    //*******************************
    //**  Old Code With Integers   **
    myArray array;
    myArray thisArray(2, 6);
    myArray yourArray(-4, 12);

    // Set values in thisArray
    thisArray.set(2, 1);
    thisArray.set(3, 3);
    thisArray.set(4, 4);
    thisArray.set(5, 5);
    thisArray.set(6, 7);

    // Print values in thisArray
    thisArray.print();
    //** End Old Code With Integers**
    //*******************************

    // Different types of values:
    myArray characters(5); //size of 5
    characters.set(0, 'a');
    characters.set(0, 'b');
    characters.set(0, 'c');
    characters.set(0, 'd');
    characters.set(0, 'e');

    characters.print();


    return 0;
}