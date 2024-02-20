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
    void setAge(int age) const;
    void setWeight(double weight);
    void setHeight(int height);

    std::string getName() const; //Returns name
    int getAge() const; //Returns age
    int getWeight() const; //Returns weight
    double getHeight() const; //Returns height


     


};

#endif