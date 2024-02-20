//Vikel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount{

private:
    int accountNumber;
    double balance;

public:
    void setAccountNumber(int);
    int getAccountNumber();
    double getBalance();
    void deposit(double);
    void withdraw(double);
    void printAccountInfo();

    BankAccount();
    BankAccount(int, double);
};

#endif