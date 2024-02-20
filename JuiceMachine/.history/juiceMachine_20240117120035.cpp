//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu

class cashRegister{
private:
    int cashOnHand;

public:
    int getCurrentBalance() const;
    void acceptAmount(int amountIn); //Receive amount deposited
    cashRegister(int cashIn = 500); // Sets register to 500

};