//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#include <iostream>
#include "secretType.h"

int main(){
    secretType person1; //This object is now initiated with the default constructor.
    person1.print();

    secretType person2;
    person2.setName("Elon Musk");
    person2.setAge();
    person2.setHeight();
    person2.setWeight();

    person2.print();
    return 0;
}