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

void CheckingAccount::postInterest(int years){
    double currentBal = getBalance();
    for(int i = 1; i <= years; i++){
        currentBal *= getInterest();
    }
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

void CheckingAccount::print(){
    std::cout<<"******************************" << std::endl;
    std::cout<<"       Bank Account for       " << std::endl;
    std::cout<<"\t" <<getAccountNumber()      << std::endl;
    std::cout<<"\t$" << getBalance() << " in your checkings account." <<std::endl;
    std::cout<<"\t" << "Current interest rate: " << getInterest() << std::endl;
    std::cout<<"******************************" << std::endl;


}

CheckingAccount::CheckingAccount(){
    interest = 2.4;
    minBalance = 0;
    serviceCharge = 15;
}

CheckingAccount::CheckingAccount(double interest, int minBal, double servChar){
    this->interest = interest;
    minBalance = minBal;
    serviceCharge = servChar;
}


