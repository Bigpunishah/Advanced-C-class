//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#include <iostream>

//.exe will auto create.

class clockType{
private:
    int hr;
    int min;
    int sec;

public:
    void setTime(int, int, int);
    void getTime(int&, int&, int&) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType&) const;

};

int main(){
    clockType myClock;
    clockType yourClock;
    int hours;
    int minutes;
    int seconds;
    
    myClock.setTime(5, 4, 30);

    std::cout << "myClock: ";
    myClock.printTime();
    std::cout << std::endl;

    std::cout << "yourClock: ";
    yourClock.printTime();
    std::cout << std::endl;

    yourClock.setTime(4, 45, 16);

    std::cout<<"After setting youClock: ";
    yourClock.printTime();
    std::cout << std::endl;

    if(myClock.equalTime(yourClock)){
        std::cout<<"Both times are equal." << std::endl;
    } else {
        std::cout<<"The two times are not equal." << std::endl;
    }

    std::cout<<"Enter the hours, minutes, & seconds: ";
    std::cin>>hours>>minutes>>seconds;
    std::cout<<std::endl;

    myClock.setTime(hours, minutes, seconds);

    std::cout<<"New myClock: ";
    myClock.printTime();
    std::cout << std::endl;

    myClock.incrementSeconds();
    std::cout<<"After incrementing myClock by one second, myClock: ";
    myClock.printTime();
    std::cout<<std::endl;
    
    myClock.getTime(hours, minutes, seconds);

    std::cout<<"hours: "<<hours<< ", minutes: "<<minutes<<", seconds: "<<seconds<<std::endl;

    return 0;
}



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
}
//Increments a minute
void clockType::incrementMinutes(){
    min += 1;
}
//Increments a second
void clockType::incrementSeconds(){
    sec += 1;
}
//Checks to see if the input time is equal to the set time.
bool clockType::equalTime(const clockType& input) const{
    if(input.hr == hr && input.min == min && input.sec == sec){
        return true;
    }
    return false;
}