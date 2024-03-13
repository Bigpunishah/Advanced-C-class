#include "myArray.h"
#include <iostream>

int main() {
    std::cout << "Hello\n";

    myArray<int> array(0, 5);
    std::cout<<"yoo";
    array.set(0, 1);
    array.set(1, 2);
    array.set(2, 3);

    std::cout << "Array after setting values:\n";
    array.print();

    std::cout << "Hello\n";

    return 0;
}
