//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu

class cashRegister{
private:
    int cashOnHand;

public:
    int getCurrentBalance() const;
    void acceptAmount(int amountIn) const;
    cashRegister(int cashIn = 500);

};