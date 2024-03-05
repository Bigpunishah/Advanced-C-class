#ifndef NEWCLOCK_H
#define NEWCLOCK_H

#include <iostream>

using namespace std;

class clockType{

    friend ostream& operator<<(ostream&, const clockType&);
    friend ostream& operator<<(istream&, clockType&);



};


#endif