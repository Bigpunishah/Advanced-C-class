#include "myArray.h"
#include <iostream>

template<class T>
myArray<T>::myArray() {
    array = nullptr;
    arraySize = 0;
    index = 0;
}

template<class T>
myArray<T>::myArray(int size) {
    if (size <= 0) {
        std::cout << "Size not valid." << std::endl;
        return;
    }

    delete[] array;
    array = new T[size];
    arraySize = size;
    index = 0;
}

template<class T>
myArray<T>::myArray(int startIndex, int size) {
    if (size > 0 && size > startIndex) {
        if (startIndex < 0) {
            arraySize = -(startIndex) + size;
            delete[] array;
            array = new T[arraySize];
        } else {
            arraySize = size - startIndex;
            delete[] array;
            array = new T[arraySize];
        }
    }
}

template<class T>
myArray<T>::~myArray() {
    delete[] array;
}

template<class T>
void myArray<T>::creatArray(int startIndex, int size) {
    if (size > 0 && size > startIndex) {
        if (startIndex < 0) {
            arraySize = -(startIndex) + size;
            delete[] array;
            array = new T[arraySize];
        } else {
            arraySize = size - startIndex;
            delete[] array;
            array = new T[arraySize];
        }
    }
}

template<class T>
T myArray<T>::get(int accessIndex) {
    int validIndex;
    if (index < 0) {
        validIndex = -(index) + accessIndex;
        return array[validIndex];
    } else if (accessIndex <= arraySize && accessIndex >= index) {
        validIndex = accessIndex - index;
        return array[accessIndex];
    }
    return T(); // Default constructed value if index is out of bounds
}

template<class T>
void myArray<T>::set(int accessIndex, T value) {
    int validIndex;
    if (index < 0) {
        validIndex = -(index) + accessIndex;
        array[validIndex] = value;
    } else if (accessIndex <= arraySize && accessIndex >= index) {
        validIndex = accessIndex - index;
        array[accessIndex] = value;
    }
}

template<class T>
void myArray<T>::print() {
    int validIndex;
    bool isPositive = true;
    if (index < 0)
        isPositive = false;

    if (isPositive) {
        std::cout << "Array info:\nsize: " << arraySize << "\nindex: " << index << "\n\n" << std::endl;
        validIndex = index - index;
        for (int i = validIndex; i < arraySize; i++) {
            std::cout << get(i) << std::endl;
        }
    } else {
        std::cout << "Array info:\nsize: " << arraySize << "\nindex: " << index << "\n\n" << std::endl;
        validIndex = -(index) - -(index);
        for (int i = validIndex; i < arraySize; i++) {
            std::cout << array[i] << std::endl;
        }
    }
}
template class myArray<int>;
template class myArray<char>;