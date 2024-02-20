//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#include <iostream>
#include "clockType.h"

//Sets the incoming time. Ensures values are within range.
void clockType::setTime(int hr, int min, int sec){
    if(hr < 12 && hr >= 0){
        this->hr = hr;
    } else {
        this->hr = 0;
    }
    
    if(min < 60 && min >= 0){
        this->min = min;
    } else {
        this->min = 0;
    }

    if(sec < 60 && sec >= 0){
        this->sec = sec;
    } else {
        this->sec = 0;
    }
}

//This function retreives the values by reference.
//Then setting the input values from the values set.
void clockType::getTime(int& hour, int& minute, int& second) const{
    hour = this->hr;
    minute = this->min;
    second = this-> sec;
}

//Prints the time
void clockType::printTime() const{
    if(hr < 10 && hr >= 0 ){
        std::cout<<"0"<<hr<<":";
    } else {
        std::cout<<hr<<":";
    }
    if(min < 10 && min >= 0){
        std::cout<<"0"<<min<<":";
    } else {
        std::cout<<min<<":";
    }
    if(sec < 10 && sec >=0){
        std::cout<<"0"<<sec<<std::endl;
    } else {
        std::cout<<sec;
    }
}

//Increments a hour
void clockType::incrementHours(){
    hr += 1;
    if(hr > 12){
        hr = 0;
    }
}
//Increments a minute
void clockType::incrementMinutes(){
    min += 1;
    if(min > 60){
        min = 1;
    }
}
//Increments a second
void clockType::incrementSeconds(){
    sec += 1;
    if(sec > 60){
        sec = 0;
    }
}

//Checks to see if the input time is equal to the set time.
bool clockType::equalTime(const clockType& input) const{
    if(input.hr == hr && input.min == min && input.sec == sec){
        return true;
    }
    return false;
}