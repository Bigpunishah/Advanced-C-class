#ifndef NEWCLOCK_H
#define NEWCLOCK_H

#include <iostream>

using namespace std;

class clockType{

    friend ostream& operator<<(ostream&, const clockType&);
    friend ostream& operator>>(istream&, clockType&);

public:
    void setTime(int hours, int minutes, int seconds);
    //Function to set the member variables hr, min, & sec.
    //Postcondition: hr = hours; min = minutes; sec = seconds;

    void getTime(int& hours, int& minutes, int& seconds) const;
    //Function to retunr the tie
    //Postcondition: hours = hr; minutes = min; seconds = sec;

    clockType operator++();
    //Overload pre-increment operator.
    //Postcondition: The time is incremented by one second.

    bool operator==(const clockType& otherClock) const;
    //Overload the not equal operator.
    //Postcondition: returns ture of the tiume of this clock is equal to the time of otherClock else return false

    bool operator!=(const clockType& otherClock) const;
    //Overload the not equal operator.
    //Postcondition: returns true of the time of this clock isd not equal to the time of the otherClock

    bool operator<=(const clockType& otherClock) const;
    //Overload the less than or equal to operator.
    //Postcondtion: returnes ture of the time of this clock is greater than or ewaul to the time of otherClock else return false.

    bool operator<(const clockType& otherClock) const;
    //Overload the less than operator.
    //Postcondition: returns true if the tiume of this clock is greater than or equal to the time of otherClock

    bool operator>=(const clockType& otherClock) const;
    //Overload the greater than or equal to operator.
    //Postcondition: returns true if the time of this clock is greater than or equal to the time of otherClock

    bool operator>(const clockType& otherClock) const;
    //Overload the greater than operator.
    //Postcondition: returns true if the time of this clock is greater than the time of this otherClock

    clockType(int hours = 0, int minutes = 0, int seconds = 0);
    //Constructor to initialize the object with the values
    //Postcondition: hr = hours; min = minutes; sec = seconds;

private:
    int hr;
    int min;
    int sec;
};


#endif