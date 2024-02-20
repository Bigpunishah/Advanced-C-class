#include <iostream>
#include <string>
#include "personType.h"

//Print fName & lName
void personType::print() const{
    std::cout<< firstName << " " << lastName;
}

//Setters
void personType::setName(std::string first, std::string last){
    firstName = first;
    lastName = last;
}


//getter fName
std::string personType::getFirstName() const{
    return firstName;
}

//getter lName
std::string personType::getLastName() const{
    return lastName;
}

//constructor
personType::personType(std::string first, std::string last){
    firstName = first;
    lastName = last;
}