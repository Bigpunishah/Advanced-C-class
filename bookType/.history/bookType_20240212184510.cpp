#include <iostream>
#include "bookType.h"

//Sets book name
// void bookType::setBookName(std::string bookNameInput){
//     bookName = bookNameInput;
// }

// //Gets book name
// std::string bookType::getBookName(){
//     return bookName;
// }

//Sets author
// void bookType::setAuthor(std::string authorInput, int arrayIndex){
//     authors[arrayIndex] = authorInput;
// }


// //Gets author
// std::string bookType::getAuthor(int arrayIndex){
//     return authors[arrayIndex];
// }

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
}

bookType::~bookType(){
    std::cout<<"Book out of scope - deleting the book";
}

#include "bookType.h"

// Constructor
bookType::bookType() {
    bookName = "No book assigned yet.";
    authors = nullptr;
    numAuthors = 0;
}

// Destructor
bookType::~bookType() {
    delete[] authors; // Free dynamically allocated memory
}

// Set book name
void bookType::setBookName(const std::string& name) {
    bookName = name;
}

// Get book name
std::string bookType::getBookName() const {
    return bookName;
}

// Add author
void bookType::addAuthor(const std::string& author) {
    // Allocate memory for authors if it's not initialized
    if (!authors) {
        authors = new std::string[1];
        authors[0] = author;
    } else {
        // Create a new array with one more element
        std::string* temp = new std::string[numAuthors + 1];
        // Copy existing authors to the new array
        for (int i = 0; i < numAuthors; ++i) {
            temp[i] = authors[i];
        }
        // Add the new author
        temp[numAuthors] = author;
        // Delete the old authors array
        delete[] authors;
        // Assign the new array to authors
        authors = temp;
    }
    // Increment the number of authors
    ++numAuthors;
}

// Get author
std::string bookType::getAuthor(int index) const {
    if (index >= 0 && index < numAuthors) {
        return authors[index];
    }
    return "Invalid index";
}

