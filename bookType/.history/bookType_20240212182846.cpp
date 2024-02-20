//Vikel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#include <iostream>
#include "bookType.h"

//Sets book name
void bookType::setBookName(std::string bookNameInput){
    bookName = bookNameInput;
}

//Gets book name
std::string bookType::getBookName(){
    return bookName;
}


//!Old function
//Sets author
// void bookType::setAuthor(std::string authorInput, int arrayIndex){
//     authors[arrayIndex] = authorInput;
// }

//!Refactored function
void bookType::setAuthor(const std::string& authorInput){
    if(!authorInput){
        authors = new std::string[1];
    }
}


//Gets author
std::string bookType::getAuthor(int arrayIndex){
    return authors[arrayIndex];
}

//Sets publisher
void bookType::setPublisher(std::string publisherInput){
    publisher = publisherInput;
}

//Get publisher
std::string bookType::getPublisher(){
    return publisher;
}

//Sets ISBN
void bookType::setISBN(std::string ISBNInput){
    ISBN = ISBNInput;
}

//Gets ISBN
std::string bookType::getISBN(){
    return ISBN;
}

//Sets price
void bookType::setPrice(double priceInput){
    price = priceInput;
}

//Gets price
double bookType::getPrice(){
    return price;
}

//Sets year of publication
void bookType::setYearOfPublicatoion(__int16 yearOfPublicationInput){
    yearOfPublication = yearOfPublicationInput;
}

//Gets year of publication
__int16 bookType::getYearOfPublicatoion(){
    return yearOfPublication;
}

void bookType::setNoOfCopies(int numOfCopiesInput){
    numOfCopies = numOfCopiesInput;
}

int bookType::getNoOfCopies(){
    return numOfCopies;
}


//This is the default constructor that assigns values automatically when the 
//Object is created
bookType::bookType(){
    bookName = "No book assigned yet.";
    authors = nullptr;
    numOfAuthors = 0;
}

//Example of deconstructor deleting the allocated memory for the authors.
bookType::~bookType(){
    std::cout<<"This book is now going out of scope & will be deleted.";
    delete[] authors;
}
