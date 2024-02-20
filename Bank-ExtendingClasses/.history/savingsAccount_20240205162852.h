//Vikel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <iostream>
#include "bankAccount.h"

class savingsAccount{
private:
    double interest;


public:
    void setInterest(double);
    double getInterest() const;
    void postInterest(); // still dont know yet
    void withdraw();
    void print();

    savingsAccount();
    savingsAccount(double);
};

#endif