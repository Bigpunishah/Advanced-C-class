//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#include <iostream>
#include "clockType.h"




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