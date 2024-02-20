#include <iostream>
#include "personType.h"

void personType::print() const{
    std::cout<< firstName << " " << lastName;
}

void personType::setName(std::string first, std::string last){
    firstName = first;
    lastName = last;
}

std::string personType::getFirstName() const{
    return firstName;
}

std::string personType::getLastName() const{
    return lastName;
}

//constructor
personType::personType(std::string first, std::string last){
    firstName = first;
    lastName = last;
}