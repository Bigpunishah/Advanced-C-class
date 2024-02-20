#include <iostream>
#include "bookType.h"

//Prototype of function to display book
void printBook(bookType& bookInput);

int main() {
    // Create a book object
    bookType myBook;

    // Set book details
    myBook.setBookName("Sample Book");
    myBook.addAuthor("Author 1");
    myBook.addAuthor("Author 2");
    myBook.setPublisher("Sample Publisher");
    myBook.setISBN("1234567890");
    myBook.setPrice(19.99);
    myBook.setYearOfPublicatoion(2022);
    myBook.setNoOfCopies(100);

    // Display book details
    std::cout << "Book Name: " << myBook.getBookName() << std::endl;
    std::cout << "Authors: ";
    for (int i = 0; i < myBook.getNumAuthors(); ++i) {
        std::cout << myBook.getAuthor(i) << ", ";
    }
    std::cout << std::endl;
    std::cout << "Publisher: " << myBook.getPublisher() << std::endl;
    std::cout << "ISBN: " << myBook.getISBN() << std::endl;
    std::cout << "Price: $" << myBook.getPrice() << std::endl;
    std::cout << "Year of Publication: " << myBook.getYearOfPublicatoion() << std::endl;
    std::cout << "Number of Copies: " << myBook.getNoOfCopies() << std::endl;

    return 0;
}

//Definition of prototype
void printBook(bookType& bookInput){
    std::cout<<"Book name: " << bookInput.getBookName() << std::endl;
    std::cout<<"Author(s): ";
    for(int i = 0; i < 4; i++){
        //std::cout<<bookInput.getAuthor(i) << " ";
    }
    std::cout<<std::endl; 
    std::cout<<"Publisher: " << bookInput.getPublisher() << std::endl;
    std::cout<<"ISBN: " << bookInput.getISBN() << std::endl;
    std::cout<<"Price: $" << bookInput.getPrice() << std::endl;
    std::cout<<"Year of publication: " << bookInput.getYearOfPublicatoion() << std::endl;
    std::cout<<"Number of copies: "<< bookInput.getNoOfCopies() << std::endl;
    std::cout<<std::endl;
}