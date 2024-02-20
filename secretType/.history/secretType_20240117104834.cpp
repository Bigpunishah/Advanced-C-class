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


//Const accessor function for name
std::string secretType::getName() const{
    return name;
}

//Const accessor function for age
int secretType::getAge() const{
    return age;
}

//Const accessor function for name
int secretType::getWeight() const{
    return weight;
}

//Const accessor function for name
double secretType::getHeight() const{
    return height;
}


void secretType::print(){
    std::cout<<"This is " << getName() << " and they are " << getAge() << " years old" << "they are " << getHeight() << " tall at " << getWeight() << " pounds." << std::endl;
}
