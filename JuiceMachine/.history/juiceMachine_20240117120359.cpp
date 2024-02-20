//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu

class CashRegister{
private:
    int cashOnHand;

public:
    int getCurrentBalance() const; //Show balance
    void acceptAmount(int amountIn); //Receive amount deposited
    CashRegister(int cashIn = 500); // Sets register to 500

};

class DispenserType{

};