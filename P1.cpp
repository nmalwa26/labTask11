//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string.h>


int main(){
    Library library;
    
    //code that gets command from user 
    //and calls the appropriate function
    //until the user types "quit"
    string command;

    while(cin >> command){
        if(command == "add"){
            string bookName;
            cin >> bookName;
            if(!library.addBook(bookName)){
                cout << "Book already exists or library is full" << endl;
            }
        }
        else if(command == "remove"){
            string bookName;
            cin >> bookName;
            if(!library.removeBook(bookName)){
                cout << "Book does not exist" << endl;
            }
        }
        else if(command == "print"){
            library.print();
        }
        else if(command == "quit"){
            break;
        }
        else{
            cout << "Invalid command" << endl;
        }
    }


    return 0;

}
