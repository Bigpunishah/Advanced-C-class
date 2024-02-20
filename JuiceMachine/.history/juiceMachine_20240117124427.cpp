//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu

#include <iostream>
#include "juiceMachine.h"

int CashRegister::getCurrentBalance() const{
    return cashOnHand;
}

void CashRegister::acceptAmount(int amountIn){
    cashOnHand += amountIn;
}

CashRegister::CashRegister(int cashIn){
    if(cashIn >= 0){
        cashOnHand = cashIn;
    } else {
        cashOnHand = 500;
    }
}
//End CashRegister definitions


int DispenserType::getNoOfItems() const{
    return numberOfItems;
}

int DispenserType::getCost() const{
    return cost;
}

void DispenserType::makeSale(){
    numberOfItems--;
}

DispenserType::DispenserType(int setNoOfItems, int setCost){
    if(setNoOfItems >= 0){
        numberOfItems = setNoOfItems;
    } else {
        numberOfItems = 50;
    }

    if(setCost >= 0){
        cost = setCost;
    } else {
        cost = 50;
    }

} //End of DispenserType definitions