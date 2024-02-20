//Vikel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#include <iostream>
#include "bankAccount.h"

void BankAccount::setAccountNumber(int accountNumber){
    this->accountNumber = accountNumber;
}


int BankAccount::getAccountNumber(){
    return accountNumber;
}


double BankAccount::getBalance(){
    return balance;
}


void BankAccount::deposit(double deposit){
    balance += deposit;
}


void BankAccount::withdrawal(double withdraw){
    balance -= withdraw;
}


void BankAccount::printAccountInfo(){
    //Code here..
}

