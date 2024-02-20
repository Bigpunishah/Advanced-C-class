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
    if(balance > withdrawAmnt)
        balance -= withdrawAmnt;
    else
        std::cout<<"Insufficienct funds.";
}

//print func
void BankAccount::printAccountInfo(){
    std::cout<<"******************************" << std::endl;
    std::cout<<"       Bank Account for       " << std::endl;
    std::cout<<"\t" <<getAccountNumber()      << std::endl;
    std::cout<<"\t$" << getBalance() << " in your bank account." <<std::endl;
    std::cout<<"******************************" << std::endl;
}

//empty constuct
BankAccount::BankAccount(){
    setAccountNumber(489298);
    balance = 0;
}

BankAccount::BankAccount(int accountNum){
    accountNumber = accountNum;
}

//Construct with param
BankAccount::BankAccount(int accountNumber, double balance){
    this->accountNumber = accountNumber;
    this->balance = balance;
}

