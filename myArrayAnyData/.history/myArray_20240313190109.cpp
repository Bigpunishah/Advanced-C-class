#include "myArray.h"
#include <iostream>

// Initialize the dynamic value to nullptr
template <class T>
myArray<T>::myArray()
{
    array = nullptr;
    arraySize = 0;
    index = 0;
}

template <class T>
myArray<T>::myArray(int size)
{
    if (size <= 0)
    {
        std::cout << "Size not valid." << std::endl;
        return;
    }

    // We need to delete the current version of array
    // delete[] array;

    // Creating the new version of the array of type int
    array = new T[size];
    arraySize = size;
    index = 0;
}

template <class T>
myArray<T>::myArray(int index, int size)
{
    // Ensure size is valid
    if (size > 0 && size > index)
    {
        // Check if index is negative
        if (index < 0)
        {

            // Set array size to the total size of disatance between values.
            arraySize = -(index) + size;

            // Delete current array
            delete[] array;

            // Create new array
            array = new T[arraySize];

            // else the index is above 0
        }
        else
        {
            // array size is the distance of size to index
            // ex: index = 2 size = 10 ---- the arraySize would be 8 since we start at 8.
            arraySize = size - index;

            delete[] array;

            array = new T[arraySize];
        }
    }
}

// Delete array when out of scope
template <class T>
myArray<T>::~myArray()
{
    delete[] array;
}

// getter
template <class T>
T myArray<T>::get(int accessIndex)
{
    int validIndex;

    if (index < 0)
    {
        validIndex = -(index) + accessIndex;
        return array[validIndex];

        // Ensure its within size
    }
    else if (accessIndex <= arraySize && accessIndex >= index)
    {
        // Access the value at the location but minus the index spot
        // ex: index = 2 size = 8 --- arraySize = 6 ---- to access index 0 you need to do accessIndex - whatever the start is.
        validIndex = accessIndex - index;
        return array[accessIndex];
    }
    return T();
}

// setter
template <class T>
void myArray<T>::set(int accessIndex, T data)
{
    int validIndex;

    if (index < 0)
    {
        validIndex = -(index) + accessIndex;
        array[validIndex] = data;

        // Ensure access is within size
    }
    else if (accessIndex <= arraySize && accessIndex >= index)
    {
        validIndex = accessIndex - index;
        array[accessIndex] = data;
    }
}

// Create the array after object been created
template <class T>
void myArray<T>::creatArray(int index, int size)
{
    // Ensure size is valid
    if (size > 0 && size > index)
    {
        // Check if index is negative
        if (index < 0)
        {

            // Set array size to the total size of disatance between values.
            arraySize = -(index) + size;

            // Delete current array
            delete[] array;

            // Create new array
            array = new T[arraySize];

            // else the index is above 0
        }
        else
        {
            // array size is the distance of size to index
            // ex: index = 2 size = 10 ---- the arraySize would be 8 since we start at 8.
            arraySize = size - index;

            delete[] array;

            array = new T[arraySize];
        }
    }
}

// printing values within array
template<class T>
void myArray<T>::print() {
    std::cout << "Array info:\nsize: " << arraySize << "\nindex: " << index << "\n\n";

    if (index < 0) {
        for (int i = 0; i < arraySize + index; i++) {
            std::cout << array[i] << std::endl;
        }
    } else {
        for (int i = index; i < arraySize; i++) {
            std::cout << array[i] << std::endl;
        }
    }
}


template class myArray<int>;