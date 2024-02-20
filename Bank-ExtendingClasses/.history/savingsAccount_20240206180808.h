//Vikel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <iostream>
#include "bankAccount.h"

class SavingsAccount : public BankAccount{
private:
    double interest;


public:
    void setInterest(double);
    double getInterest() const;
    void postInterest(double); // still dont know yet
    void withdraw(double);
    void print();

    SavingsAccount();
    SavingsAccount(double);
};

#endif