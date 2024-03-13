#include "myArray.h"
#include <iostream>

int main() {
    // Example usage with integers
    myArray<int> array(0, 3);
    array.set(0, 1);
    array.set(1, 2);
    array.set(2, 3);
    array.print();

    Example usage with characters
    myArray<char> characters(5);
    characters.set(0, 'a');
    characters.set(1, 'b');
    characters.set(2, 'c');
    characters.set(3, 'd');
    characters.set(4, 'e');
    characters.print();

    return 0;
}
