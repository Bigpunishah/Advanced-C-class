#include <iostream>
#include "newClock.h"

using namespace std;

//Overload the pre-increment operator
clockType clockType::operator++(){
    sec++;

    if(sec > 59){
        sec = 0;
        min++;

        if(min > 59){
            min = 0;
            hr++;

            if(hr > 23){
                hr = 0;
            }
        }
    }
    return *this;
}

bool clockType::operator==(const clockType& otherClock) const{
    return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}