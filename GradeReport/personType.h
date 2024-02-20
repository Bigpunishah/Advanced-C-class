#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <string>

class personType{
private:
    std::string firstName;
    std::string lastName;

public:
    void print() const;
    void setName(std::string first, std::string last);
    std::string getFirstName() const;
    std::string getLastName() const;
    
    personType(std::string first = "", std::string last = "");
    
};

#endif