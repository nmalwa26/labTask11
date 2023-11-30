//include headers and libraries
#include <string.h>
#include "Library.h"
#include <iostream>

//constructor for library class to intialize all books to empty strings
Library::Library(){
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}

//adds a book to the library
bool Library::addBook(string bookName){
    //checks if the book already exists
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            return false;
        }
    }
    //checks if the library is full
    for(int i = 0; i < 10; i++){
        if(books[i] == ""){
            books[i] = bookName;
            return true;
        }
    }
    return false;
}

//removes a book from the library
bool Library::removeBook(string bookName){
    //checks if the book exists
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            books[i] = "";
            return true;
        }
    }
    return false;
}

//prints the books in the library
void Library::print(){
    for(int i = 0; i < 10; i++){
        if(books[i] != ""){
            cout << books[i] << endl;
        }
    }
}



