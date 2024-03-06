#include "rectangleType.h"

// Constructor definition
rectangleType::rectangleType(double l, double w) : length(l), width(w) {}

// Overload pre-increment operator (++obj)
rectangleType& rectangleType::operator++() {
    // Increment the length and width by 1
    ++length;
    ++width;
    // Return a reference to the modified object
    return *this;
}

// Overload post-increment operator (obj++)
rectangleType rectangleType::operator++(int) {
    // Create a temporary copy of the current object
    rectangleType temp = *this;
    // Increment the current object using pre-increment operator
    ++(*this);
    // Return the original state of the object before incrementing
    return temp;
}

// Overload pre-decrement operator (--obj)
rectangleType& rectangleType::operator--() {
    // Decrement length and width if they are greater than 0
    if (length > 0)
        --length;
    if (width > 0)
        --width;
    // Return a reference to the modified object
    return *this;
}

// Overload post-decrement operator (obj--)
rectangleType rectangleType::operator--(int) {
    // Create a temporary copy of the current object
    rectangleType temp = *this;
    // Decrement the current object using pre-decrement operator
    --(*this);
    // Return the original state of the object before decrementing
    return temp;
}

// Overload binary operator - (obj1 - obj2)
rectangleType rectangleType::operator-(const rectangleType& other) const {
    // Create a new rectangle to store the result of subtraction
    rectangleType result;
    // Subtract corresponding lengths and widths
    result.length = length - other.length;
    result.width = width - other.width;
    // Check if the result is valid (positive)
    if (result.length <= 0 || result.width <= 0) {
        std::cout << "Subtraction not possible, result is not positive." << std::endl;
        // If result is not positive, set both length and width to 0
        result.length = 0;
        result.width = 0;
    }
    // Return the result
    return result;
}

// Overload relational operator == (obj1 == obj2)
bool rectangleType::operator==(const rectangleType& other) const {
    // Check if the areas of both rectangles are equal
    return (length * width) == (other.length * other.width);
}

// Overload relational operator != (obj1 != obj2)
bool rectangleType::operator!=(const rectangleType& other) const {
    // Negate the result of ==
    return !(*this == other);
}

// Overload relational operator < (obj1 < obj2)
bool rectangleType::operator<(const rectangleType& other) const {
    // Check if the area of the current object is less than the area of the other object
    return (length * width) < (other.length * other.width);
}

// Overload relational operator > (obj1 > obj2)
bool rectangleType::operator>(const rectangleType& other) const {
    // Check if the area of the current object is greater than the area of the other object
    return (length * width) > (other.length * other.width);
}

// Overload relational operator <= (obj1 <= obj2)
bool rectangleType::operator<=(const rectangleType& other) const {
    // Check if the area of the current object is less than or equal to the area of the other object
    return (length * width) <= (other.length * other.width);
}

// Overload relational operator >= (obj1 >= obj2)
bool rectangleType::operator>=(const rectangleType& other) const {
    // Check if the area of the current object is greater than or equal to the area of the other object
    return (length * width) >= (other.length * other.width);
}

// Overload insertion operator << (cout << obj)
std::ostream& operator<<(std::ostream& os, const rectangleType& rect) {
    // Output the length and width of the rectangle
    os << "Length: " << rect.length << ", Width: " << rect.width;
    // Return the output stream
    return os;
}

// Overload extraction operator >> (cin >> obj)
std::istream& operator>>(std::istream& is, rectangleType& rect) {
    // Input the length and width of the rectangle
    is >> rect.length >> rect.width;
    // Return the input stream
    return is;
}