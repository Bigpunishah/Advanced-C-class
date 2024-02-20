//Vikel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#include <iostream>
#include "bankAccount.h"
#include "checkingAccount.h"
#include "savingsAccount.h"



int main(){
    SavingsAccount savings(4.5);
    CheckingAccount checkings(3.2, 10, 15);
    BankAccount bank;

    // savings.print();
    // checkings.print();
    // bank.printAccountInfo();

    savings.deposit(22344);
    savings.print();

    checkings.deposit(120);
    checkings.print();


    return 0;
}