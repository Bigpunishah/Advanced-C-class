//Vikel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#ifndef BOOKTYPE_H
#define BOOKTYPE_H
#include <string>


//Should be able to receive objects of itself.
class bookType{
private:
    std::string bookName;
    std::string* authors;
    int numOfAuthors; 
    std::string publisher;
    std::string ISBN; //Try to include the "-"
    double price;
    __int16 yearOfPublication;
    int numOfCopies;

    int size;
    int capacity;

public:
    void setBookName(std::string);
    std::string getBookName();
    // void setAuthor(std::string, int); //The int is for the arrayIndex of where the author should be placed.
    void setAuthor(const std::string&);
    // std::string getAuthor(int); //Int is for the arrayIndex
    std::string getAuthor();
    void setPublisher(std::string); 
    std::string getPublisher();
    void setISBN(std::string);
    std::string getISBN();
    void setPrice(double);
    double getPrice();
    void setYearOfPublicatoion(__int16); //__int16 holds up value 32,000
    __int16 getYearOfPublicatoion();
    void setNoOfCopies(int);
    int getNoOfCopies();

    ~bookType();//deconstructor
    bookType(); //Empty constructor

    void test(int);
};

#endif