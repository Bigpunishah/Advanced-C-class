//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "bankAccount.h"

class CheckingAccount: public BankAccount{
private:
    double interest;
    int minBalance; //We want whole numbers for this.
    double serviceCharge;

public:
    void setInterest(double);
    double getInterest() const;
    void setMinBal(int);
    int getMinBal() const;
    void setServCharge(double);
    double getServCharge() const;
    void postInterest(); //Figure out how to fix

};

#endif