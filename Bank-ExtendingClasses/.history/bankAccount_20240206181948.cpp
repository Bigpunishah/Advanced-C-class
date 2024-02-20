//Vikel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#include <iostream>
#include "bankAccount.h"

//set acct num
void BankAccount::setAccountNumber(int accountNumber){
    this->accountNumber = accountNumber;
}

//getaccount num
int BankAccount::getAccountNumber(){
    return accountNumber;
}

//get balance
double BankAccount::getBalance(){
    return balance;
}

//deposit func
void BankAccount::deposit(double deposit){
    balance += deposit;
}

//withdraw func
void BankAccount::withdraw(double withdrawAmnt){
    balance -= withdrawAmnt;
}

//print func
void BankAccount::printAccountInfo(){
    std::cout<<"******************************" << std::endl;
    std::cout<<"       Bank Account for       " << std::endl;
    std::cout<<"\t" <<getAccountNumber()      << std::endl;
    std::cout<<"\t$" << getBalance() << " in your checkings account." <<std::endl;
    std::cout<<"******************************" << std::endl;
}

//empty constuct
BankAccount::BankAccount(){
    setAccountNumber(48493285);
    balance = 0;
}

//Construct with param
BankAccount::BankAccount(int accountNumber, double balance){
    this->accountNumber = accountNumber;
    this->balance = balance;
}

