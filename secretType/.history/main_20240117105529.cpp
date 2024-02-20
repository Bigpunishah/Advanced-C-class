//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#include <iostream>
#include "secretType.h"

int main(){
    secretType person1; //This object is now initiated with the default constructor.
    person1.print();

    secretType person2;
    person2.setName("Elon Musk");
    person2.setAge(52);
    person2.setHeight(74);
    person2.setWeight(210);

    person2.print(); //Prints person2 with varibles intialized after object is initialized.
    return 0;
}