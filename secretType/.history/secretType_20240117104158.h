//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#ifndef SECRETTYPE_H
#define SECRETTYPE_H

#include <string>

class secretType{

private:
    int age, weight;
    std::string name;
    double height;

public:
    void print() const;
    void setName(std::string name);
    void setAge(int age);
    void setWeight(int weight);
    void setHeight(double height);

    //const after the function means that the variables within the class cannont me modified
    std::string getName() const; //Returns name
    int getAge() const; //Returns age
    int getWeight() const; //Returns weight
    double getHeight() const; //Returns height


     


};

#endif