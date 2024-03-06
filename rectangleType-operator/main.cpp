#include <iostream>
#include "rectangleType.h"

int main() {
    rectangleType rect1(5, 3);
    rectangleType rect2(4, 4);

    std::cout << "Initial rectangles:" << std::endl;
    std::cout << "Rectangle 1: " << rect1 << std::endl;
    std::cout << "Rectangle 2: " << rect2 << std::endl;

    ++rect1;
    std::cout << "After pre-incrementing Rectangle 1: " << rect1 << std::endl;

    rect2++;
    std::cout << "After post-incrementing Rectangle 2: " << rect2 << std::endl;

    --rect1;
    std::cout << "After pre-decrementing Rectangle 1: " << rect1 << std::endl;

    rect2--;
    std::cout << "After post-decrementing Rectangle 2: " << rect2 << std::endl;

    rectangleType diff = rect1 - rect2;
    std::cout << "Difference between Rectangle 1 and Rectangle 2: " << diff << std::endl;

    rectangleType rect3(4, 5);
    std::cout << "Rectangle 3: " << rect3 << std::endl;

    if (rect1 == rect3)
        std::cout << "Rectangle 1 is equal to Rectangle 3" << std::endl;
    else
        std::cout << "Rectangle 1 is not equal to Rectangle 3" << std::endl;

    if (rect1 != rect2)
        std::cout << "Rectangle 1 is not equal to Rectangle 2" << std::endl;
    else
        std::cout << "Rectangle 1 is equal to Rectangle 2" << std::endl;

    if (rect1 > rect3)
        std::cout << "Rectangle 1 has a greater area than Rectangle 3" << std::endl;
    else
        std::cout << "Rectangle 1 does not have a greater area than Rectangle 3" << std::endl;

    if (rect2 <= rect3)
        std::cout << "Rectangle 2 has an area less than or equal to Rectangle 3" << std::endl;
    else
        std::cout << "Rectangle 2 does not have an area less than or equal to Rectangle 3" << std::endl;

    return 0;
}
