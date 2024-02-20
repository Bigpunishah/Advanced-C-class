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

    if(interest > 1){
        double postedInterest = years * interest;
        std::cout<<"After " << years << " years, & starting with " << getBalance() << ".";
        std::cout<<" Your new accrued interest: $" << postedInterest << std::endl; 
    }
    else
        std::cout<<"Interest has not been established yet";
}

void SavingsAccount::withdraw(double amount){
    if(getBalance() > amount)
        BankAccount::withdraw(amount);
    else
        std::cout<<"Not enough funds" << std::endl;
}


SavingsAccount::SavingsAccount(){
    interest = 0;
    setAccountNumber(2295);
}

SavingsAccount::SavingsAccount(double interest) :interest(interest){}

void SavingsAccount::print(){
    std::cout<<"******************************" << std::endl;
    std::cout<<"       Bank Account for       " << std::endl;
    std::cout<<"\t" <<getAccountNumber()      << std::endl;
    if(balanceIsAboveMin)
        std::cout<<"\t$" << getBalance() << " in your savings account." <<std::endl;
    else 
        std::cout<<"You have gone below min bal - therefore you are being charged " << getServCharge() << " Your new amount is:\n" << getBalance() << std::endl;
    std::cout<<"\t" << "Current interest rate: " << getInterest() << std::endl;
    std::cout<<"******************************" << std::endl;
}