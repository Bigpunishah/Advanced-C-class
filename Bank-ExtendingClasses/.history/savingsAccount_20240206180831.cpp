//Vikel Cunningham
//cunningham.vikel@titans.easternflorida.edu

#include "savingsAccount.h"
#include "bankAccount.h"
#include <iostream>

void SavingsAccount::setInterest(double interest){
    this->interest = interest;
}

double SavingsAccount::getInterest() const{
    return interest;
}

void SavingsAccount::postInterest(double years){

    if(interest > 0){
        double postedInterest = years * interest;
        std::cout<<"Accrued interest: " << postInterest << std::endl; 
    }
    else
        std::cout<<"Interest has not been established yet";
}

void SavingsAccount::withdraw(double amount){
    if(getBalance() > amount)
        withdraw(amount);
    else
        std::cout<<"Not enough funds" << std::endl;
}


SavingsAccount::SavingsAccount(){
    interest = 0;
}

SavingsAccount::SavingsAccount(double interest){
    this->interest = interest;
}