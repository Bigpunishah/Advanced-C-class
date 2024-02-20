//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu

#include <iostream>
#include "secretType.h"

//Set the name
void secretType::setName(std::string name){
    this->name = name;
}

//Set the age
void secretType::setAge(int age){
    this->age = age;
}

//Set the weight
void secretType::setWeight(int weight){
    this->weight = weight;
}

//Set the height
void secretType::setHeight(double height){
    this->height = height;
}

std::string secretType::getName() const{
    return name;
}