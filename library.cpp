#include <iostream>
#include <vector>
using namespace std;

// Class representing a Book
class Book {
private:
    string title;
    string author;
    string isbn;

public:
    // Constructor to initialize Book with title, author, and isbn
    Book(string t, string a, string i) {
        title = t;
        author = a;
        isbn = i;
    }

    // Method to display book details
    void displayInfo() const {
        cout << "Title: " << title << ", Author: " << author << ", ISBN: " << isbn << endl;
    }

    // Getter for title
    string getTitle() const {
        return title;
    }

    // Getter for ISBN
    string getISBN() const {
        return isbn;
    }
};

// Class representing a Library Patron (Library Member)
class Patron {
private:
    string name;
    int patronID;
    vector<Book> checkedOutBooks;

public:
    // Constructor to initialize Patron with name and patronID
    Patron(string n, int id) {
        name = n;
        patronID = id;
    }

    // Method to check out a book
    void checkOutBook(const Book &b) {
        checkedOutBooks.push_back(b);
        cout << name << " checked out " << b.getTitle() << endl;
    }

    // Method to return a book
    void returnBook(const Book &b) {
        for (size_t i = 0; i < checkedOutBooks.size(); i++) {
            if (checkedOutBooks[i].getTitle() == b.getTitle()) {
                checkedOutBooks.erase(checkedOutBooks.begin() + i);
                cout << name << " returned " << b.getTitle() << endl;
                return;
            }
        }
        cout << b.getTitle() << " is not checked out by " << name << endl;
    }

    // Getter for Patron's name
    string getName() const {
        return name;
    }
};

// Class representing the Library
class Library {
private:
    vector<Book> books;
    vector<Patron> patrons;

public:
    // Method to add a book to the library's collection
    void addBook(const Book &b) {
        books.push_back(b);
        cout << "Book '" << b.getTitle() << "' added to the library." << endl;
    }

    // Method to add a patron to the library
    void addPatron(const Patron &p) {
        patrons.push_back(p);
        cout << "Patron '" << p.getName() << "' added to the library." << endl;
    }

    // Method to list all books in the library
    void listBooks() const {
        if (books.empty()) {
            cout << "No books available in the library." << endl;
            return;
        }
        cout << "Books in the library:" << endl;
        for (const auto &b : books) {
            b.displayInfo();
        }
    }
};

// Main function to demonstrate the Library Management System
int main() {
    Library library;

    // Creating book objects
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565");
    Book book2("1984", "George Orwell", "9780451524935");

    // Creating patron objects
    Patron patron1("Alice", 1);
    Patron patron2("Bob", 2);

    // Adding books and patrons to the library
    library.addBook(book1);
    library.addBook(book2);
    library.addPatron(patron1);
    library.addPatron(patron2);

    // Listing books available in the library
    library.listBooks();

    // Alice checks out books
    patron1.checkOutBook(book1);
    patron1.checkOutBook(book2);

    // Bob tries to check out a book
    patron2.checkOutBook(book1);  // Alice already has this book

    // Alice returns a book
    patron1.returnBook(book1);

    // Listing books again to show the changes
    library.listBooks();

    return 0;
}
