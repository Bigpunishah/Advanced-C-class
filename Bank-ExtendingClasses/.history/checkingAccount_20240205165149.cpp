//Vikel Cunningham
//cunningham.vikel@titans.easternflorida.edu

#include <iostream>
#include "bankAccount.h"
#include "checkingAccount.h"


void CheckingAccount::setInterest(double interest){
    this->interest = interest;
}

double CheckingAccount::getInterest() const{
    return interest;
}

void CheckingAccount::setMinBal(int minBalance){
    this->minBalance = minBalance;
}

int CheckingAccount::getMinBal() const{
    return minBalance;
}

void CheckingAccount::setServCharge(double serviceCharge){
    this->serviceCharge = serviceCharge;
}

double CheckingAccount::getServCharge() const{
    return serviceCharge;
}

void CheckingAccount::postInterest(){
//!    //idk yet
}

bool CheckingAccount::balanceIsAboveMin(){
    if(getBalance() > getMinBal())
        return true;
    else
        return false;
}

//Overide method
void CheckingAccount::withraw(double withdrawAmnt){
    if(getBalance() > withdrawAmnt){
        withdraw(withdrawAmnt);
    }
}


void CheckingAccount::writeCheck(double checkAmount){
    if(checkAmount > getBalance()){
        withdraw(checkAmount);
    }


}


