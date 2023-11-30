#include "Library.h"
#include <iostream>

int main() {
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

    // Test removing a book that exists in the library
    library.removeBook("Heidi");

    // Test removing a book that does not exist in the library
    library.removeBook("Alice in Wonderland");

    // Test displaying the library contents
    library.displayLibrary();

    // Test adding a book that already exists in the library
    library.addBook("TheLittlePrince");

    // Test adding a book when the library is full
    library.addBook("TheGirlWithTheDragonTattoo");

    // Test displaying the library contents again
    library.displayLibrary();

    return 0;
}