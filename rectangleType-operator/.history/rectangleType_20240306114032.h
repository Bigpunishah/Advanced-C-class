#ifndef RECTANGLETYPE_H
#define RECTANGLETYPE_H

#include <iostream>

class rectangleType {
protected:
    double length;
    double width;

public:
    rectangleType(double l = 0, double w = 0);

    rectangleType& operator++();      // Pre-increment
    rectangleType operator++(int);    // Post-increment
    rectangleType& operator--();      // Pre-decrement
    rectangleType operator--(int);    // Post-decrement
    rectangleType operator-(const rectangleType& other) const;
    
    bool operator==(const rectangleType& other) const;
    bool operator!=(const rectangleType& other) const;
    bool operator<(const rectangleType& other) const;
    bool operator>(const rectangleType& other) const;
    bool operator<=(const rectangleType& other) const;
    bool operator>=(const rectangleType& other) const;

    friend std::ostream& operator<<(std::ostream& os, const rectangleType& rect);
    friend std::istream& operator>>(std::istream& is, rectangleType& rect);
};

#endif // RECTANGLETYPE_H
