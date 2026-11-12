#include "Library.h"

using namespace std;

Library::Library(string location)
{
    this->location = location;
}

void Library::addBook(Book carte)
{
    books.push_back(carte);
    numberofbooks++;
}

Book& Library::getBook(string bookName)
{
    for (auto& book : books)
    {
        if (book.getBookName() == bookName)
            return book;
    }
    throw runtime_error("Cartea nu a fost gasita!");
}
