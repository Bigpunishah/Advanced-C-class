#include <iostream>
#include "bankAccount.h"
#include "checkingAccount.h"
#include "savingsAccount.h"



int main(){
    BankAccount* bank = new BankAccount;
    SavingsAccount* savings = new SavingsAccount;
    CheckingAccount* checkings = new CheckingAccount;



    bank->deposit(100.12);
    bank->withdraw(15.11);
    bank->printAccountInfo();




    return 0;
}