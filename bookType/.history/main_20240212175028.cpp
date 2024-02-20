#include <iostream>
#include "bookType.h"

//Prototype of function to display book
void printBook(bookType& bookInput);

int main(){
    bookType book1;
    bookType book2;
    bookType book3; //This is a test book to ensure the printout of all authors
    
    book1.setBookName("Software Engineering 10th Edition");
    book1.setAuthor("Ian Sommerville", 0); //Takes string name & array index placement
    book1.setPublisher("Pearson");
    book1.setISBN("9780133943030");
    book1.setPrice(79.99);
    book1.setYearOfPublicatoion(2016);
    book1.setNoOfCopies(23);


    book2.setBookName("The Lord Of The Rings");
    book2.setAuthor("J.R.R. Tolkien", 0);
    book2.setPublisher("William Morrow");
    book2.setISBN("0618645616");
    book2.setPrice(18.11);
    book2.setYearOfPublicatoion(2005);
    book2.setNoOfCopies(10);

    book3.setBookName("Test Book");
    book3.setAuthor("foo", 0);
    book3.setAuthor("fum", 1);
    book3.setAuthor("blee", 2);
    book3.setAuthor("blum", 3);
    book3.setPublisher("Me Mum");
    book3.setISBN("12345678910");
    book3.setPrice(12.99);
    book3.setYearOfPublicatoion(1832);
    book3.setNoOfCopies(2);

    printBook(book1);
    printBook(book2);
    printBook(book3); // This test is to see the authors printed.

    return 0;
}

//Definition of prototype
void printBook(bookType& bookInput){
    std::cout<<"Book name: " << bookInput.getBookName() << std::endl;
    std::cout<<"Author(s): ";
    for(int i = 0; i < 4; i++){
        std::cout<<bookInput.getAuthor(i) << " ";
    }
    std::cout<<std::endl; 
    std::cout<<"Publisher: " << bookInput.getPublisher() << std::endl;
    std::cout<<"ISBN: " << bookInput.getISBN() << std::endl;
    std::cout<<"Price: $" << bookInput.getPrice() << std::endl;
    std::cout<<"Year of publication: " << bookInput.getYearOfPublicatoion() << std::endl;
    std::cout<<"Number of copies: "<< bookInput.getNoOfCopies() << std::endl;
    std::cout<<std::endl;
}