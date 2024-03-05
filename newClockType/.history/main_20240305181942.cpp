#include <iostream>
#include "newClock.h"

using namespace std;

int main(){

    clockType myClock(7, 24, 32);
    clockType yourClock;

    cout<<"myClock = " << myClock << endl;

    cout<<"yourClock = " << yourClock << endl;

    cout<<"Enter the time in the form hr:min:sec"
    cin >> myClcok;
    cout << endl; 



    return 0;
}