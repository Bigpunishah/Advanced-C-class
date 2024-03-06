#include "rectangleType.h"

rectangleType::rectangleType(double l, double w) : length(l), width(w) {}

rectangleType& rectangleType::operator++() {
    ++length;
    ++width;
    return *this;
}

rectangleType rectangleType::operator++(int) {
    rectangleType temp = *this;
    ++(*this);
    return temp;
}

rectangleType& rectangleType::operator--() {
    if (length > 0)
        --length;
    if (width > 0)
        --width;
    return *this;
}

rectangleType rectangleType::operator--(int) {
    rectangleType temp = *this;
    --(*this);
    return temp;
}

rectangleType rectangleType::operator-(const rectangleType& other) const {
    rectangleType result;
    result.length = length - other.length;
    result.width = width - other.width;
    if (result.length <= 0 || result.width <= 0) {
        std::cout << "Subtraction not possible, result is not positive." << std::endl;
        result.length = 0;
        result.width = 0;
    }
    return result;
}

bool rectangleType::operator==(const rectangleType& other) const {
    return (length * width) == (other.length * other.width);
}

bool rectangleType::operator!=(const rectangleType& other) const {
    return !(*this == other);
}

bool rectangleType::operator<(const rectangleType& other) const {
    return (length * width) < (other.length * other.width);
}

bool rectangleType::operator>(const rectangleType& other) const {
    return (length * width) > (other.length * other.width);
}

bool rectangleType::operator<=(const rectangleType& other) const {
    return (length * width) <= (other.length * other.width);
}

bool rectangleType::operator>=(const rectangleType& other) const {
    return (length * width) >= (other.length * other.width);
}

std::ostream& operator<<(std::ostream& os, const rectangleType& rect) {
    os << "Length: " << rect.length << ", Width: " << rect.width;
    return os;
}

std::istream& operator>>(std::istream& is, rectangleType& rect) {
    is >> rect.length >> rect.width;
    return is;
}
