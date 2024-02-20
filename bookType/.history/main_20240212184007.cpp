#include <iostream>
#include "bookType.h"

//Prototype of function to display book
void printBook(bookType& bookInput);

int main(){
    bookType book1;
    book1.setAuthor("tooty");
    book1.setAuthor("blooty");
    std::cout<<book1.getNumOfAuthors() << std::endl;;

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