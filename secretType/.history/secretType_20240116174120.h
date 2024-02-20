//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#ifndef SECRETTYPE_H
#define SECRETTYPE_H

#include <string>

class secretType{

private:
    std::string name;
    int age, weight;
    double height;

public:
    void print();
    void setName(std::string name);


};

#endif