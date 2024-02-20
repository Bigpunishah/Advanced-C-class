#include <iostream>
#include "bankAccount.h"
#include "checkingAccount.h"
#include "savingsAccount.h"



int main(){
    BankAccount* bank = new BankAccount;
    SavingsAccount* savings = new SavingsAccount;
    CheckingAccount* checkings = new CheckingAccount;


    bank->setAccountNumber(212);
    bank->deposit(100.12);
    bank->withdraw(15.11);
    bank->printAccountInfo();


    savings->setAccountNumber(234);
    savings->deposit(10);
    savings->postInterest(3);
    savings->withdraw(5.12);




    return 0;
}