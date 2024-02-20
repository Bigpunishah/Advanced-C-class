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

//Capitalize the first letter
class DispenserType{
private:
    int numberOfItems;
    int cost;

public:
    int getNoOfItems() const;
    int getCost() const;
    void makeSale();
    DispenserType(int setNoOfItems = 50, int setCost = 50);
};