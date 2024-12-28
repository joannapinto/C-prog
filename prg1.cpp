//1. Write a C++ program to manage the details of a book in a library. Create an object of the 
//class and call displayDetails() function to display the book's information.

#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    string isbn;

    void displayDetails(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
    }
};

int main() {
    // Create a Book object and set its details
    Book myBook;
    myBook.title = "1984";
    myBook.author = "George Orwell";
    myBook.isbn = "9780451524935";

    // Display the book's information
    myBook.displayDetails();

    return 0;
}