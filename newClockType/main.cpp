#include <iostream>
#include "newClock.h"

using namespace std;

int main(){

    clockType myClock(7, 24, 32);
    clockType yourClock;

    cout<<"myClock = " << myClock << endl;

    cout<<"yourClock = " << yourClock << endl;

    cout<<"Enter the time in the form hr:min:sec";
    cin >> myClock;
    cout << endl; 

    cout<< "The new time of myClock = " << myClock << endl;

    ++myClock;

    cout<< "After incrementing the time, myClock = " << myClock << endl;

    yourClock.setTime(13, 35, 38);

    cout<< "After setting the time, yourClock = " << yourClock << endl;

    if(myClock == yourClock)
        cout << "The times of myClock & yourClock are equal." << endl;

    else
        cout << "The times of myClock & yourClock are not equal." << endl;

    if(myClock <= yourClock)
        cout << "The time of myClock is less than or equal to yourClock." << endl;

    else
        cout << "The time of myClock is greater than the time of yourClock." << endl;
        
    return 0;
}