#include <iostream>

class BankAccount {
protected:
    int account_number;
    double balance;

public:
    BankAccount(int account_number, double balance) : account_number(account_number), balance(balance) {}

    void set_account_number(int account_number) {
        this->account_number = account_number;
    }

    int get_account_number() const {
        return account_number;
    }

    double get_balance() const {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds." << std::endl;
        }
    }

    void print_account_info() const {
        std::cout << "Account Number: " << account_number << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

class CheckingAccount : public BankAccount {
private:
    double interest_rate;
    double min_balance;
    double service_charge;

public:
    CheckingAccount(int account_number, double balance, double interest_rate, double min_balance, double service_charge)
        : BankAccount(account_number, balance), interest_rate(interest_rate), min_balance(min_balance), service_charge(service_charge) {}

    void set_interest_rate(double interest_rate) {
        this->interest_rate = interest_rate;
    }

    double get_interest_rate() const {
        return interest_rate;
    }

    void set_min_balance(double min_balance) {
        this->min_balance = min_balance;
    }

    double get_min_balance() const {
        return min_balance;
    }

    void set_service_charge(double service_charge) {
        this->service_charge = service_charge;
    }

    double get_service_charge() const {
        return service_charge;
    }

    void post_interest() {
        double interest = balance * (interest_rate / 100);
        balance += interest;
    }

    bool below_min_balance() const {
        return balance < min_balance;
    }

    void write_check(double amount) {
        if (!below_min_balance()) {
            withdraw(amount);
        } else {
            std::cout << "Minimum balance requirement not met. Cannot write check." << std::endl;
        }
    }

    void withdraw(double amount) override {
        if (!below_min_balance()) {
            BankAccount::withdraw(amount);
        } else {
            std::cout << "Minimum balance requirement not met. Cannot withdraw." << std::endl;
        }
    }

    void print_account_info() const {
        BankAccount::print_account_info();
        std::cout << "Interest Rate: " << interest_rate << std::endl;
        std::cout << "Minimum Balance: " << min_balance << std::endl;
        std::cout << "Service Charge: " << service_charge << std::endl;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interest_rate;

public:
    SavingsAccount(int account_number, double balance, double interest_rate)
        : BankAccount(account_number, balance), interest_rate(interest_rate) {}

    void set_interest_rate(double interest_rate) {
        this->interest_rate = interest_rate;
    }

    double get_interest_rate() const {
        return interest_rate;
    }

    void post_interest() {
        double interest = balance * (interest_rate / 100);
        balance += interest;
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds." << std::endl;
        }
    }

    void print_account_info() const {
        BankAccount::print_account_info();
        std::cout << "Interest Rate: " << interest_rate << std::endl;
    }
};

int main() {
    CheckingAccount checking(12345, 1000.0, 1.5, 500.0, 10.0);
    checking.print_account_info();
    checking.deposit(500.0);
    checking.print_account_info();
    checking.withdraw(200.0);
    checking.print_account_info();
    checking.write_check(300.0);
    checking.print_account_info();
    checking.post_interest();
    checking.print_account_info();

    SavingsAccount savings(54321, 2000.0, 2.0);
    savings.print_account_info();
    savings.deposit(1000.0);
    savings.print_account_info();
    savings.withdraw(500.0);
    savings.print_account_info();
    savings.post_interest();
    savings.print_account_info();

    return 0;
}
