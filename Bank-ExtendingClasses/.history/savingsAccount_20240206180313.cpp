//Vikel Cunningham
//cunningham.vikel@titans.easternflorida.edu

#include "savingsAccount.h"
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