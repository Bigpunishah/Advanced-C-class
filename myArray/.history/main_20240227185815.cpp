#include "myArray.h"
#include <iostream>

// Constructor initializes the dynamic array to nullptr and size to 0
myArray::myArray() {
    array = nullptr;
    arraySize = 0;
    index = 0;
}

// Constructor to initialize array with a given size
myArray::myArray(int size) {
    if (size <= 0) {
        std::cout << "Size not valid." << std::endl;
        return;
    }

    // Delete the current version of array if it exists
    delete[] array;

    // Create a new array of the specified size
    array = new int[size];
    arraySize = size;
    index = 0;
}

// Constructor to initialize array with a given index and size
myArray::myArray(int startIndex, int size) {
    if (size > 0 && size > startIndex) {
        // Calculate array size based on the distance between values
        arraySize = size - startIndex;

        // Delete current array if it exists
        delete[] array;

        // Create new array
        array = new int[arraySize];
    }
}

// Destructor deletes the array when object goes out of scope
myArray::~myArray() {
    delete[] array;
}

// Getter function to access array element at a given index
int myArray::get(int accessIndex) {
    // Check if accessIndex is within the bounds of the array
    if (accessIndex >= index && accessIndex < index + arraySize) {
        // Adjust the index to access the correct element in the array
        int validIndex = accessIndex - index;
        return array[validIndex];
    }
    return -1; // Return a special value to indicate out-of-bounds access
}

// Setter function to set the value of array element at a given index
void myArray::set(int accessIndex, int value) {
    // Check if accessIndex is within the bounds of the array
    if (accessIndex >= index && accessIndex < index + arraySize) {
        // Adjust the index to access the correct element in the array
        int validIndex = accessIndex - index;
        array[validIndex] = value;
    }
}

// Printing values within the array
void myArray::print() {
    std::cout << "Array info:\nsize: " << arraySize << "\nindex: " << index << "\n\n";
    
    // Loop through each element of the array and print its value
    for (int i = 0; i < arraySize; i++) {
        std::cout << get(index + i) << std::endl;
    }
}

int main() {
    // Create instances of myArray class
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

    return 0;
}
