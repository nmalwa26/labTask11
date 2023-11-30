//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string.h>

//implement class functions
int main(){
    // Create an instance of the Library class
    Library library;

    // Test adding books to the library
    library.addBook("Hobbit");
    library.addBook("TheLittlePrince");
    library.addBook("DaVinciCode");
    library.addBook("TheAlchemist");
    library.addBook("Heidi");
    library.addBook("BlackBeauty");
    library.addBook("LordOfTheRings");
    library.addBook("ATaleOfTwoCities");
    library.addBook("WarAndPeace");
    library.addBook("HarryPotter");

    // Test removing a book from the library
    library.removeBook("Heidi");

    // Test adding a book that already exists in the library
    library.addBook("Hobbit");

    // Test displaying the library contents
    library.displayLibrary();

    // Test adding a new book to the library
    library.addBook("TheGirlWithTheDragonTattoo");

    // Test displaying the library contents again
    library.displayLibrary();

    // Test exiting the program
    library.exit();

    return 0;
}