//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu

#include <iostream>
#include "juiceMachine.h"

void sellProduct(DispenserType& product, CashRegister& pCounter);
void showSelection();

int main(){

    CashRegister counter;
    DispenserType orange(100, 50);
    DispenserType apple(100, 65);
    DispenserType mango(75, 80);
    DispenserType strawberryBannana(100, 85);

    int choice;

    showSelection();
    std::cin >> choice;

    while (choice != 9){
        switch (choice){

        case 1:
            sellProduct(orange, counter);
            break;
        case 2:
            sellProduct(apple, counter);
            break;
        case 3: 
            sellProduct(mango, counter);
            break;
        case 4: 
            sellProduct(strawberryBannana, counter);
            break;

        default:
            std::cout << "Wrong selection, please try again" << std::endl;
        } //End switch
        showSelection();
        std::cin >> choice;
    }//End while


    return 0;
} // End main


void showSelection(){
    std::cout << "*** Welcome to Shell's Juice Shop ***" << std::endl;
    std::cout << "To select an item, enter " << std::endl;
    std::cout << "1 for orange juice (50 cents)" << std::endl;
    std::cout << "2 for apple juice (65 cents)" << std::endl;
    std::cout << "3 for mango juice (80 cents)" << std::endl;
    std::cout << "4 for strawberry bannana juice (85 cents)" << std::endl;
    std::cout << "9 to exit" << std::endl;

} //End showSelection

//Using pass by reference - the object sent in points to the object itself so saves space.
void sellProduct(DispenserType& product, CashRegister& pCounter){
    int amount;
    int amount2;

    if(product.getNoOfItems() > 0){
        std::cout << "Please deposit " << product.getCost() << " cents" << std::endl;
        std::cin >> amount;

        if(amount < product.getCost()){
            std::cout << "Please deposit " << product.getCost() << " cents" << std::endl;
            std::cin >> amount2;
            amount += amount2;
            std::cout << "TOTAL ENTERED:" << amount << std::endl; //! Added for testing
        }

        if(amount >= product.getCost()){
            pCounter.acceptAmount(amount);
            product.makeSale();
            std::cout << "Collect your item at the bottom & enjoy." << std::endl;
            std::cout << "Collect your change: " << product.getCost() - amount << std::endl; 
        }
    }
}