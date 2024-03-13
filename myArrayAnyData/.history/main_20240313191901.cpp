#include "myArray.h"
#include <iostream>

int main() {
    std::cout << "Hello\n" << std::flush;

    myArray<char> characters(5);
    characters.set(0, 'a');
    characters.set(1, 'b');
    characters.set(2, 'c');
    characters.set(3, 'd');
    characters.set(4, 'e');

    std::cout << "Array after setting values:\n";
    characters.print();

    return 0;
}
